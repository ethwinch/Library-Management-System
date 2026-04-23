#ifndef BOOK_H
#define BOOK_H

// #include <iostream>
// #include <string>
// #include <vector>
// #include <queue>
// using namespace std;

#include "Member.h"

// Book Class
class Book{
    private:
        int ISBN;
        string title;
        string author;
        bool available;

        vector<Member*> waitlist;

    public:
        // CONSTRUCTOR
        Book(int isbn, string tit, string auth, bool ava){
            ISBN = isbn;
            title = tit;
            author = auth;
            available = ava;
        }
        // DECONSTRUCTOR
        ~Book(){}

        // SETTER FUNCTIONS
        void setISBN(){
            this->ISBN = ISBN;
        }
        void setTitle(){
            this->title = title;
        }
        void setAuthor(){
            this->author = author;
        }
        void setAvailability(){
            this->available = available;
        }

        // GETTER FUNCTIONS
        int getISBN(){
            return ISBN;
        }
        string getTitle(){
            return title;
        }
        string getAuthor(){
            return author;
        }
        bool getAvailability(){
            return available;
        }

        // FUNCTIONS
        void printBookDetails(Book& book){
            cout << book.getISBN() << endl; 
            cout << book.getTitle() << endl;
            cout << book.getAuthor() << endl;
            cout << book.getAvailability() << endl;
        }

        void searchISBN(){
            // search by ISBN
        }

        void checkout(Book& book, Member& member){
            if (book.getAvailability() == true){
                available = false;
            }else{
                cout << "This book is currently checked out. You are added to the queue." << endl;
                waitlist.push_back(&member); //idk man, it's late
            }
        }

        void returnBook(Book& book, Member& member){
            //book.getAvailability();
            available = true;
            member.removeBorrowedBook(&book);
            
            // if someone in waitlist, have them checkout book
            // checkout(book, waitlist.front());
            // waitlist.pop();
        }

        friend class Member;
};

#endif