#include "header.hpp"

void display(Book& display_book)
{
   cout << "\tTitle:\t" << display_book.title << endl;
    cout << "\tAuthor:\t"<< display_book.author << endl;
    cout << "\tISBN:\t" << display_book.ISBN << endl;
    cout << "\tPublication year:\t" << display_book.Publication_year<<endl;
    cout << "\tGenre:\t" << display_book.Genre << endl;
    cout << "\tAvailable:\t" << display_book.status << endl;
    if(display_book.status=="false")
    {
        cout <<"\tDue date:\t" << display_book.due_date << endl;
    }  
}