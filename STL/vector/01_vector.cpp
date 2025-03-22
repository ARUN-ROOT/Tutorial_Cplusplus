#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{

	vector<string>objString;
	objString.push_back("Hai");
	objString.push_back(" Arun");
	objString.push_back(" Good ");
	vector<string>::iterator itfirst = objString.begin();
	vector<string>::iterator itlast = objString.end();
	std::cout<<*itfirst<<" and "<<*(itlast-1)<<std::endl;
	while(itfirst != itlast)
	{
		cout<<*itfirst<<std::endl;
		itfirst++;
	}

   std::cout<<*objString.begin() <<*(objString.end()-1);
	return 0;
}