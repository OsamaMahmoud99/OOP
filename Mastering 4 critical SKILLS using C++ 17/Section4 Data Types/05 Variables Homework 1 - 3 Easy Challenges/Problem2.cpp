#include "bits/stdc++.h"
using namespace std;
/*
Problem #2: Students grades
● Write a program that reads 2 students information about math exam
○ Read per student: name, id and grade
○ Then print them. See the picture
● Be a good software engineer
○ Think deeply in your selected data types
○ The teacher gives us this dialogue to guide us
○ Be careful from your assumptions?
■ Is exam’s grade an integer?
*/
int main()
{
   string Name1 , Name2;
   int ID1 , ID2 , Grade1 , Grade2;
   
   cout << "what is student 1 name: ";
   cin >> Name1;
   cout <<"His id: ";
   cin >> ID1;
   cout<<"His math exam grade: ";
   cin >> Grade1;
   
   cout << "what is student 2 name: ";
   cin >> Name2;
   cout <<"His id: ";
   cin >> ID2;
   cout<<"His math exam grade: ";
   cin >> Grade2;
   
   cout <<"\n\nStudents grades in math\n";
   cout << Name1 <<" (With id "<<ID1<<") got grade: "<<Grade1<<"\n";
   cout << Name2 <<" (With id "<<ID2<<") got grade: "<<Grade2<<"\n";
   cout <<"Average grade is "<<(Grade1+Grade2)/2;
   

    return 0;
}