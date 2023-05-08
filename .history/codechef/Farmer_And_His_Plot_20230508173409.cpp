// codechef

// Farmer And His Plot

// Problem
// Santosh has a farm at Byteland. He has a very big family to look after. 
// His life takes a sudden turn and he runs into a financial crisis. 
// After giving all the money he has in his hand, he decides to sell his plots. 
// The speciality of his land is that it is rectangular in nature. 
// Santosh comes to know that he will get more money if he sells square shaped plots. 
// So keeping this in mind, he decides to divide his land into minimum possible number of square plots, 
// such that each plot has the same area, and the plots divide the land perfectly. 
// He does this in order to get the maximum profit out of this.

// So your task is to find the minimum number of square plots with the same area, 
// that can be formed out of the rectangular land, such that they divide it perfectly.

#include <iostream>
#include <algorithm>
#include <__gcd>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,s;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    s= __gcd(n,m);
	    cout<<(n/s)*(m/s)<<endl;
	}
	return 0;
}
