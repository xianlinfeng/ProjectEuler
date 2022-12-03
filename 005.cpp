// Problem 5 Smallest multiple
#include <iostream>

using namespace std;

int main() {
  long ans = 1;
  for (long int i = 1; i <= 20; i++) {
    long int gcd = __algo_gcd(i, ans);
    if (i % gcd == 0) {
      ans *= i / gcd;
    }
  }
  cout << ans << endl;
  return 0;
}