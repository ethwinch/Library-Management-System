#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <chrono>
#include "Member.h"
#include "Book.h"
#include "Algo.h"
#include "loader.h"

int main()
{
      
   std::vector<Book> books;
   std::vector<Book> books1;
   
   //loader of CSV file
   //output.csv is the 7 mill one 
   //output2.csv is the 1 mill one  
   csv_loader(books);
   csv_loader(books1);
   
   //merge sort benchmark
   auto start = std::chrono ::steady_clock::now();
   mergeSort(books, 0, books.size() - 1);
   auto end = std::chrono ::steady_clock::now();
   auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
   std::cout << "vector of size " << books.size() <<  " sorted after " << duration.count() << " nanoseconds via merge sort."<< std::endl;
   
   //quick sort benchmark
   start = std::chrono::steady_clock::now();
   quickSort(books1, 0, books1.size() - 1);
   end = std::chrono::steady_clock::now();
   duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
   std::cout << "vector of size " << books1.size() <<  " sorted after " << duration.count() << " nanoseconds via quick sort."<< std::endl;

   long random_option = books[rand_num_gen(books.size()-1)].getISBN();
   std::cout <<"linear search of sorted best case" << std::endl;
   linear_search_algo(books, books[0].getISBN());
   std::cout << "linear search of sorted worse case" << std::endl;
   linear_search_algo(books, books[books.size()-1].getISBN());
   std::cout <<"linear search of sorted random case" << std::endl;
   linear_search_algo(books, random_option);
   
   std::cout <<"binary search of sorted best case" << std::endl;
   binary_search_algo(books, books[books.size()/2].getISBN());
   std::cout <<"binary search of sorted worse case" << std::endl;
   binary_search_algo(books, 1);
   std::cout <<"binary search of sorted random case" << std::endl;
   binary_search_algo(books, random_option);

   return 0;
}


