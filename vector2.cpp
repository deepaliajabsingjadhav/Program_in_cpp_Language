//create vector of string


#include<iostream>
#include<vector>
#include<string>
#include<list>

using namespace std;
int main()
{
	string arr[]=	{
			"deepali"
			"payal"
			"sangita"
			"sapna"
			"gayatri"
			"roshani"
			};

	vector<string> vectstr(arr,arr+sizeof(arr)/sizeof(string));
	for(string str : vectstr)
		cout<<str
		

}
