#include "header.hpp"

int search(int& num, Book books[])
{
    int c=0,n;
    string search_isbn;
    cout <<"Search by\n" << "\t1.Book number\n" << "\t2.ISBN" << endl;
    cin >> c;
    switch (c)
    {
        case 1:
            cout << "Enter Book number: ";
            cin >> n;
            if(n>0 && n <= num)
            {
                cout << "Book " << n << endl; 
                display(books[n-1]);
                return n-1;
            }
            else
            {
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            break;
        case 2:
            cout << "Eneter Book ISBN: ";
            cin >> search_isbn;
            if(search_isbn.length() == 13)
            {
                for (int i = 0; i < num; i++)
                {
                    if(search_isbn==books[i].ISBN)
                    {
                        cout << "Book " << i+1 << endl; 
                        display(books[i]);
                        return i;
                    }
                    else if (i == num-1)
                    {
                        cout << "Book not found" << endl;
                    }
                    
                }    
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        
        default:
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
    }
    return -1;
}