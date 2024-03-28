#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Member {
private:
    string name;
    string postalAddress;
    string phoneNumber;
    string emailAddress;
    string membershipStatus;

public:
    Member(const string& n, const string& addr, const string& phone, const string& email, const string& status)
        : name(n), postalAddress(addr), phoneNumber(phone), emailAddress(email), membershipStatus(status) {}

    string getName() const { return name; }
    string getPostalAddress() const { return postalAddress; }
    string getPhoneNumber() const { return phoneNumber; }
    string getEmailAddress() const { return emailAddress; }
    string getMembershipStatus() const { return membershipStatus; }
};

class Book {
private:
    string title;
    string author;
    string publicationDate;
    string isbn;
    string edition;

public:
    Book(const string& t, const string& a, const string& pubDate, const string& i, const string& e)
        : title(t), author(a), publicationDate(pubDate), isbn(i), edition(e) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getPublicationDate() const { return publicationDate; }
    string getISBN() const { return isbn; }
    string getEdition() const { return edition; }
};

class Library {
private:
    string name;
    string location;
    string workingHours;
    vector<Book> books;
    vector<Member> members;

public:
    Library(const string& n, const string& loc, const string& hours)
        : name(n), location(loc), workingHours(hours) {}

    void addBook(const Book& book) {
        books.push_back(book);
    }

    void addMember(const Member& member) {
        members.push_back(member);
    }

    void displayBooks() {
        cout << "Library Name: " << name << "\nLocation: " << location << "\nWorking Hours: " << workingHours << "\n\n";
        cout << "Books in the Library:\n";
        for (const auto& book : books) {
            cout << "Title: " << book.getTitle() << "\nAuthor: " << book.getAuthor() << "\nPublication Date: " << book.getPublicationDate() << "\nISBN: " << book.getISBN() << "\nEdition: " << book.getEdition() << "\n\n";
        }
    }

    void displayMembers() {
        cout << "Library Name: " << name << "\nLocation: " << location << "\nWorking Hours: " << workingHours << "\n\n";
        cout << "Library Members:\n";
        for (const auto& member : members) {
            cout << "Name: " << member.getName() << "\nPostal Address: " << member.getPostalAddress() << "\nPhone Number: " << member.getPhoneNumber() << "\nEmail Address: " << member.getEmailAddress() << "\nMembership Status: " << member.getMembershipStatus() << "\n\n";
        }
    }
};

int main() {
    Library myLibrary("My Library", "IUT", "9:00 AM - 6:00 PM");

    myLibrary.addBook(Book("Book 1", "Author A", "2023-01-01", "ISBN001", "1st Edition"));
    myLibrary.addBook(Book("Book 2", "Author B", "2023-02-02", "ISBN002", "2nd Edition"));
    myLibrary.addBook(Book("Book 3", "Author C", "2013-03-03", "ISBN003", "3rd Edition"));
    myLibrary.addBook(Book("Book 4", "Author D", "2013-04-04", "ISBN004", "4th Edition"));
    myLibrary.addBook(Book("Book 5", "Author E", "2013-05-05", "ISBN005", "5th Edition"));
    myLibrary.addBook(Book("Book 6", "Author F", "2013-06-06", "ISBN006", "6th Edition"));
    myLibrary.addBook(Book("Book 7", "Author G", "2013-07-07", "ISBN007", "7th Edition"));
    myLibrary.addBook(Book("Book 8", "Author H", "2013-08-08", "ISBN008", "8th Edition"));
    myLibrary.addBook(Book("Book 9", "Author I", "2013-09-09", "ISBN009", "9th Edition"));
    myLibrary.addBook(Book("Book 10", "Author J", "2013-10-10", "ISBN010", "10th Edition"));

    myLibrary.addMember(Member("Rafiq", "Mirpur-10,Dhaka", "01734567890", "rafiq3@gmail.com", "Student Member"));
    myLibrary.addMember(Member("Sakib", "Mirpur-12,Dhaka", "01798654210", "sakib75@gmail.com", "Faculty Member"));
    myLibrary.addMember(Member("Nafi", "Banani,Dhaka", "01742233533", "nafi2@gmail.com", "Staff Member"));
    myLibrary.addMember(Member("Shafi", "Uttara,Dhaka", "0174455666", "shafi9@gmail.com", "Student Member"));
    myLibrary.addMember(Member("Asif", "Mirpur-10,Dhaka", "0177788999", "asif63@gmail.com", "Guest"));


    myLibrary.displayBooks();
    myLibrary.displayMembers();

    return 0;
}


