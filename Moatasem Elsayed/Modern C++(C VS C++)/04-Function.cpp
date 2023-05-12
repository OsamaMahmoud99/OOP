#include <stdio.h>
#include <iostream>

/*if we define a default value in prototype
  we do not need to define it in function definition*/
void func(int x, int y = 3);

void func(int x, int y)
{
    std::cout << x << " " << y << std::endl;
}


/* error we should also initialize y with default value*/
/*void func(int x = 3, int y)
{
    std::cout << x << " " << y << std::endl;
}
*/

void func2(int l , int x=3, int y=10)
{
    std::cout << l << " " << x << " " << y << std::endl;
}

/* function overloading*/
void func3(int x, int y)
{
    std::cout << "int , int " << std::endl;
}


void func3(int x, float y)
{
    std::cout << "int , float " << std::endl;
}
int main()
{  
    func(2);
    func(2, 5);

    func2(2);
    func2(2, 5);

    func3(2, 3);
    func3(2, 3.5F);

    return 0;
}


