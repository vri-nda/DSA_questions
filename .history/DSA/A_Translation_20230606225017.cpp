// codeforces

// A. Translation

// The translation from the Berland language into the Birland language is not an easy task. 
// Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little:
//  it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. 
//  However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish 
//  as t. Help him: find out if he translated the word correctly.



// reversing a string

// using inbuilt (reverse function)


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(), s.end());
    if(s==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	return 0;
}



////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    string s,t;
    cin>>s;
    cin>>t;
    int n=s.length();
    string temp;
    for(int i=n-1; i>=0; i--){
        temp.push_back(s[i]);
    }
    if(t==temp){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	return 0;
}
