/************************************************************************************************************/
/* Name			: smart pointer                			                              */
/* Date			: 14/12/2024                                                                   */
/* Author	    : Arun.V       */
/* Description
  shared pointer obj and obj1 pointing to same memory location.
  if updated value using any one of the object
  it refelect all

  use_count() method --> to identify how many pointing to that memory loction

  Output:
  obj 4
  obj1 4
  obj 10
  obj1 10
  Use Count  2 
*/
                                                                                                                                          
#include <iostream>
#include <memory>
using namespace std;

int main()
{
	std::shared_ptr<int>obj(new int(4));
	std::cout<<"obj "<<*obj<<std::endl;
	std::shared_ptr<int>obj1;
	obj1=obj;
	std::cout<<"obj1 "<<*obj1<<std::endl;
	*obj =10;
	std::cout<<"obj "<<*obj<<std::endl;
	std::cout<<"obj1 "<<*obj1<<std::endl;
	
	  std::cout<<"Use Count  "<<obj.use_count()<<std::endl;
	return 0;
}

