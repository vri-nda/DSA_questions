// codechef
// Mode of Frequencies
// Chef opted for Bio-Statistics as an Open-Elective course in his university, but soon got bored, and decided to text his friends during lectures. The instructor caught Chef, and decided to punish him, by giving him a special assignment.

// There are N numbers in a list =1,2,…,A=A1,A2,…,AN. 
// Chef needs to find the mode of the frequencies of the numbers. If there are multiple modal values, report the smallest one. In other words, find the frequency of all the numbers, and then find the frequency which has the highest frequency. If multiple such frequencies exist, report the smallest (non-zero) one.
// More formally, for every v such that there exists at least one i such that =Ai=v, find the number of j such that =Aj=v, and call that the frequency of 
// v, denoted by ()freq(v). Then find the value w such that 
// ()=freq(v)=w for the most number of vs considered in the previous step. If there are multiple values 
// w which satisfy this, output the smallest among them.
// As you are one of Chef's friends, help him complete the assignment.


#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    map<int, int>mp;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    map<int, int>ans;
	    for(auto j: mp){
	        ans[j.second]++;
	    }
	    int max=0, min=0;
	    for(auto k: ans){
	        if(k.second>max){
	            max=k.second;
	            min=k.first;
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}

