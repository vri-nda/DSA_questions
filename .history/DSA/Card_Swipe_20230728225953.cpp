// Problem
// In the bustling CodeChef office, the entrance is equipped with a high-tech card swipe system. Each employee is assigned a unique ID card that they use to swipe in and out of the building.

// The system records every swipe, capturing the first swipe of an ID as in, second as out, third as in, and so on. Given an array 
// �
// A consisting of 
// �
// N IDs denoting 
// �
// N swipes throughout the day, find the maximum number of people in the office at any time.

// Note that there is nobody inside the office before the first swipe.




// #include <iostream>
// #include <map>
// #include <cmath>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,n;
// 	cin>>t;
// 	while(t--){
// 	    cin>>n;
// 	    int a[n];
// 	    map<int, int>mp;
// 	    int count=0, ans=0;
// 	    for(int i=0; i<n; i++){
// 	        cin>>a[i];
// 	        mp[a[i]]++;
// 	        if(mp[a[i]]%2==1){
// 	            count++;
// 	        }
// 	        else{
// 	            count--;
// 	        }
// 	        ans=max(ans,count);
// 	    }
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }
