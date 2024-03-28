#include<iostream>
using namespace std;
class Product
{
private:
    string name;
    int id=0;
    double price=0;
    int maxQuantity=0;
    int quantity=0;
    bool availability=false;
public:
    Product(string _name,int _id,double _price,int _quantity)
    {
        name = _name;
        id = _id;
        price =  _price;
        quantity = _quantity;
        availability=(_quantity>0);
        maxQuantity=0;

    }

    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    double getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
    bool isAvailable()
    {
        return availability;
    }
    void setName(string newName) {
        name = newName;
    }
    void setId(int newId) {
        id = newId;
    }
    void setPrice(double newPrice) {
        price = newPrice;
    }
    void setQuantity(int newQuantity) {
        quantity = newQuantity;

    }
    void isAvailable(int quantity)
    {
        availability = (quantity > 0);
    }


    void setMaxQuantity(int qty)
    {
        maxQuantity=qty;
        if(quantity>maxQuantity)
        {
            quantity=maxQuantity;
        }

    }
    void addToInventory(int added_quantity)
    {
        if(maxQuantity>0)
        {
            quantity+=added_quantity;
            if(quantity>maxQuantity)
            {
                quantity=maxQuantity;

            }
            availability=true;
        }
    }

    void purchase(int purchased_quantity)
    {
        if(availability && purchased_quantity>0 && purchased_quantity <= quantity)
        {
            quantity -= purchased_quantity;
            if(quantity==0)
            {
                availability=false;
            }
        }
    }
    int updatePrice(int percent)
    {
        double percentage=double(percent)/100.00;
        price+=price*percentage;
        return price;
    }
    void displayInventoryValue()
    {
        double totalValue = price * quantity;
        cout << "Total value of " << name << " in inventory: " << totalValue << endl;
    }
    void displayDetails() const {
        cout << "Product Name: " << name << endl;
        cout << "Product ID: " << id << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        if(availability)
        {
            cout<<"Available"<<endl;
        }
        else
        {
            cout<<"Not Available"<<endl;
        }
    }


    ~Product()
    {

    }
};



int main()
{
    Product obj1("Jersey",1, 1000.0, 10);
    Product obj2("Fotball",2, 500.0, 10);
    Product obj3("Glaves",3,200.0,10);
    obj1.displayDetails();
    obj1.displayInventoryValue();
    obj2.displayDetails();
    obj2.displayInventoryValue();
    obj3.addToInventory(4);
    obj3.displayDetails();
    obj3.displayInventoryValue();
    obj2.purchase(5);
    obj2.displayDetails();
    obj2.displayInventoryValue();
    obj1.updatePrice(10);
    obj1.displayDetails();

    return 0;
}




