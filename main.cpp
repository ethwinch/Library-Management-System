// Library Management System 
    // track borrowed books ✅
    // have a waitlist for books ✅
    // a member record ✅
    // ability to search books by ISBN [ ]
    // ability to view all books in the catalog [ ]
    // ability to check out books ✅

// a queue for a waitlist for borrowing books that are currently unavailable ✅
// a vector which contains pointers to all the books in the catalogue to make displaying all books easier [✅]

// Map:     SEARCH BY ISBN
    // KEY - book’s ISBN
    // VALUE - book reference

// ALGORITHMS:
    // ***BEST: Hash map [ ]
        // * O(n) search
        // #include <unordered_map>
        // unordered_map<int, Book*> library;
        // int = ISBN, Book* = book reference

    // Binary Search [✅]
        // * O(log n) Search, O(n) insertion
        // * books must be sorted by ISBN first
        // allow users to search the map for a specific book by ISBN
        // display book info: author, title and ISBN



#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include "Member.h"
#include "Book.h"
#include "Algo.h"
#include "loader.h"

// CREATE A LIST OF ALL BOOKS
int main(){
    std::vector<Member> members;
    Member m1(123456);
    Member m2(100021);
    members.push_back(m1);
    members.push_back(m2);
    std::vector<Book> books;
    csv_loader(books);

    int select = 0;

    while (select != 4){
        std::cout << "[1] Add New Member" << endl;
        std::cout << "[2] Print All Members" << endl;
        std::cout << "[3] Search by ISBN" << endl; // enter ISBN, searches for it, prints book details
        std::cout << "  * Checkout Book" << endl;
        std::cout << "  * Return Book" << endl;
        std::cout << "[4] Quit" << endl;

        std::cin >> select;
        std::cout << endl;

        if (select == 1){
            int mem_id;
            std::cout << "Enter Member ID: ";
            std::cin >> mem_id;
            members.emplace_back(mem_id);
        } else if (select == 2){
            std::cout << "=== MEMBERS ===" << endl;
            for (auto el : members){
                el.printMemberInfo();
            }
        } else if (select == 3){
            long search;
            std::cout << "Enter ISBN: ";
            std::cin >> search;

            // BINARY SEARCH FUNCTION
            // return book obj
            long book_index = binary_search(books, search);

            std::cout << "Book with ISBN " << search << " found at index " << book_index << ". " << endl;

            int ans;
            std::cout << "Would you like to checkout or return this book?" << endl;
            std::cout << "[0] Checkout      [1] Return" << endl;
            std::cin >> ans;

            std::cout << "Select a member to perform this action: " << endl;
            std::cout << "=== MEMBERS ===" << endl;
            for (auto el : members){
                el.printMemberInfo();
            }
            int mem;
            std::cout << "Enter Member ID: ";
            std::cin >> mem;

            // Get member obj based on entered ID
            for (auto el : members){
                if (el.getID() == mem){
                    Member m = el;
                }
            }

            if (ans == 0){
                books[book_index].checkout(m2);
            } else if (ans == 1){
                books[book_index].returnBook(m2);
            }
        }
    }

    //Book b1(123456789, "Percy Jackson & the Olympians", "Rick Riordan", true);

    // LOAD BOOKS
    //csv_loader(books);

    // Member m1(123456);
    // Member m2(100021);
    
    //m1.printMemberInfo();

    // b1.printBookDetails();

    // b1.checkout(m1);
    // b1.printBookDetails();

    // b1.checkout(m2);
    // b1.printBookDetails();

    // b1.returnBook(m1);
    // b1.printBookDetails();

    return 0;
}

