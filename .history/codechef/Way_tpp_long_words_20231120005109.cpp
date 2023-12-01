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
void sortString(string &s){
    sort(s.begin(), s.end());
    cout<<s;
}
int main() {
	// your code goes here
    string s;
    cin>>s;
    sortString(s);
	return 0;
}
