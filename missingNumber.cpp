#include <iostream> 
using namespace std ; 


int main() {

    long long s = 0 ; 
    long long wholeSum = 0 ;
    int n = 0 ; 
    cin >> n ; 

    wholeSum = (1ll*n*(n+1))/2 ; 

    int i ; 

    while(n!=1) {
        n-- ; 
        cin >> i ; 
        s += i ;
    }

    cout<< wholeSum - s << endl ; 


    return 0; 
}