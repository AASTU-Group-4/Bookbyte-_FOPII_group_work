#include "header.hpp"


void update_book(int& num, Book books[])
{
  int n= search(num, books);

  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (n>=0 && n < num)
  {
    if (books[n].status=="true")//to borrow
    {
      books[n].status="false";
      cout << "Enter due date ([DD/MM/YY] example: 01/05/23): ";
      getline(cin,books[n].due_date);

      cout<<"Update successful" << endl;
      cout << "Book " << n+1 << endl; 
      display(books[n]);
    }
    else if(books[n].status=="false")//to return
    {
      books[n].status="true";
      books[n].due_date="none";
      
      cout << "Change available to: true";
      getchar();
      cout<<"Update successful"<< endl;
      cout << "Book " << n+1<< endl; 
      display(books[n]);
    }
    save_books(num,books);
  }

}
 
