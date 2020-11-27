//create list and create one vector and access that list element using vector


#include<string>
#include<iostream>
#include<list>
#include<vector>

int main()
{
	std::list < std::string > strlist;
	strlist.push_back("i");
	strlist.push_back("love");
	strlist.push_back("indian");
	strlist.push_back("army");

	std::vector < std::string > vectstr(strlist.begin(),strlist.end());

	for (std::string str: vectstr)
	
	std::cout<<str<<std::endl;
	
	
}

