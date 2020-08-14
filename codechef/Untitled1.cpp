#include<iostream>
#include<malloc.h>
using namespace std;
int main(){
	//this is basic structure of c++ k na
	
	
	//read the variable
	int a;
	cin>>a;		//cin>> is read command and a is variable
	
	char str[100]; 	//	declare the static character array is size of 100 character max
	cin>>str;		//	read the string
	
	char* Str = (char*)malloc(sizeof(char)*n);		// for dynamic allocation of  string u must include malloc header file 
													// (i.e. here n is size of string)
	cin>>Str;
	
	string s;	// string delcaration
	cin>>s;		// read string;	
	
	//	read the string in two ways
	// cin>>string_name;
	// getline(cin,string_name);
	
	
	float f;	// declare the float 
	cin>>f;		// read float value
	
	double d;	// double declaration
	cin>>d;		// read double value
	
	//read the array
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	//print the array
	for(int i=0;i<n;i++)
		cout<<arr[i];
		
		
	// print command is "  cout<<  " 
	//use cin>> and cout<< u must include iostream and using namespace std;
	
	//evi basic ra
	return 0;
}
