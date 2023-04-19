






// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,n;
// 	cin>>t;
// 	while(t--){
// 	    cin>>n;
// 	    int half=n/2;
// 	    string s;
// 	    cin>>s;
// 	    int flag;
// 	    for(int i=0; i<half; i++){
// 	        if(s[i]==s[i+half]){
// 	            flag=1;
// 	        }
// 	        else{
// 	            flag=0;
// 	            break;
// 	        }
// 	    }
// 	    if(flag==1){
// 	        cout<<"yes"<<endl;
// 	    }
// 	    else{
// 	        cout<<"no"<<endl;
// 	    }
// 	}
// 	return 0;
// }


// ----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string s1=s.substr(0,n/2);
	    string s2=s.substr(n/2,n);
	    if(s1==s2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
