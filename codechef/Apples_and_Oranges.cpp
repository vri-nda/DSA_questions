// Problem
// Bob has XX rupees and goes to a market. The cost of apples is Rs. AA per kg and the cost of oranges is Rs. BB per kg.

// Determine whether he can buy at least 11 kg each of apples and oranges.

// Input Format
// The first line of input will contain an integer XX, the amount of money Bob has.
// The second line of input contains two space-separated integers AA and BB, the cost per kg of apples and oranges respectively.
// Output Format
// Print a single line containing Yes if Bob can buy the fruits and No otherwise.

// You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int x,A,B;
// 	cin>>x;
// 	cin>>A>>B;
// 	if(A+B<=x){
// 	    cout<<"Yes"<<endl;
// 	}
// 	else{
// 	    cout<<"No"<<endl;
// 	}
// 	return 0;
// }



#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	int count=0;
	cin>>n;
	for(int i=1; i<=10; i++){
	    if(n%i==0){
			count=i;
			}
	}
	cout<<count<<endl;
	return 0;
}
