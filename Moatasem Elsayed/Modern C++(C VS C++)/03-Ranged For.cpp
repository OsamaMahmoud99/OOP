#include <stdio.h>
#include <iostream>




int main()
{  
    int arr[3] = { 1 , 2 , 3 };

    for (int i = 0; i < 3; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

    for (int i : arr)     // more assembly instructions
    {
        std::cout << i << std::endl;
    }

    return 0;
}


