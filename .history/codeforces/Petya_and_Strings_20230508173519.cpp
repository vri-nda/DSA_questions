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
