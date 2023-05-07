// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,n;
// 	cin>>t;
// 	while(t--){
// 	    cin>>n;
// 	    string s,r;
// 	    cin>>s;
// 	    cin>>r;
// 	    int count1s=0;
// 	    int count0s=0;
// 	    int count1r=0;
// 	    int count0r=0;
// 	    for(int i=0; i<n; i++){
// 	        if(s[i]=='1'){
// 	            count1s++;
// 	        }
// 	        else{
// 	            count0s++;
// 	        }
// 	    }
// 	    for(int i=0; i<n; i++){
// 	        if(r[i]=='1'){
// 	            count1r++;
// 	        }
// 	        else{
// 	            count0r++;
// 	        }
// 	    }
// 	    if(count1s==count1r && count0s == count0r){
// 	        cout<<"YES"<<endl;
// 	    }
// 	    else{
// 	        cout<<"NO"<<endl;
// 	    }
// 	}
// 	return 0;
// }


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s,r;
	    cin>>s;
	    cin>>r;
	    int count1s=0;
	    int count1r=0;
	    count1s=count(s.begin(), s.end(), '1');
	    count1r=count(r.begin(), r.end(), '1');
	    if(count1s==count1r){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}



