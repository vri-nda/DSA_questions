// Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. 
// That's why he decided to invent an extension for his favorite browser that would change the letters'
//  register in every word so that it either only consisted of lowercase letters or, vice versa, only of
//   uppercase ones. At that as little as possible letters should be changed in the word. For example,
//    the word HoUse must be replaced with house, and the word ViP — with VIP. 
//    If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase
//     ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	// your code goes here
    string s;
    cin>>s;
    int count_lower = 0, count_upper =0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>64 && s[i]<91){
            count_upper++;
        }
        else{
            count_lower++;
        }
        if((count_lower>count_upper) || (count_lower==count_upper)){
        cout<<tolower(s[i])<<endl;
        break;
    }
    else{
        cout<<toupper(s[i])<<endl;
        break;
    }
    }
    // if((count_lower>count_upper) || (count_lower==count_upper)){
    //     cout<<tolower(s[i])<<endl;
    //     break;
    // }
    // else{
    //     cout<<toupper(s[i])<<endl;
    //     break;
    // }
	return 0;
}
