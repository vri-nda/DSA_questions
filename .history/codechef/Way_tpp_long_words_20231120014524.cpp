
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void swap(char*a, char*b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
	// your code goes here
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0; i<n; i+=2){
        for(int j=0; j<n-1; j+=2){
            if(s[j]>s[j+2]){
                swap(s[j], s[j+2]);
            }
        }
    }
    cout<<s<<endl;
	return 0;
}
