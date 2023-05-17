#include <stdio.h>
#include <iostream>


/*
1- Linkage
   c++ : Internal Linkage
   c :   External Linkage
*/

//const int ll;   // must be initialized

const int ll = 2;

int main()
{  
    /* 2- switch */
    int var = 97;

    const int x = 97;

    switch (var)
    {
    case x:      // in c will not compile 
        std::cout << x << std::endl;
        break;
    }

    /* 3- Array */

    /* In C */
    /*
    *  #define MAX_FOOS     10
    * int foos[MAX_FOOS];
    */
    const int max_foos = 12;
    int foos[max_foos];
    std::cout << std::size(foos) << std::endl;

    /* 4- With pointer */
    // Error const with int

    //const int var2 = 10;
    //int* ptr = &var2;       //error in cpp


    const int var2 = 10;
    int* ptr = const_cast<int*>(&var2);


    return 0;
}


