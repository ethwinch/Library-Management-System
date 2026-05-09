#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <chrono>
#include "Member.h"
#include "Book.h"
#include "Algo.h"
#include "loader.h"


void linear_search_benchmark()
{
   std::cout << "Begining of linear search benchmark" << std::endl;
   std::vector<Book> books_100;
   std::vector<Book> books_1000;
   std::vector<Book> books_10000;
   std::vector<Book> books_100000;
   std::vector<Book> books_1000000;
   
   csv_loader(books_100, 100);
   csv_loader(books_1000,1000);
   csv_loader(books_10000, 10000);
   csv_loader(books_100000, 100000);
   csv_loader(books_1000000, 1000000);
   
   std::chrono::nanoseconds duration_100_1, duration_100_2, duration_100_3;
   std::chrono::nanoseconds duration_1000_1, duration_1000_2, duration_1000_3;
   std::chrono::nanoseconds duration_10000_1, duration_10000_2, duration_10000_3;
   std::chrono::nanoseconds duration_100000_1, duration_100000_2, duration_100000_3;
   std::chrono::nanoseconds duration_1000000_1, duration_1000000_2, duration_1000000_3;
   
   //100 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_100_1 = linear_search_algo(books_100, books_100[rand_num_gen(books_100.size()-1)].getISBN());
            break;
         case 1:
            duration_100_2 = linear_search_algo(books_100, books_100[rand_num_gen(books_100.size()-1)].getISBN());
            break;
         case 2:
            duration_100_3 = linear_search_algo(books_100, books_100[rand_num_gen(books_100.size()-1)].getISBN());
            break;
      }
   }
   //table for 100
   std::cout << "time for amount 100 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_100_1.count() << std::endl;
   std::cout << "Run 2: " << duration_100_2.count() << std::endl;
   std::cout << "Run 3: " << duration_100_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_100_1.count()) + static_cast<float>(duration_100_2.count()) + static_cast<float>(duration_100_3.count()))/3) << std::endl;
   
   
   //1000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_1000_1 = linear_search_algo(books_1000, books_1000[rand_num_gen(books_1000.size()-1)].getISBN());
            break;
         case 1:
            duration_1000_2 = linear_search_algo(books_1000, books_1000[rand_num_gen(books_1000.size()-1)].getISBN());
            break;
         case 2:
            duration_1000_3 = linear_search_algo(books_1000, books_1000[rand_num_gen(books_1000.size()-1)].getISBN());
            break;
      }
   }
   
   //table for 1000
   std::cout << "time for amount 1000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_1000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_1000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_1000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_1000_1.count()) + static_cast<float>(duration_1000_2.count()) + static_cast<float>(duration_1000_3.count()))/3) << std::endl;
   
   
   //10000 amount checker 
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_10000_1 = linear_search_algo(books_10000, books_10000[rand_num_gen(books_10000.size()-1)].getISBN());
            break;
         case 1:
            duration_10000_2 = linear_search_algo(books_10000, books_10000[rand_num_gen(books_10000.size()-1)].getISBN());
            break;
         case 2:
            duration_10000_3 = linear_search_algo(books_10000, books_10000[rand_num_gen(books_10000.size()-1)].getISBN());
            break;
      }
   }

   //table for 10000
   std::cout << "time for amount 10000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_10000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_10000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_10000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_10000_1.count()) + static_cast<float>(duration_10000_2.count()) + static_cast<float>(duration_10000_3.count()))/3) << std::endl;
   
   //100000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_100000_1 = linear_search_algo(books_100000, books_100000[rand_num_gen(books_100000.size()-1)].getISBN());
            break;
         case 1:
            duration_100000_2 = linear_search_algo(books_100000, books_100000[rand_num_gen(books_100000.size()-1)].getISBN());
            break;
         case 2:
            duration_100000_3 = linear_search_algo(books_100000, books_100000[rand_num_gen(books_100000.size()-1)].getISBN());
            break;
      }
   }
   
   //table for 100000
   std::cout << "time for amount 100000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_100000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_100000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_100000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_100000_1.count()) + static_cast<float>(duration_100000_2.count()) + static_cast<float>(duration_100000_3.count()))/3) << std::endl;
   
   //1000000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_1000000_1 = linear_search_algo(books_1000000, books_1000000[rand_num_gen(books_1000000.size()-1)].getISBN());
            break;
         case 1:
            duration_1000000_2 = linear_search_algo(books_1000000, books_1000000[rand_num_gen(books_1000000.size()-1)].getISBN());
            break;
         case 2:
            duration_1000000_3 = linear_search_algo(books_1000000, books_1000000[rand_num_gen(books_1000000.size()-1)].getISBN());
            break;
      }
   }

   //table for 1000000
   std::cout << "time for amount 1000000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_1000000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_1000000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_1000000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_1000000_1.count()) + static_cast<float>(duration_1000000_2.count()) + static_cast<float>(duration_1000000_3.count()))/3) << std::endl;
   std::cout << "End of linear search benchmark" << std::endl;
}

void binary_search_benchmark()
{
   std::cout << "Begining of binary search benchmark" << std::endl;
   std::vector<Book> books_100;
   std::vector<Book> books_1000;
   std::vector<Book> books_10000;
   std::vector<Book> books_100000;
   std::vector<Book> books_1000000;
   
   csv_loader(books_100, 100);
   std::sort(books_100.begin(), books_100.end(), [](const Book& left, const Book& right)
   {
      return left.getISBN() < right.getISBN();
   });
   
   csv_loader(books_1000,1000);
   std::sort(books_1000.begin(), books_1000.end(), [](const Book& left, const Book& right)
   {
      return left.getISBN() < right.getISBN();
   });
   
   csv_loader(books_10000, 10000);
   std::sort(books_10000.begin(), books_10000.end(), [](const Book& left, const Book& right)
   {
      return left.getISBN() < right.getISBN();
   });
   
   csv_loader(books_100000, 100000);
   std::sort(books_100000.begin(), books_100000.end(), [](const Book& left, const Book& right)
   {
      return left.getISBN() < right.getISBN();
   });
   
   csv_loader(books_1000000, 1000000);
   std::sort(books_1000000.begin(), books_1000000.end(), [](const Book& left, const Book& right)
   {
      return left.getISBN() < right.getISBN();
   });
   
   std::chrono::nanoseconds duration_100_1, duration_100_2, duration_100_3;
   std::chrono::nanoseconds duration_1000_1, duration_1000_2, duration_1000_3;
   std::chrono::nanoseconds duration_10000_1, duration_10000_2, duration_10000_3;
   std::chrono::nanoseconds duration_100000_1, duration_100000_2, duration_100000_3;
   std::chrono::nanoseconds duration_1000000_1, duration_1000000_2, duration_1000000_3;
   
   //100 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_100_1 = binary_search_algo(books_100, books_100[rand_num_gen(books_100.size()-1)].getISBN());
            break;
         case 1:
            duration_100_2 = binary_search_algo(books_100, books_100[rand_num_gen(books_100.size()-1)].getISBN());
            break;
         case 2:
            duration_100_3 = binary_search_algo(books_100, books_100[rand_num_gen(books_100.size()-1)].getISBN());
            break;
      }
   }
   //table for 100
   std::cout << "time for amount 100 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_100_1.count() << std::endl;
   std::cout << "Run 2: " << duration_100_2.count() << std::endl;
   std::cout << "Run 3: " << duration_100_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_100_1.count()) + static_cast<float>(duration_100_2.count()) + static_cast<float>(duration_100_3.count()))/3) << std::endl;
   
   
   //1000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_1000_1 = binary_search_algo(books_1000, books_1000[rand_num_gen(books_1000.size()-1)].getISBN());
            break;
         case 1:
            duration_1000_2 = binary_search_algo(books_1000, books_1000[rand_num_gen(books_1000.size()-1)].getISBN());
            break;
         case 2:
            duration_1000_3 = binary_search_algo(books_1000, books_1000[rand_num_gen(books_1000.size()-1)].getISBN());
            break;
      }
   }
   
   //table for 1000
   std::cout << "time for amount 1000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_1000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_1000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_1000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_1000_1.count()) + static_cast<float>(duration_1000_2.count()) + static_cast<float>(duration_1000_3.count()))/3) << std::endl;
   
   
   //10000 amount checker 
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_10000_1 = binary_search_algo(books_10000, books_10000[rand_num_gen(books_10000.size()-1)].getISBN());
            break;
         case 1:
            duration_10000_2 = binary_search_algo(books_10000, books_10000[rand_num_gen(books_10000.size()-1)].getISBN());
            break;
         case 2:
            duration_10000_3 = binary_search_algo(books_10000, books_10000[rand_num_gen(books_10000.size()-1)].getISBN());
            break;
      }
   }

   //table for 10000
   std::cout << "time for amount 10000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_10000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_10000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_10000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_10000_1.count()) + static_cast<float>(duration_10000_2.count()) + static_cast<float>(duration_10000_3.count()))/3) << std::endl;
   
   //100000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_100000_1 = binary_search_algo(books_100000, books_100000[rand_num_gen(books_100000.size()-1)].getISBN());
            break;
         case 1:
            duration_100000_2 = binary_search_algo(books_100000, books_100000[rand_num_gen(books_100000.size()-1)].getISBN());
            break;
         case 2:
            duration_100000_3 = binary_search_algo(books_100000, books_100000[rand_num_gen(books_100000.size()-1)].getISBN());
            break;
      }
   }
   
   //table for 100000
   std::cout << "time for amount 100000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_100000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_100000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_100000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_100000_1.count()) + static_cast<float>(duration_100000_2.count()) + static_cast<float>(duration_100000_3.count()))/3) << std::endl;
   
   //1000000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
            duration_1000000_1 = binary_search_algo(books_1000000, books_1000000[rand_num_gen(books_1000000.size()-1)].getISBN());
            break;
         case 1:
            duration_1000000_2 = binary_search_algo(books_1000000, books_1000000[rand_num_gen(books_1000000.size()-1)].getISBN());
            break;
         case 2:
            duration_1000000_3 = binary_search_algo(books_1000000, books_1000000[rand_num_gen(books_1000000.size()-1)].getISBN());
            break;
      }
   }

   //table for 1000000
   std::cout << "time for amount 1000000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_1000000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_1000000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_1000000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_1000000_1.count()) + static_cast<float>(duration_1000000_2.count()) + static_cast<float>(duration_1000000_3.count()))/3) << std::endl;
   std::cout << "End of binary search benchmark" << std::endl;
}

void merge_sort_benchmark()
{
   std::cout << "Begining of merge sort benchmark" << std::endl;
   std::vector<Book> books_100;
   std::vector<Book> books_1000;
   std::vector<Book> books_10000;
   std::vector<Book> books_100000;
   std::vector<Book> books_1000000;
   
   csv_loader(books_100, 100);
   csv_loader(books_1000,1000);
   csv_loader(books_10000, 10000);
   csv_loader(books_100000, 100000);
   csv_loader(books_1000000, 1000000);
   
   std::vector<Book> test;
   std::chrono::nanoseconds duration_100_1, duration_100_2, duration_100_3;
   std::chrono::nanoseconds duration_1000_1, duration_1000_2, duration_1000_3;
   std::chrono::nanoseconds duration_10000_1, duration_10000_2, duration_10000_3;
   std::chrono::nanoseconds duration_100000_1, duration_100000_2, duration_100000_3;
   std::chrono::nanoseconds duration_1000000_1, duration_1000000_2, duration_1000000_3;
   
   //100 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_100;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_100;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_100;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }
   //table for 100
   std::cout << "time for amount 100 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_100_1.count() << std::endl;
   std::cout << "Run 2: " << duration_100_2.count() << std::endl;
   std::cout << "Run 3: " << duration_100_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_100_1.count()) + static_cast<float>(duration_100_2.count()) + static_cast<float>(duration_100_3.count()))/3) << std::endl;
   
   
   //1000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_1000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_1000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_1000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }
   
   //table for 1000
   std::cout << "time for amount 1000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_1000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_1000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_1000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_1000_1.count()) + static_cast<float>(duration_1000_2.count()) + static_cast<float>(duration_1000_3.count()))/3) << std::endl;
   
   
   //10000 amount checker 
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_10000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_10000_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_10000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_10000_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_10000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_10000_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }

   //table for 10000
   std::cout << "time for amount 10000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_10000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_10000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_10000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_10000_1.count()) + static_cast<float>(duration_10000_2.count()) + static_cast<float>(duration_10000_3.count()))/3) << std::endl;
   
   //100000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_100000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100000_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_100000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100000_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_100000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100000_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }
   
   //table for 100000
   std::cout << "time for amount 100000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_100000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_100000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_100000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_100000_1.count()) + static_cast<float>(duration_100000_2.count()) + static_cast<float>(duration_100000_3.count()))/3) << std::endl;
   
   //1000000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_1000000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000000_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_1000000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000000_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_1000000;
            auto start = std::chrono::steady_clock::now();
            mergeSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000000_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }

   //table for 1000000
   std::cout << "time for amount 1000000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_1000000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_1000000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_1000000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_1000000_1.count()) + static_cast<float>(duration_1000000_2.count()) + static_cast<float>(duration_1000000_3.count()))/3) << std::endl;
   std::cout << "End of merge sort benchmark" << std::endl;
}

void quick_sort_benchmark()
{
   std::cout << "Begining of quick sort benchmark" << std::endl;
   std::vector<Book> books_100;
   std::vector<Book> books_1000;
   std::vector<Book> books_10000;
   std::vector<Book> books_100000;
   std::vector<Book> books_1000000;
   
   csv_loader(books_100, 100);
   csv_loader(books_1000,1000);
   csv_loader(books_10000, 10000);
   csv_loader(books_100000, 100000);
   csv_loader(books_1000000, 1000000);
   
   std::chrono::nanoseconds duration_100_1, duration_100_2, duration_100_3;
   std::chrono::nanoseconds duration_1000_1, duration_1000_2, duration_1000_3;
   std::chrono::nanoseconds duration_10000_1, duration_10000_2, duration_10000_3;
   std::chrono::nanoseconds duration_100000_1, duration_100000_2, duration_100000_3;
   std::chrono::nanoseconds duration_1000000_1, duration_1000000_2, duration_1000000_3;
   
   //100 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_100;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_100;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_100;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }
   //table for 100
   std::cout << "time for amount 100 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_100_1.count() << std::endl;
   std::cout << "Run 2: " << duration_100_2.count() << std::endl;
   std::cout << "Run 3: " << duration_100_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_100_1.count()) + static_cast<float>(duration_100_2.count()) + static_cast<float>(duration_100_3.count()))/3) << std::endl;
   
   
   //1000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_1000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_1000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_1000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }
   
   //table for 1000
   std::cout << "time for amount 1000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_1000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_1000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_1000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_1000_1.count()) + static_cast<float>(duration_1000_2.count()) + static_cast<float>(duration_1000_3.count()))/3) << std::endl;
   
   
   //10000 amount checker 
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_10000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_10000_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_10000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_10000_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_10000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_10000_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }

   //table for 10000
   std::cout << "time for amount 10000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_10000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_10000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_10000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_10000_1.count()) + static_cast<float>(duration_10000_2.count()) + static_cast<float>(duration_10000_3.count()))/3) << std::endl;
   
   //100000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_100000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100000_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_100000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100000_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_100000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_100000_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }
   
   //table for 100000
   std::cout << "time for amount 100000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_100000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_100000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_100000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_100000_1.count()) + static_cast<float>(duration_100000_2.count()) + static_cast<float>(duration_100000_3.count()))/3) << std::endl;
   
   //1000000 amount checker
   for(int i = 0; i < 3; i++)
   {
      switch(i)
      {
         case 0:
         {
            std::vector<Book> test = books_1000000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000000_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 1:
         {
            std::vector<Book> test = books_1000000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000000_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
         case 2:
         {
            std::vector<Book> test = books_1000000;
            auto start = std::chrono::steady_clock::now();
            quickSort(test, 0, test.size() - 1);
            auto end = std::chrono::steady_clock::now();
            duration_1000000_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            break;
         }
      }
   }

   //table for 1000000
   std::cout << "time for amount 1000000 (in nanoseconds):" << std::endl;
   std::cout << "Run 1: " << duration_1000000_1.count() << std::endl;
   std::cout << "Run 2: " << duration_1000000_2.count() << std::endl;
   std::cout << "Run 3: " << duration_1000000_3.count() << std::endl;
   std::cout << "Average: " << ((static_cast<float>(duration_1000000_1.count()) + static_cast<float>(duration_1000000_2.count()) + static_cast<float>(duration_1000000_3.count()))/3) << std::endl;
   std::cout << "End of quick sort benchmark" << std::endl;
}

void full_benchmark()
{
   linear_search_benchmark();
   binary_search_benchmark();
   merge_sort_benchmark();
   quick_sort_benchmark();
}
#endif
