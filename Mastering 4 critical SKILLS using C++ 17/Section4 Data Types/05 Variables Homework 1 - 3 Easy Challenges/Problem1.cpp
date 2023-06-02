#include "bits/stdc++.h"
using namespace std;

/*Problem #1: Math operations
● Write a program that reads 2 numbers and print their + - * / as following
○ For inputs 12 and 3
● Do good testing for your code
○ E.g. consider zero as first or 2nd number
○ E.g. consider negative values 
○ E.g. even and odd values
○ E.g. try the MAX of int: 2147483647
*/

int main()
{
    int Num1 , Num2;
    cin >> Num1 >> Num2;
    
    cout << Num1 <<" + "<< Num2 <<" = "<< Num1+Num2 <<"\n";
    cout << Num1 <<" - "<< Num2 <<" = "<< Num1-Num2 <<"\n";
    cout << Num1 <<" / "<< Num2 <<" = "<< Num1/Num2 <<"\n";
    cout << Num1 <<" * "<< Num2 <<" = "<< Num1*Num2 <<"\n";

    return 0;
}
