// Problem
// Chef invented a modified wordle.

// There is a hidden word SS and a guess word TT, both of length 55.

// Chef defines a string MM to determine the correctness of the guess word. For the i^{th}i 
// th
//   index:

// If the guess at the i^{th}i 
// th
//   index is correct, the i^{th}i 
// th
//   character of MM is \texttt{G}G.
// If the guess at the i^{th}i 
// th
//   index is wrong, the i^{th}i 
// th
//   character of MM is \texttt{B}B.
// Given the hidden word SS and guess TT, determine string MM.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	string s;
	string guess;
	cin >> t;
	while(t--){
	    cin >> s;
	    cin >> guess;
	    for(int i=0;i<5;i++){
	        if(s[i]==guess[i]){
	            cout << 'G';
	        }
	        else{
	            cout << 'B';
	        }
	    }
	    cout << endl;
	}
	return 0;
}