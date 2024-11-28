#include <iostream> 
#include <vector> 
using namespace std ; 


int main() {

    int n ; 
    cin >> n ; 

    // No Solution cases : 
    if(n == 2 || n == 3 )
    {
        cout<<"NO SOLUTION"<< endl; 
        return 0 ; 
    }

    //even
    for(int i = 2 ; i<= n ; i+=2) {
        cout<<i<<" "; 
    }

    // odd
    for(int i = 1 ; i<= n ; i+=2) {
        cout<<i<<" "; 
    }

    

    cout<<endl; 


    return 0; 
}