#include <stdio.h>
#include <iostream>


/*enum Data
{
    SUCCESS,
    FAIL,
    DEFAULT
};
*/
/*enum Car
{
    BUS,
    DEFAULT
};
*/
enum class Data :uint8_t
{
    SUCCESS,
    FAIL,
    DEFAULT
};
enum class Car :uint8_t
{
    BUS,
    DEFAULT
};

std::ostream& operator<<(std::ostream& out, const Data d)
{
    out << static_cast<int>(d);
    return out;
}
int main()
{  
    //enum Data d = SUCCESS;  in c
    
    // 1- Direct
   // Data d = SUCCESS;
   // std::cout << d << std::endl;

    /*in case of enum class*/
    Data d = Data::SUCCESS;
    std::cout << d << std::endl;
    //2- conversions
    //Data d2 = 2;       // error in c++ invalid convert from int to Data

    ///int x = SUCCESS;    // ok from Data to int

    /* error in case od enum class */
    //int x = SUCCESS;

    int x = static_cast<int>(Data::SUCCESS);

    //3- different enum with same value
   // Car c = DEFAULT;  // error in c++

    Car c = Car::DEFAULT;
    Data d3 = Data::DEFAULT;

    // size
    std::cout << sizeof(int) << std::endl;

    /* 4 byte without uint_8 to enum class*/
    std::cout << sizeof c << std::endl;

    return 0;
}


