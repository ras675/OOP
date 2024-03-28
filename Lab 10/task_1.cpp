#include <iostream>

using namespace std;

class Product {
protected:
    string title;
    string authorOrDirector;
    int ID;

public:
    static int totalProducts;

    Product(const string& title, const string& authorOrDirector, int ID)
        : title(title), authorOrDirector(authorOrDirector), ID(ID) {
        totalProducts++;
    }

    virtual void displayInfo() const = 0;

    static int getTotalProducts() {
        return totalProducts;
    }

    bool operator<(const Product& other) const {
        return this->ID < other.ID;
    }
};

int Product::totalProducts = 0;

class Book : public Product {
public:
    Book(const string& title, const string& author, int ID)
        : Product(title, author, ID) {}

    void displayInfo() const override {
        cout << "Book ID: " << ID << ", Title: " << title << ", Author: " << authorOrDirector << endl;
    }
};

class DVD : public Product {
public:
    DVD(const string& title, const string& director, int ID)
        : Product(title, director, ID) {}

    void displayInfo() const override {
        cout << "DVD ID: " << ID << ", Title: " << title << ", Director: " << authorOrDirector << endl;
    }
};

void bubbleSort(Product* arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (*arr[j] < *arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int MAX_PRODUCTS = 5;
    Product* inventory[MAX_PRODUCTS];

    inventory[0] = new Book("Book Title 1", "Author 1", 101);
    inventory[1] = new DVD("DVD Title 1", "Director 1", 102);
    inventory[2] = new Book("Book Title 2", "Author 2", 103);
    inventory[3] = new DVD("DVD Title 2", "Director 2", 104);
    inventory[4] = new Book("Book Title 3", "Author 3", 105);


    for (int i = 0; i < MAX_PRODUCTS; ++i) {
        inventory[i]->displayInfo();
    }


    cout << "Total products created: " << Product::getTotalProducts() << endl;

    bubbleSort(inventory, MAX_PRODUCTS);


    cout << "\nSorted Products based on ID:" << endl;
    for (int i = 0; i < MAX_PRODUCTS; ++i) {
        inventory[i]->displayInfo();
    }


    for (int i = 0; i < MAX_PRODUCTS; ++i) {
        delete inventory[i];
    }

    return 0;
}
