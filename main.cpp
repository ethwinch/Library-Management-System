// Library Management System 
    // track borrowed books
    // have a waitlist for books
    // a member record
    // ability to search books by ISBN
    // ability to view all books in the catalog
    // ability to check out books

// a queue for a waitlist for borrowing books that are currently unavailable
// a map that can be searched using a string of the book’s ISBN to return the book data type
// a vector which contains pointers to all the books in the catalogue to make displaying all books easier

// Map:     ACTUALLY SEARCH BY ISBN BUT NOT IN MAP...?
    // KEY - book’s ISBN
    // VALUE - book class data type

// ALGORITHMS:
    // a binary search algorithm
        // allow users to search the map for a specific book by ISBN
        // display book info: author, title and ISBN

        // > check out current book
            // book available?
                // update books availability
                // add book to member's "borrowed books"
            // book not available?
                // add member to queue


        // > return book
            // book removed from member's "borrowed books" vector
            // mark book as available
                // book is borrowed by next person in queue if person exists


#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

#include "Member.h"
#include "Book.h"

// CREATE A LIST OF ALL BOOKS

int main(){
    Book b1(123456789, "Percy Jackson & the Olympians", "Rick Riordan", true);
    b1.printBookDetails(b1);

    Member m1(123456);
    m1.printMemberInfo();

    Member m2(100021);

    b1.checkout(b1, m1);
    b1.printBookDetails(b1);

    b1.checkout(b1, m2);
    b1.printBookDetails(b1);

    return 0;
}