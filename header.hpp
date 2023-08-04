#ifndef LIBRARY
#define LIBRARY

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;

struct  Book
{
    string title;
    string author;
    string Genre;
    string ISBN;
    string Publication_year;
    string status;
    string due_date;
};

void display(Book&);
void save_books(int&, Book[]);
void browes(int&, Book[]);
void reccomendation(int&, Book []);
void load_book(int&, Book[]);
void search(int&, Book[]);
void add_book(int&, Book[]);
void update_book(int&, Book[]);

#endif
