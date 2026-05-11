#ifndef LOADER_H
#define LOADER_H

#include <iostream> 
#include <vector>
#include <fstream>
#include <sstream>
#include "Member.h"
#include "Book.h"

std::vector<Book> csv_loader(std::vector<Book>& books, long amount_loaded)
{
   std::ifstream file;
   file.open("output.csv");

   std::string current_line;
   long count = 0;
   while(std::getline(file, current_line))
   {
      if(amount_loaded != 0 && count >= amount_loaded)
      {
         break;
      }

      std::stringstream ss(current_line);
      std::string isbn_str;
      std::string title;
      std::getline(ss, isbn_str, ',');
      std::getline(ss, title);

      if(!title.empty() && title.front() == '"' && title.back() == '"')
      {
         title = title.substr(1, title.size() - 2);
      }

      long isbn = std::stol(isbn_str);
      Book current_row(isbn, title, true);
      books.emplace_back(current_row);
      count++;
   }

   return books;
}

#endif
