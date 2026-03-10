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
using namespace std;

// Book Class
class Book{
    private:
        int ISBN;
        string title;
        string author;
        bool available;

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

        void printBookDetails(Book& book){
            cout << book.getISBN() << endl; 
            cout << book.getTitle() << endl;
            cout << book.getAuthor() << endl;
            cout << book.getAvailability() << endl;
        }

};

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
};




int main(){
    Book b1(123456789, "Percy Jackson & the Olympians", "Rick Riordan", true);
    b1.printBookDetails(b1);

    Member m1(123456);
    m1.printMemberInfo(m1);
}