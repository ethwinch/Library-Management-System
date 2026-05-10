#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include "Member.h"
using namespace std;

class Member;

// Book Class
class Book{
    private:
        long ISBN;
        string title;
        //string author;
        bool available;

        queue<Member*> waitlist;
        Member* currentHolder;

    public:
        // CONSTRUCTOR
        Book(long isbn, string tit, bool ava){
            ISBN = isbn;
            title = tit;
            //author = auth;
            available = ava;
            currentHolder = nullptr;
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
        /*
        void setAuthor(string auth){
            this->author = author;
        }
        */
        void setAvailability(bool ava){
            this->available = available;
        }

        // GETTER FUNCTIONS
        long getISBN() const{
            return ISBN;
        }
        string getTitle()const{
            return title;
        }
        /*
        string getAuthor(){
            return author;
        }
        */
        bool getAvailability()const{
            return available;
        }

        // FUNCTIONS
        void printBookDetails(){
            cout << this->getISBN() << endl; 
            cout << this->getTitle() << endl;
            //cout << this->getAuthor() << endl;
            cout << this->getAvailability() << endl;

            if (currentHolder) {
                cout << "Held by member ID: " << currentHolder->getID() << endl;
            }else{
                cout << "No current holder." << endl;
            }
        }

        void searchISBN(){
            // search by ISBN
        }

        void checkout(Member& member){
            if (available){
                available = false;
                currentHolder = &member;
                member.addBorrowedBook(this);
            }else{
                cout << "This book is currently checked out. You are added to the queue.\n" << endl;
                waitlist.push(&member); 
            }
        }

        void returnBook(Member& member){
            member.removeBorrowedBook(this);

            cout << waitlist.size();

            if (!waitlist.empty()){
                Member* nextMember = waitlist.front();
                
                // remove first member in waitlist
                waitlist.pop();

                available = false;
                currentHolder = nextMember;
                nextMember->addBorrowedBook(this);
            }else{
                currentHolder = nullptr;
                available = true;
            }
        }

        friend class Member;
};

#endif
