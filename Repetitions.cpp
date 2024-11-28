#include <iostream> 
using namespace std ; 
int main() {

    string s ; 
    cin >> s ; 

    int start = 0, end = 0 ; 
    int maxLen = 1; 

    for(end ; end < s.length() ; end++) {
        if(s[start] != s[end]) {
            maxLen = max(maxLen, (end - start )); 
            start = end ; 
        }
    }

    maxLen = max(maxLen, (end - start ));

    cout << maxLen << endl ; 

    return 0; 
}