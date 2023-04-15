// Problem
// Given A, B,A,B, and CC as the sides of a triangle, find whether the triangle is scalene.

// Note:

// A triangle is said to be scalene if all three sides of the triangle are distinct.
// It is guaranteed that the sides represent a valid triangle.
// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of three space-separated integers A, B,A,B, and CC — the length of the three sides of the 
// triangle.
// Output Format
// For each test case, output on a new line, YES, if the triangle is scalene, and NO otherwise.

// You may print each character of the string in uppercase or lowercase. For example, YES, yes, Yes, and yEs are
//  all considered identical.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a!=b && b!=c && c!=a){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
