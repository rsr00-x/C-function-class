>>_ ctto.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
//double find_if;
// Define the Book struct
struct Book {
    int isbn;
    string title;
    string first;
    string last;
    string edition;
};
// Function prototypes
void displayMenu();
void viewCurrentInventory(const vector<Book>& inventory);
void donateBook(vector<Book>& inventory);
void takeBook(vector<Book>& inventory);
void writeToFile(const vector<Book>& inventory, const string& filename);
int main() {
    // ... (unchanged code)
    return 0;
}
void donateBook(vector<Book>& inventory) {
    Book newBook;
    cout << "Enter ISBN: ";
    cin >> newBook.isbn;
    cout << "Enter Title: ";
    cin >> newBook.title;
    cout << "Enter Author's First Name: ";
    cin >> newBook.first;
    cout << "Enter Author's Last Name: ";
    cin >> newBook.last;
    cout << "Enter Edition: ";
    cin >> newBook.edition;
    inventory.push_back(newBook);
    cout << "Book donated successfully!" << endl;
}
void takeBook(vector<Book>& inventory) {
    int isbnToRemove;
    cout << "Enter ISBN of the book to take: ";
    cin >> isbnToRemove;
    auto it = find_if(inventory.begin(), inventory.end(), [isbnToRemove](const Book& book) {
        return book.isbn == isbnToRemove;
    });
    if (it != inventory.end()) {
        inventory.erase(it);
        cout << "Book taken successfully!" << endl;
    } else {
        cout << "Book not found in the inventory." << endl;
    }
}
void writeToFile(const vector<Book>& inventory, const string& filename) {
    ofstream outputFile(filename);
    for (const auto& book : inventory) {
        outputFile << book.isbn << " " << book.title << " " << book.first << " " << book.last << " " << book.edition << endl;
    }
    outputFile.close();
    cout << "Inventory written to file successfully!" << endl;
}
