#include <stdio.h>
#include <iostream>

struct test
{
    int y = 5;
    void display()
    {
       
        std::cout << "osama" << std::endl;
    }
};

struct data : test    // error in c
{
    // struct test t; // we do that in c

    int x = 2;  // error in c we cannot assign 2 to x

    void func() {  // error in c

        std::cout << y << std::endl;
        std::cout << "hello world\n";
    }
};

int main()
{  
    //struct data d;   // in  c
    data d;
    std::cout << d.x << std::endl;

    d.func();

    d.display();
    


    return 0;
}


