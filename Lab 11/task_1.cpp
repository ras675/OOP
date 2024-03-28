// empl_io.cpp
// performs file I/O on employee objects
// handles different sized objects
#include <fstream>            //for file-stream functions
#include <iostream>
#include <typeinfo>           //for typeid()
using namespace std;
#include <cstdlib>         //for exit()

const int LEN = 32;           //maximum length of last names
const int MAXPD = 100;        //maximum number of product

enum product_type {tBook, tDVD,};
////////////////////////////////////////////////////////////////
class product                //employee class
   {
   private:
      char title[LEN];
      char authorOrdirector[LEN];
      int unit_price;
      unsigned long id;   //employee number
      static int n;           //current number of employees
      static product* arrap[];  //array of ptrs to emps
   public:
      virtual void getdata()
         {
         cin.ignore(10, '\n');

         cout << "   Enter id: ";      cin >> id;
         }
      virtual void putdata()
         {

         cout << "\n   id: " << id;
         }
      virtual product_type get_type();  //get type
      static void add();      //add an employee
      static void display();  //display all employees
      static void read();     //read from disk file
      static void write();    //write to disk file
   };
//--------------------------------------------------------------
//static variables
int product::n;              //current number of employees
product* product::arrap[MAXPD];  //array of ptrs to emps
////////////////////////////////////////////////////////////////
//manager class
class Book : public product
   {
   private:
      char title[LEN];        //"vice-president" etc.
      char author[LEN];
      int unit_price;            //golf club dues
   public:
      void getdata()
         {
         product::getdata();
         cout << "   Enter title: ";          cin >> title;
         cout << "   Enter author: "; cin >> author;
         cout << "Unit price:";
         cin>>unit_price;
         }
      void putdata()
         {
         product::putdata();
         cout << "\n   Title: " << title;
         cout << "\n   Author: " << author;
         cout << "\n   unit_price: " << unit_price;
         }
   };
////////////////////////////////////////////////////////////////
//scientist class
class DVD : public product
   {
   private:
      char director[LEN];
      int unit_price;               //number of publications
   public:
      void getdata()
         {
         product::getdata();
         cout << "   Enter Director: "; cin >> director;
          cout << "   Enter unit price: "; cin >> unit_price;
         }
      void putdata()
         {
         product::putdata();
         cout << "\n   Name of the Director: " << director;
         cout << "\n   unit price: " << unit_price;
         }
   };
////////////////////////////////////////////////////////////////
//laborer class
//class laborer : public employee
   //{
  // };
////////////////////////////////////////////////////////////////
//add employee to list in memory
void product::add()
   {
   char ch;
   cout << "'b' to add a book"
           "\n'd' to add a DVD"

           "\nEnter selection: ";
   cin >> ch;
   switch(ch)
      {                       //create specified employee type
      case 'b': arrap[n] = new Book;   break;
      case 'd': arrap[n] = new DVD; break;

      default: cout << "\nUnknown product type\n"; return;
      }
   arrap[n++]->getdata();     //get employee data from user
   }
//--------------------------------------------------------------
//display all employees
void product::display()
   {
   for(int j=0; j<n; j++)
      {
      cout  << (j+1);           //display number
      switch( arrap[j]->get_type() )   //display type
         {
         case tBook:    cout << ". Type: Book";   break;
         case tDVD:  cout << ". Type: DVD"; break;

         default: cout << ". Unknown type";
         }
      arrap[j]->putdata();    //display employee data
      cout << endl;
      }
   }
//--------------------------------------------------------------
//return the type of this object
product_type product::get_type()
   {
   if( typeid(*this) == typeid(Book) )
      return tBook;
   else if( typeid(*this)==typeid(DVD) )
      return tDVD;

   else
      { cerr << "\nBad product type"; exit(1); }
   return tBook;
   }
//--------------------------------------------------------------
//write all current memory objects to file
void product::write()
   {
   int size;
   cout << "Writing " << n << " product.\n";
   ofstream ouf;              //open ofstream in binary
   product_type ptype;       //type of each employee object

   ouf.open("PRODUCT.DAT", ios::trunc | ios::binary);
   if(!ouf)
      { cout << "\nCan't open file\n"; return; }
   for(int j=0; j<n; j++)     //for every employee object
      {                       //get its type
      ptype = arrap[j]->get_type();
                              //write type to file
      ouf.write( (char*)&ptype, sizeof(ptype) );
      switch(ptype)           //find its size
         {
         case tBook:   size=sizeof(Book); break;
         case tDVD: size=sizeof(DVD); break;

         }                    //write employee object to file
      ouf.write( (char*)(arrap[j]), size );
      if(!ouf)
         { cout << "\nCan't write to file\n"; return; }
      }
   }
//--------------------------------------------------------------
//read data for all employees from file into memory
void product::read()
   {
   int size;                  //size of employee object
   product_type ptype;       //type of employee
   ifstream inf;              //open ifstream in binary
   inf.open("PRODUCT.DAT", ios::binary);
   if(!inf)
      { cout << "\nCan't open file\n"; return; }
   n = 0;                     //no employees in memory yet
   while(true)
      {                       //read type of next employee
      inf.read( (char*)&ptype, sizeof(ptype) );
      if( inf.eof() )         //quit loop on eof
         break;
      if(!inf)                //error reading type
         { cout << "\nCan't read type from file\n"; return; }
      switch(ptype)
         {                    //make new employee
         case tBook:       //of correct type
            arrap[n] = new Book;
            size=sizeof(Book);
            break;
         case tDVD:
            arrap[n] = new DVD;
            size=sizeof(DVD);
            break;

         default: cout << "\nUnknown type in file\n"; return;
         }                    //read data from file into it
      inf.read( (char*)arrap[n], size  );
      if(!inf)                //error but not eof
         { cout << "\nCan't read data from file\n"; return; }
      n++;                    //count employee
      }  //end while
   cout << "Reading " << n << " product\n";
   }
////////////////////////////////////////////////////////////////
int main()
   {
   char ch;
   while(true)
      {
      cout << "'a' -- add data for a product"
              "\n'd' -- display data for all product"
              "\n'w' -- write all product data to file"
              "\n'r' -- read all product data from file"
              "\n'x' -- exit"
              "\nEnter selection: ";
      cin >> ch;
      switch(ch)
         {
         case 'a':            //add an employee to list
            product::add(); break;
         case 'd':            //display all employees
            product::display(); break;
         case 'w':            //write employees to file
            product::write(); break;
         case 'r':            //read all employees from file
            product::read(); break;
         case 'x': exit(0);   //exit program
         default: cout << "\nUnknown command";
         }  //end switch
      }  //end while
   return 0;
   }  //end main()