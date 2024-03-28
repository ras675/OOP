#include <iostream>
#include <string>

using namespace std;

class BookCollection {
private:
    string titles[5];
    string authors[5];
    double prices[5];
    int numBooks;

public:

    BookCollection() : numBooks(0) {

        for (int i = 0; i < 5; ++i) {
            titles[i] = "";
            authors[i] = "";
            prices[i] = 0.0;
        }
    }

    double operator[](const string& title) const {
        for (int i = 0; i < numBooks; ++i) {
            if (titles[i] == title) {
                return prices[i];
            }
        }
        return 0.0;
    }
    double& operator[](const string& title) {
        for (int i = 0; i < numBooks; ++i) {
            if (titles[i] == title) {
                return prices[i];
            }
        }


        if (numBooks < 5) {
            titles[numBooks] = title;
            authors[numBooks] = "";
            return prices[numBooks++];
        } else {
            cout  << "Error: Collection is at its maximum capacity." << endl;
            exit(1);
        }
    }


    void addBook(const string& title, const string& author, double price) {
        if (numBooks < 5) {
            titles[numBooks] = title;
            authors[numBooks] = author;
            prices[numBooks++] = price;
        } else {
            cout << "Error: Collection is at its maximum capacity." << endl;
        }
    }
};

int main() {
    BookCollection collection;


    collection.addBook("Book1", "Author1", 20.0);
    collection.addBook("Book2", "Author2", 25.0);
    collection.addBook("Book3", "Author3", 30.0);


  cout << "Book1 price: " << collection["Book1"] << endl;
    collection["Book1"] = 22.0;
  cout << "Updated Book1 price: " << collection["Book1"] << endl;
    cout << "Book4 price (not found): " << collection["Book4"] << endl;



     cout << "Book2 price: " << collection["Book2"] << endl;
     cout << "Book3 price: " << collection["Book3"] << endl;
     collection["Book3"] = 50.0;
     cout << "Updated Book3 price: " << collection["Book3"] << endl;
    return 0;
}

