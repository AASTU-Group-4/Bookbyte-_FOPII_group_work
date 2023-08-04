#include "header.hpp"
#include "update_book.cpp"
#include "search.cpp"
#include "save_books.cpp"
#include "reccomendation.cpp"
#include "load_books.cpp"
#include "display.cpp"
#include "browse.cpp"
#include "add_book.cpp"


int main(void)
{
    Book books[250];
    int num_books=0, choice=0;
    load_book(num_books, books);
    do
    {
        cout << "----Welcome to BookByte Library----"<<endl;
        cout << "1.Recommendation" << endl << "[To get book recommendations to read]"<<endl;
        cout << "2.Browse books" << endl<< "[To find list of books in our library]" << endl;
        cout << "3.Search a book" << endl << "[To find your preferred book from our list]" << endl;
        cout << "4.Adminstration" << endl << "[To Access and update the status of books when borrowed and/or returned]" << endl;
        cout << "5.Exit" << endl << "[Exit to desktop]"<< endl;
        cin >> choice;
        system("cls");
        switch (choice)
        {
            case 1:
                reccomendation(num_books, books);
                break;
            case 2:
                browse(num_books, books);
                break;
            case 3:
                search(num_books, books);
                break;
            case 4:
                cout << "Enter the Password: " << endl;
                cin >> pass;

                if (pass == 1234)
                {                
                    cout << "1.Add a book" << endl << "[To add a new book the list]" << endl;
                    cout << "2.Update a book" << endl << "[To change the status of a book when borrowed and/or returned, record its due date]" << endl;
                    cin >> choice;
                    system("cls");
                    switch (choice)
                    {
                        case 1:
                            add_book(num_books, books);
                            break;
                        case 2:
                            update_book(num_books, books);
                            break;
                        default:
                            cout <<"Invalid Input" << endl;
                            break;
                    }
                }
                else 
                { 
                    cout << "Wrong Password" << end;
                }
                    break;
            case 5:
                save_books(num_books, books);
                return 0;
                break;
            
            default:
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    } while (true);  
}


