#ifndef LOADER_H
#define LOADER_H

#include <iostream> 
#include <vector>
#include <fstream>
#include <sstream>
#include "Member.h"
#include "Book.h"

std::vector<Book> csv_loader(std::vector<Book>& books)
{
   std::ifstream file;
   int choice = 0;
   std::cout << "Options: " << std::endl
   << "Option 1 | CSV 1 (~1 million entries)" << std::endl
   << "Option 2 |CSV 2 (~7 million entries)" << std::endl   
   << "Enter choice (1 or 2): ";
   std::cin >> choice;
   
   while(choice != 1 && choice != 2)
   {
      if(choice != 1 && choice != 2)
      {
         std::cout << "error wrong input." <<std::endl;
         std::cout << "Enter choice (1 or 2): ";
         std::cin >> choice;
      }
   }
   
   if(choice == 1)
   {
      file.open("output2.csv");
   }
   if(choice == 2)
   {
      file.open("output.csv");
   }
   
   std::string current_line;
   std::vector<std::vector<std::string>> data;
   while (std::getline(file, current_line))
   {
   std::stringstream ss(current_line);
   std::string isbn_str;
   std::string title;

   std::getline(ss, isbn_str, ',');   // first column
   std::getline(ss, title);           // rest of line (title)

   // Remove quotes from title if present
   if (!title.empty() && title.front() == '"' && title.back() == '"')
   {
      title = title.substr(1, title.size() - 2);
   }

   long isbn = std::stol(isbn_str);
   Book current_row(isbn, title, true);
   books.emplace_back(current_row);
   }
   
   return books;
}
#endif
