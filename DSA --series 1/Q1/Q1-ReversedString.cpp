#include <iostream>
using namespace std;

string reverseString(string original){
	string reversed="";
	for(int i=original.length()-1;i>=0;i--){
		reversed+=original[i];
	}
	return reversed;
}


int main(){
	cout<<"Enter the string:\n";
	string name;
	cin>>name;
	cout<<"Reversed string:\n";
	cout<<reverseString(name);	
}
