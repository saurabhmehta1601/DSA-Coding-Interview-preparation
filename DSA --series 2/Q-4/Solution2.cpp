// o(n^2) RECURSIVE SOLUTION

// STEP 1--- IF LENGTH OF STRING IS ZERO RETURN TRUE
// STEP 2--- FROM THE GIVEN STRING FIND "{}","()" OR "[]" IF FOUND CHECK RECURSIVELY IN STRING
// AFTER REMOVING THESE SUBSTRINGS FROM ORIGINAL STRING
// STEP 3--- IF STRING LENGTH IS NON ZERO AND NONE OF THE SEQUENCES i.e.  "{}","()" OR "[]" FOUND
// RETURN FALSE


#include<iostream>
using namespace std;


class Solution{
public:
    bool isValid(string str){
        if(str.length()==0)
        { return true;}
        else {
                if(str.find("{}")!=string::npos){
                    str=str.replace(str.find("{}"),2,"");
                    return isValid(str);
                }else if(str.find("()")!=string::npos){
                    str=str.replace(str.find("()"),2,"");
                    return isValid(str);
                }else if(str.find("[]")!=string::npos){
                    str=str.replace(str.find("[]"),2,"");
                    return isValid(str);
                }else{
                    return false;
                }
       
        }
    }
};



int main()
{
    cout<<"Enter sequence\n";
    string str;
   str="{}{}()[]";

    cout<<'\n';

    Solution s;
    
    if(s.isValid(str)){
        cout<<"Correct sequence";
    }else{
        cout<<"Wrong sequence";
}



}

