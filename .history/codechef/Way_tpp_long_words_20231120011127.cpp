
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
    string s, temp;
    cin>>s;
    int n=s.length();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(s[j]!='+'){
                temp = s[j];
                s[j] =s[j+2];
                s[j+2]=temp;
            }
        }
    }
    cout<<s<<endl;
	return 0;
}
