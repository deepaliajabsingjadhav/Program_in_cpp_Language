//create one vector and copy the content of another vector and also return the size of that vector


#include<iostream>
#include<vector>

int main()
{
	int n=0;

	std::vector <std::string> strOfList;
	strOfList.push_back("llap");
	strOfList.push_back("c Programing");
	strOfList.push_back("c++");
	strOfList.push_back("java");

	std::vector < std::string > strOfCopy(strOfList);
	for (std::string str : strOfCopy)
		std::cout<<str<<std::endl; 

	n=strOfCopy.size();
	std::cout<<"size of vector is"<<n;
}
