#include "header.hpp"

void add_book(int& num, Book books[])
{
    int N_book=0;
    //N_book ....number of books that the user wants to add.
    cout<<"How many books do you want to add?" << endl;
    cin>>N_book;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i=0;i<N_book;i++)
    {
      cout<<"Book "<<num+1<<" :"<<endl;
      cout<<"\tTitle: ";
      getline(cin, books[num].title);
      cout<<"\tAuthor: ";
      getline(cin, books[num].author);
      cout<<"\tGenre: ";
      getline(cin, books[num].Genre);
      cout<<"\tISBN: ";
      getline(cin, books[num].ISBN);
      cout<<"\tPublication year:";
      getline(cin, books[num].Publication_year);
      cout << "Book successfully added." << endl;
      books[num].status="true";
      books[num].due_date="none";
      num++;
    }
    save_books(num,books);
}
