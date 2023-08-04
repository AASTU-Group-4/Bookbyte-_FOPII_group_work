#include "header.h"
void update_book(int& num, Book books[])
{
    int n;
    char status;
    string due_date;
    void browse(int &num, Book books[]);
    cout<<"Choose a book to borrow and enter its book number ";
    cin>>n;
    if (n>=1 && n < num)
    {
      cout<<" choose: \n1 to update status to borrowed \n2 to returned \nelse to cancel"<<endl ;
      cin>>status;
      if (status=='1')//to borrow
      {
           books[n-1].status="Borrowed";
           getline(cin,due_date);
           cout<<"\nUpdate successful";
      }
      else if(status=='2')//to return
      {
        books[n-1].status="Available";
        cout<<"\nUpdate successful";
      }
      else
        cout<<"\nUpdate Cancelled";
    }

    else
    {
     cout<<" Wrong entry ";
    }

   void save_books(int& num, Book books[])
}
 
