#include "header.hpp"

void add_book(int& num, Book books[])
{
    int N_book=0;
    //N_book ....number of books that the user wants to add.
    cout<<"How many books do you want to add? " << endl;
    cin>>N_book;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i=0;i<N_book;i++)
    {
      cout<<"---- Welcome to BookByte Library ----"<<endl; 
      cout<<"Book "<<num+1<<" :"<<endl;
      cout<<"\tTitle: \n please insert with the appropriate format, example: [Book Title]";
      getline(cin, books[num].title);
      cout<<"\tAuthor: \n please insert with the appropriate format, example: [Firstname Lastname]";
      getline(cin, books[num].author);
      cout<<"\tGenre: \n please insert the correct spelling for the genres, example: [Fiction, Poetry, Drama, Comic..]";
      getline(cin, books[num].Genre);
      do
      {
        cout<<"\tISBN: \n please insert the appropriate 13-digit unique ISBN";
        getline(cin, books[num].ISBN);
      }
      while(books[num].ISBN.length != 13 );
      cout<<"\tPublication year:  \n please enter the appropriate format [YYYY], eample: 2023";
      getline(cin, books[num].Publication_year);
      cout << "Book successfully added." << endl;
      books[num].status="true";
      books[num].due_date="none";
      num++;
    }
    save_books(num,books);
}