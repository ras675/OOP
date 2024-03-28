#include<iostream>
using namespace std;
class Medicine
{
private:
   string name;
   string genericName;
   double discountPercent=5.00;
   double unitPrice=0;
public:
void assignName(string cname,string cgenericName)
{

    name=cname;
    genericName=cgenericName;

}
void assignPrice(double price)
{
    unitPrice=price;
}

void setDiscountPercent(double percent)
{
    discountPercent=percent;


}

double getSellingPrice(int nos)
{
    double sellingPrice=(nos*unitPrice)-(nos*discountPercent*unitPrice*.01);
    return sellingPrice;
}

void display()
{
    cout<<name<<" "<<genericName<<" has a unit price of BDT "<<unitPrice<<". Current discount "<<discountPercent<<endl;
}

};


int main()
{
    Medicine obj1;
    string name="Napa";
    string genericName="(Paracetamol)";
    obj1.assignName(name,genericName);
    obj1.assignPrice(0.80);
    obj1.setDiscountPercent(10);
    double sell=obj1.getSellingPrice(5);
    cout<<sell<<endl;
    obj1.display();


}
