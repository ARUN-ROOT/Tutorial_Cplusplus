//Important Note: Reference should be intialised at a time of declaration.
#include <iostream>

int main()
{
    int a = 25;
    int &ref = a; //
    std::cout << "ref : " << ref << std::endl;
    std::cout << "a : " << a << std::endl;
    // Now reference value changed
    ref = 50;
    std::cout << "ref : " << ref << std::endl;
    std::cout << "a : " << a << std::endl; // Note a also changed

    a = 100;
    std::cout << "ref : " << ref << std::endl;
    std::cout << "a : " << a << std::endl; // Note if a also change ,ref also changed
    std::cout << "Hello World";
    return 0;
}