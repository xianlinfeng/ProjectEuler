#include <iostream>

using namespace std;

int main(){
    int ans = 1;
    for (int i =1;i< 1000; i++){
        if (i %3 == 0 or i%5 ==0){
            ans += i;
        }
    }
    cout << ans << endl;
    // answer: 233169

    return 0;
}