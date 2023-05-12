#include <stdio.h>
#include <iostream>


//typedef unsigned short wchar_t;

int main()
{  
    wchar_t x = 'ء';           //2 byte
    std::cout << sizeof(x) << " " << x <<std:: endl;

    return 0;
}


