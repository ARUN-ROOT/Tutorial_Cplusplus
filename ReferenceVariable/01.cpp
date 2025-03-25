#include <iostream>

void fun(int &i)
{
    int a=25;
    i=a;
}

int main()
{
    int num;
    fun(num);
    std::cout<<num<<std::endl;
    
    std::cout<<"Hello World";

    return 0;
}