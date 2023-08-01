#include "header.h"

void search(int& num, Book books[])
{
 string isbn;
    bool found = false;
    cout << "Enter the ISBN of the book you want to search for: ";
    cin >> isbn;
    for (int i = 0; i < num; i++) {
        if (books[i].ISBN == isbn) {
            display(books[i]);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Could not find any book with ISBN " << isbn << endl;
    }   
}