//Problem 3 Largest prime factor
#include <iostream>

using namespace std;

int main(){
    long int x = 600851475143;
    for(long int factor = 2;factor*factor<=x;factor++){
        while(x%factor == 0 && x != factor){
            cout << factor << endl;
            x /= factor;
        }
    }
    cout << x<< endl;  // answer = 6857
    return 0;
}