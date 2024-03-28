#include <iostream>
#include <vector>
using namespace std;


class Publication {
public:
    string title;

    Publication(const string& title) : title(title) {}

    virtual void display_info() const = 0; 
};


class Book : public Publication {
public:
    Book(const string& title) : Publication(title) {}

    void display_info() const override {
        cout << "Book Title: " << title << endl;
    }
};


class Journal : public Publication {
public:
    string authorList;
    int publishingYear;
    string topicName;

    Journal(const string& title, const string& authorList, int publishingYear, const string& topicName)
        : Publication(title), authorList(authorList), publishingYear(publishingYear), topicName(topicName) {}

    void display_info() const override {
        cout << "Journal Title: " << title << endl;
        cout << "Authors: " << authorList << endl;
        cout << "Publishing Year: " << publishingYear << endl;
        cout << "Topic: " << topicName << endl;
    }
};


class Library {
private:
    vector<Publication*> items;

public:
    static const int MAX_ITEMS = 100;
    static const int MAX_LENDING_DAYS = 14;

    void add_item(Publication* item) {
        if (items.size() < MAX_ITEMS) {
            items.push_back(item);
            cout << "Item added to the library." << endl;
        } else {
            cout << "Library is full. Cannot add more items." << endl;
        }
    }

    void lend_item(Publication* item) const {
        
        cout << "Item lent to a user." << endl;
    }

    void display_library_contents() const {
        cout << "Library Contents:" << endl;
        for (const auto& item : items) {
            item->display_info();
            cout<<endl;
        }
    }
};




int main() {
    
    Book book1("Book1");
    Journal journal1("Journal1", "Nafi,Rupak", 2023, "Advanced Research");

    
    Publication* publications[] = {&book1, &journal1};

    
    Library library;


    for (auto publication : publications) {
        library.add_item(publication);
    }

   
    library.display_library_contents();

    

    return 0;
}
