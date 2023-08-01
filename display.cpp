#include "header.h"

void display(Book& display_book)
{
   cout<<" Title: "<< display_book.title<<endl;
cout<<" Author: "<< display_book.author<<endl;
cout<<" ISBN: "<< display_book.ISBN<<endl;
cout<<" Publication year: "<< display_book.Publication_year<<endl;
cout<<" Genre: "<< display_book.Genre << endl;
if (display_book.status == "t")
{cout<<" status: available"<<endl;}
else
   {cout<<" status: reserved"<<endl;
cout<<" Due date: "<< display_book.due_date<<endl;} 
}