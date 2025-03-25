/***************************************************************************************/
/* Name			    : main.c		                                                       */	   
/* Date			    : 24/3/25                                                            */
/* Author			: Arun.V                                                           */
/* Code link		: 									                           */ 
/* Descrition		:               */
/*			                                                                           */
/* o/p				:                                                                  */                                                                                        
/***************************************************************************************/

// Topic : namespace Using Scope Resolution Operator
#include <iostream>
using namespace std;

namespace ns1
{
    void display()
    {
        std::cout<<"From NS1 "<<std::endl;
    }
}

namespace ns2
{
    void display()
    {
        std::cout<<"From NS2 "<<std::endl;
    }
}

int main()
{
    ns1::display();
    ns2::display();
    return 0;
}