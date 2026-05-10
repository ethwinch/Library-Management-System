# Library-Management-System
This Library Book Management System allows users to borrow, return, and browse books within the book database. The system keeps track of members and books, meaning that if a book is unavailable while a member tries to borrow it, they will be added to the waitlist for that book. 
The algorithms linear and binary are used for searching and sorting. The vector data structure is used for keeping track of the book catalogue and member waitlist for individual books. Classes are used to structure member and book data. 
While experimenting, we found binary search and sort to be the fastest while linear search and sort was slow. Binary search was significantly faster than linear search, which is in line with the time complexity of the algorithms, with binary search having a worst case of O(1) and a best case of O(log n), and linear search being O(n) and O(1) respectively.


### Team Members
Ethan Winch, Shalin Valerio

#### Programming Language: C++
#### Libraries/Dependencies: vector library, chrono library (for timing algorithms)

### How to Run/Compile
Download the files and run in a C++ development environment such as VS Code or Genie. 
To get the time complexity benchmarks, run from the "benchmark.cpp" file.
To add books/members and use the return, borrow, and display details functions part of the Book and Member classes, run the "main.cpp" file or include the Book.h and Member.h files in the file you want to run. 

##### Create a Book/Member Object:
<br />
Book book_name("ISBN #","Book Title",true); // true means the book is available
<br />
Member member_name(int member ID);
<br />
##### Functions:
<br />
book.printBookDetails(); // prints book details
<br />
book.checkout(member); // have member checkout book
<br />
book.returnBook(member); // have member return book
<br />
member.printMemberInfo(); // print member information (ID)

### Sample Input/Output:
#### Linear Search Benchmark
time for amount 100 (in nanoseconds):
Run 1: 168
Run 2: 505
Run 3: 316
Average: 329.667

time for amount 1000 (in nanoseconds):
Run 1: 9651
Run 2: 1875
Run 3: 2345
Average: 4623.67

time for amount 10000 (in nanoseconds):
Run 1: 89442
Run 2: 418
Run 3: 4428
Average: 31429.3

time for amount 100000 (in nanoseconds):
Run 1: 19952
Run 2: 202630
Run 3: 272621
Average: 165068

time for amount 1000000 (in nanoseconds):
Run 1: 5961621
Run 2: 9247130
Run 3: 5744618
Average: 6.98446e+06

#### Binary Search Benchmark
time for amount 100 (in nanoseconds):
Run 1: 211
Run 2: 264
Run 3: 328
Average: 267.667

time for amount 1000 (in nanoseconds):
Run 1: 549
Run 2: 482
Run 3: 556
Average: 529

time for amount 10000 (in nanoseconds):
Run 1: 996
Run 2: 596
Run 3: 830
Average: 807.333

time for amount 100000 (in nanoseconds):
Run 1: 1025
Run 2: 1017
Run 3: 1195
Average: 1079

time for amount 1000000 (in nanoseconds):
Run 1: 1565
Run 2: 814
Run 3: 759
Average: 1046

#### Merge Sort Benchmark
time for amount 100 (in nanoseconds):
Run 1: 567132
Run 2: 408255
Run 3: 398221
Average: 457869

time for amount 1000 (in nanoseconds):
Run 1: 5852316
Run 2: 5901052
Run 3: 6041854
Average: 5.93174e+06

time for amount 10000 (in nanoseconds):
Run 1: 80398179
Run 2: 81338954
Run 3: 78478337
Average: 8.00718e+07

time for amount 100000 (in nanoseconds):
Run 1: 1224255603
Run 2: 1211457372
Run 3: 1204827015
Average: 1.21351e+09

time for amount 1000000 (in nanoseconds):
Run 1: 33978349891
Run 2: 40183350965
Run 3: 27128867159
Average: 3.37635e+10

#### Quick Sort Benchmark
time for amount 100 (in nanoseconds):
Run 1: 790111
Run 2: 773508
Run 3: 770629
Average: 778083

time for amount 1000 (in nanoseconds):
Run 1: 14777338
Run 2: 14787862
Run 3: 14540517
Average: 1.47019e+07

time for amount 10000 (in nanoseconds):
Run 1: 202732336
Run 2: 188996466
Run 3: 189475603
Average: 1.93735e+08

time for amount 100000 (in nanoseconds):
Run 1: 1809671062
Run 2: 1641197046
Run 3: 814058833
Average: 1.42164e+09

time for amount 1000000 (in nanoseconds):
Run 1: 14142139387
Run 2: 13123964358
Run 3: 15219897780
Average: 1.4162e+10

### Algorithms
Binary Search/Sort: Fast ISBN lookup, even on large datasets. It has a more complex implementation, but allows for fast lookup times that become more apparent when searching/sorting large data sets. 

Linear Search/Sort: For ISBN lookup. It works fine on small datasets, but the seconds add up on data sets with more data to search through. Trades speed for simplicity.

Merge Sort: Attributed as a good stable choice for large datasets. It was chosen as it was considered O * log n in all cases but at the cost of a costly copying process depending on the data that is manipulated.

Quick Sort: Also considered a great but less stable option for large datasets. Due to the potential possibility of a bad pivot it can lead to a larger worse case situation but it does have less copy actions initiated. 

#### Project Report (in /docs)
