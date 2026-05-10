#ifndef ALGO_H
#define ALGO_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <chrono>
#include "Member.h"
#include "Book.h"

//assumed that its from zero to max 
long rand_num_gen(long max)
{
   std::random_device rand;
   std::mt19937 gen(rand());
   std::uniform_int_distribution<> distrib(0, max-1);
   
   return distrib(gen);
}

//print out
void print_out(const std::vector<Book>& library)
{
   for(const auto& curr : library)
   {
      std::cout << "ISBN: " << curr.getISBN() << "| Title: " << curr.getTitle() <<std::endl;
   }
}

//linear search algo
//set target to vector.size() for worse case, 0 for best case, rand_num_gen(books.size()) for random number
void linear_search_algo(const std::vector<Book>& library, long target)
{
   std::size_t counter = 0;
   std::cout << "Start of linear search" << std::endl;
   auto start = std::chrono ::steady_clock::now();
   while(counter < library.size() && library[counter].getISBN() != target)
   {
      counter++;
   }
   auto end = std::chrono ::steady_clock::now();
   std::cout << "End of linear search" << std::endl;
   auto duration =std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
   if(counter < library.size())
   {
      std::cout << "ISBN: " << target <<  " found after nanoseconds " << duration.count() << " via linear search."<< std::endl;
   }
   else
   {
      std::cout << "ISBN: " << target << " cannot be found (linear search)." << std::endl;
   }
}
//end of linear search algo


//start of binary search algo
void binary_search_algo(const std::vector<Book>& library, long long target)
{
    std::size_t low = 0;
    std::size_t high = library.size();

    bool found = false;

    auto start = std::chrono::steady_clock::now();

    while(low < high)
    {
        std::size_t mid = low + (high - low) / 2;
        if(library[mid].getISBN() == target)
        {
            found = true;

            auto end = std::chrono::steady_clock::now();
            auto duration =
            std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
            std::cout << "ISBN: " << target <<  " found after nanoseconds " << duration.count() << " via binary search."<< std::endl;
            return;
        }

        if(target > library[mid].getISBN())
        {
            low = mid + 1;
        }
        else
        {
            if(mid == 0) break; // safety guard
            high = mid;
        }
    }
    auto end = std::chrono::steady_clock::now();
    auto duration =
    std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    if(!found)
    {
        std::cout << "ISBN: " << target << " cannot be found (binary search)." << std::endl;
    }
}
void binary_search_algo(std::vector<Book>& library, long target)
{
   long low = 0;
   long high = library.size()-1;
   auto start = std::chrono ::steady_clock::now();
   while(low <= high)
   {
      long middle = low + (high - low) / 2;
      if(target == library[middle].getISBN())
      {
         break;
      }
      if(target > library[middle].getISBN())
      {
         low = middle + 1;
      }
      else
      {
         high = middle -1;
      }
   }
   auto end = std::chrono ::steady_clock::now();
   auto duration =std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
   std::cout << "ISBN: " << target <<  " found after nanoseconds " << duration.count() << " via binary search."<< std::endl;
}

// For returning ISBN in main.cpp
long binary_search(std::vector<Book>& library, long target)
{
   long low = 0;
   long high = library.size()-1;

   while(low <= high)
   {
      long middle = low + (high - low) / 2;
      if(target == library[middle].getISBN())
      {
        return middle;
        //break;
      }
      if(target > library[middle].getISBN())
      {
         low = middle + 1;
      }
      else
      {
         high = middle -1;
      }
   }
}
//end of binary search algo

//start of merge sort algo
void merge(std::vector<Book>& books, long left, long mid, long right)
{
    long n1 = mid - left + 1;
    long n2 = right - mid;

    std::vector<Book> L;
    L.reserve(n1);
    std::vector<Book> R;
    R.reserve(n2);

    // Copy left half
    for(long i = 0; i < n1; i++)
    {
        L.push_back(books[left + i]);
    }

    // Copy right half
    for(long j = 0; j < n2; j++)
    {
        R.push_back(books[mid + 1 + j]);
    }

    long i = 0;
    long j = 0;
    long k = left;

    // Merge back into books
    while(i < n1 && j < n2)
    {
        if(L[i].getISBN() <= R[j].getISBN())
        {
            books[k] = L[i];
            i++;
        }
        else
        {
            books[k] = R[j];
            j++;
        }

        k++;
    }

    // Remaining left side
    while(i < n1)
    {
        books[k] = L[i];
        i++;
        k++;
    }

    // Remaining right side
    while(j < n2)
    {
        books[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<Book>& books, long left, long right)
{
   if(left >= right)
   {
      return;
   }

   long mid = left + (right - left) / 2;

   mergeSort(books, left, mid);
   mergeSort(books, mid + 1, right);

   merge(books, left, mid, right);
}
//end of merge sort algo 

//start of quicksort algo 
long partition(std::vector<Book>& books, long low, long high)
{
    long pivot = books[high].getISBN();
    long i = low - 1;

    for(long j = low; j < high; j++)
    {
        if(books[j].getISBN() <= pivot)
        {
            i++;
            std::swap(books[i], books[j]);
        }
    }

    std::swap(books[i + 1], books[high]);
    return i + 1;
}

void quickSort(std::vector<Book>& books, long low, long high)
{
    if(low < high)
    {
        long pi = partition(books, low, high);

        quickSort(books, low, pi - 1);
        quickSort(books, pi + 1, high);
    }
}
#endif
