



// using inbuilt (reverse function)


// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
// 	// your code goes here
//     string s,t;
//     cin>>s;
//     cin>>t;
//     reverse(s.begin(), s.end());
//     if(s==t){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// 	return 0;
// }



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
