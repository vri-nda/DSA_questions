// codeforces

// A. Petya and Strings


// Little Petya loves presents. His mum bought him two strings of the same size for his birthday. 
// The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings 
// lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to 
// the corresponding lowercase letter. Help Petya perform the comparison.




// ------------------ASCII code used here----------
// uppercase alphabets have ascii code ranging from 65(A) to 90(Z).
// lowercase alphabets have ascii code ranging from 97(a) to 122(z).


// so we change the uppercase letters to lowercase by adding +32 to them. and then just compare the strings.

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]<91){
            s1[i] +=32;
        }
        else if(s2[i]<91){
            s2[i] +=32;
        }
    }
    if(s1<s2){
        cout<<"-1"<<endl;
    }
    else if(s1>s2){
        cout<<"1"<<endl;
    }
    else if(s1==s2){
        cout<<"0"<<endl;
    }
	return 0;
}
