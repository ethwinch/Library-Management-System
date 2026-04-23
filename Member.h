#ifndef MEMBER_H
#define MEMBER_H

// #include <iostream>
// #include <string>
// #include <vector>
// #include <queue>
// using namespace std;

#include "Book.h"

// Member Class
class Member{
    private:
        int id;
        vector<Book*> borrowed;

    public:
        // CONSTRUCTOR
        Member(int ID){
            id = ID;
        }
        // DECONSTRUCTOR
        ~Member(){}

        // SETTER FUNCTIONS
        void setID(){
            this->id = id;
        }

        // GETTER FUNCTIONS
        int getID(){
            return id;
        }
        // Used for printing
        const vector<Book*> getBorrowedBooks() const{
            return borrowed;
        }

        void printMemberInfo(Member& member){
            cout << member.getID() << endl;
        }

        // HELPER FUNCTIONS
        void addBorrowedBook(Book* book){
            borrowed.push_back(&book);
        }
        void removeBorrowedBook(Book* book){
            borrowed.erase(find(borrowed.begin(), borrowed.end(), &book));
        }

        friend class Book;
};

#endif