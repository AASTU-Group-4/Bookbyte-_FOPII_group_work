#include "header.hpp"

void save_books(int& num, Book books[])
{
    ofstream fout ("book.txt");
    for (int i = 0; i < num; i++)
    {
        fout << books[i].title << endl;
        fout << books[i].author << endl; 
        fout << books[i].Genre << endl;
        fout << books[i].ISBN << endl;
        fout << books[i].Publication_year << endl;
        fout << books[i].status << endl;
        fout << books[i].due_date << endl;
    }
    fout.close();  
}