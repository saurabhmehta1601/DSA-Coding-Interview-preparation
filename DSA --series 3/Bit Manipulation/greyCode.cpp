#include <bits/stdc++.h>
using namespace std;

vector<string> grey(int bits){
	if(bits==1){
		
		return vector<string> {"0","1"};
	}
	
	vector<string> revSol=grey(bits-1);

	vector<string> newSol;
	
    for(int i=0;i<revSol.size();i++){
    	newSol.push_back("0"+revSol[i]);
	}
	
	for(int i=revSol.size()-1 ; i>=0 ;i-- ){
    	newSol.push_back("1"+revSol[i]);
	}
	revSol.clear(); //clear all elements in revsol
	revSol.shrink_to_fit(); //turn capacity of vector to 0 to 
	return newSol;
}
	


int main(){

	int bits=4;

	vector<string> ans=grey(bits);
	
	for(string s: ans){
		cout<<s<<"\n";
	}
	
	return 0;
}