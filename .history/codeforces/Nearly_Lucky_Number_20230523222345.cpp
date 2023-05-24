// codeforces
// A. Nearly Lucky Number


// Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations 
// contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it 
// is a lucky number. He wonders whether number n is a nearly lucky number.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
    // long long int n;
    // cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='4' || s[i] == '7'){
            count++;
        }
    }
    if(count == 4 || count == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	return 0;
}
