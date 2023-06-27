// codechef
// Distinct Codes

// Sergey recently learned about country codes - two letter strings, denoting countries. For example, BY stands for Belarus
// and IN stands for India. Mesmerized by this new discovery, Sergey now looks for country codes everywhere!

// Sergey has recently found a string S consisting of uppercase Latin letters. He wants to find the number of different 
// country codes that appear in S as contiguous substrings. For the purpose of this problem, consider that every 2-letter 
// uppercase string is a valid country code.


// find number of distinct 2 letter string in a given string.

// #include <iostream>
// #include <string>
// #include <set>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string s, sbstr;
// 	    cin>>s;
// 	    set<string>st;
// 	    for(int i=0; i<s.length()-1; i++){
// 	        sbstr=s.substr(i,2);
// 	        st.insert(sbstr);
// 	    }
// 	    cout<<st.size()<<endl;
// 	}
// 	return 0;
// }

// for(int i=1; i<=n; i++){
// 	    for(j=1; j<n; j=j+i){
// 	        S.O.P("*");
// 	}
// 	}



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    string s,g;
    cin>>s;
	g=sort(s.begin(), s.end());
    if(s==g){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;}
	return 0;
}
