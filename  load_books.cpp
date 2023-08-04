#include "header.hpp"

void load_book(int&num, Book books[])
{
    ifstream fin ("book.txt");
    if(fin.is_open())
    {
        while (true)
        {
            getline(fin, books[num].title);
            getline(fin, books[num].author);
            getline(fin, books[num].Genre);
            getline(fin, books[num].ISBN);
            getline(fin, books[num].Publication_year);
            getline(fin, books[num].status);
            getline(fin, books[num].due_date);
            if (!fin.eof())
            {
                num++;
            }
            else
            {
                break;
            }            
        }  
        fin.close();   
    }
    else
    {
        ofstream fout("book.txt");
        fout.close();
        cout << "There are no book!!" << endl;
        add_book(num, books);
    }
}