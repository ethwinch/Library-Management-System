#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include <algorithm>

//#include "Book.h"
class Book;

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
        void setID(int id){
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

        // void printMemberInfo(Member& member){
        //     cout << member.getID() << endl;
        // }
        void printMemberInfo(){
            cout << id << endl;
        }

        // HELPER FUNCTIONS
        void addBorrowedBook(Book* book){
            borrowed.push_back(book);
        }
        void removeBorrowedBook(Book* book){
            auto it = find(borrowed.begin(), borrowed.end(), book);
            if (it != borrowed.end()) {
                borrowed.erase(it);
            }
        }

        friend class Book;
};

#endif