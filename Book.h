#ifndef BOOK_H
#define BOOK_H

// #include <iostream>
// #include <string>
// #include <vector>
// #include <queue>
// using namespace std;

//#include "Member.h"
class Member;

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
        void setISBN(int isbn){
            this->ISBN = ISBN;
        }
        void setTitle(string tit){
            this->title = title;
        }
        void setAuthor(string auth){
            this->author = author;
        }
        void setAvailability(bool ava){
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
                waitlist.push_back(&member); 
            }
        }

        void returnBook(Book& book, Member& member){
            //book.getAvailability();
            available = true;
            member.removeBorrowedBook(&book);

            if (waitlist.size() > 0){
                Member *nextMember = waitlist.front();
                book.checkout(nextMember);
                // remove first member in waitlist
            }
            
            // if someone in waitlist, have them checkout book
            // checkout(book, waitlist.front());
            // waitlist.pop();
        }

        friend class Member;
};

#endif