// CODECHEF
// Problem
// Given an integer N, let us consider a triangle of numbers of N lines in which a number a11,appears in the first line, 
// two numbers a21 and a22​ appear in the second line, three numbers a31,a32 and a33 appear in the third line, etc. 
// In general, i numbers ai1,ai2  …aii appear in the ith line for all 1≤i≤N. Develop a program that will compute the largest of the sums of numbers
//  that appear on the paths starting from the top towards the base, so that:
// on each path the next number is located on the row below, more precisely either directly below or below 
// and one place to the right.
// Warning: large Input/Output data, be careful with certain languages.

// Input Format
// The first line of the input contains an integer T, the number of test cases.
// Then T test cases follow. Each test case starts with an integer N, the number of rows. Then N lines follow where in ith 
// line contains i integers 
// ai1,ai2  …aii.

// Output Format
// For each test case print the maximum path sum in a separate line.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n][n];
	   // creation of triangle
	    for(int row=0; row<n; row++){
	        for(int col=0; col<row+1; col++){
	            cin>>a[row][col];
	        }
	    }
	   // path traversal (down or diagonal_down)
	   for(int row=n-2; row>=0; row--){
	       for(int col=0; col<row+1; col++){
	           a[row][col]+=max(a[row+1][col], a[row+1][col+1]);
	       }
	   }
	   cout<<a[0][0]<<endl;
	    
	}
	return 0;
}
