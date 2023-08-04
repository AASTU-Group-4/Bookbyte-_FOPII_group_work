#include "header.hpp"

void browse(int& num, Book books[])
{
    //test
    int n=0;
    string custom_genre;
    cout << "Browse\n" << "\t1.All books\n" << "\t2.Fiction\n" << "\t3.Non-fiction\n" << "\t4.Custom\n";
    cin >> n;
    switch (n)
    {
        case 1:
            for(int i= 0; i<num ; i++)
            {
                cout <<"Book "<<i+1<<endl;
                display( books[i]);
            }
            break;
        case 2:
            for(int i= 0; i<num ; i++)
            {
                if(books[i].Genre=="Fiction")
                {
                    cout <<"Book "<<i+1<<endl;
                    display( books[i]);
                }
            }
            break;
        case 3:
            for(int i= 0; i<num ; i++)
            {
                if(books[i].Genre=="Non-fiction")
                {
                    cout <<"Book "<<i+1<<endl;
                    display( books[i]);
                }
            }
            break;
        case 4:
            cout << "Input custom genre:\t";
            cin >> custom_genre;
            for(int i= 0; i<num ; i++)
            {
                if(books[i].Genre==custom_genre)
                {
                    cout <<"Book " << i+1 << endl;
                    display( books[i]);
                }
            }
            break;
        default:
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
    }
}