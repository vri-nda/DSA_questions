// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;
//     cout<<sort(s.begin(), s.end())<<endl;
// }
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
    string s;
    cin>>s;
    string ans = sort(s.begin(), s.end());
    cout<<ans<<endl;
	return 0;
}
