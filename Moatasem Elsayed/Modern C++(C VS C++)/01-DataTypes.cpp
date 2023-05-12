#include <stdio.h>
#include <iostream>


//typedef unsigned char bool;

//#define FALSE   0
//#define TRUE    1


int main()
{  
    printf("hello world\n");
    std::cout << "hello world" << std::endl;

    bool x = true;       // moveb    in assembly
    bool x1 = false;
    bool x2 = 1;
    bool x3 = 0;
    bool x4 = -3;        // x4 = true

    return 0;
}


