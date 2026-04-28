// Library Management System 
    // track borrowed books ✅
    // have a waitlist for books ✅
    // a member record ✅
    // ability to search books by ISBN [ ]
    // ability to view all books in the catalog [ ]
    // ability to check out books ✅

// a queue for a waitlist for borrowing books that are currently unavailable ✅
// a hash_map that can be searched using a string of the book’s ISBN to return the book data type [ ]
// a vector which contains pointers to all the books in the catalogue to make displaying all books easier [ ]

// Map:     SEARCH BY ISBN
    // KEY - book’s ISBN
    // VALUE - book reference

// ALGORITHMS:
    // ***BEST: Hash map [ ]
        // * O(n) search
        // #include <unordered_map>
        // unordered_map<int, Book*> library;
        // int = ISBN, Book* = book reference

    // Binary Search [ ]
        // * O(log n) Search, O(n) insertion
        // * books must be sorted by ISBN first
        // allow users to search the map for a specific book by ISBN
        // display book info: author, title and ISBN



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

    Member m1(123456);
    Member m2(100021);
    
    //m1.printMemberInfo();

    b1.printBookDetails();

    b1.checkout(m1);
    b1.printBookDetails();

    b1.checkout(m2);
    b1.printBookDetails();

    b1.returnBook(m1);
    b1.printBookDetails();

    return 0;
}