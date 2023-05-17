#include <stdio.h>
#include <iostream>



int main()
{  
    int x{ 10 };  // x 0x100 --> 10
    int& y = x;  //alias reference  x,y 0x100 --> 10

    int* ptr = &x;  // ptr 0x104 --> 0x100

    y = 3;
    std::cout << "ref y= " << y << " x= " << x << "ptr " << *ptr << std::endl;

    /*change reference*/
    //int n = 0; //n --> 0x108
   // y = n;     // n,y --> 0x108
    //y = 12;

    //std::cout << " x= " << x << " n= " << n << std::endl;
    
   // int& y2; // error 

    return 0;
}


