// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string a,b;
// 	    int count=0;
// 	    cin>>a;
// 	    cin>>b;
// 	    sort(a.begin(), a.end());
// 	    sort(b.begin(), b.end());
// 	    int i=0, j=0;
// 	    while(i<a.length() && j<b.length()){
// 	        if(a[i]<b[j]){
// 	            i++;
// 	        }
// 	        else if(a[i]>b[j]){
// 	            j++;
// 	        }
// 	        else{
// 	            count++;
// 	            i++;
// 	            j++;
// 	        }
// 	    }
// 	    cout<<count<<endl;
// 	}
// 	return 0;
// }




#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    while(t--)
    {
        string s,ss;
        cin>>s>>ss;
        
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        
        int i=0,j=0,count=0;
        
        while((i < s.length()) && (j < ss.length()))
        {
            if(s[i] < ss[j])
                i++;
                
            else if(s[i] > ss[j])
                j++;
                
            else
            {
                count++;
                i++;
                j++;
            }
        }
        
        cout<<count<<endl;
    }



	return 0;
}
