#include <iostream>

using namespace std;

bool isPalindrome(long int x) {
  string s = to_string(x);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != s[s.length() - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  long int max = 1;
  for (long int i = 999; i >= 100; i--) {
    for (long int j = 999; j >= 100; j--) {
      long int product = i * j;
      if (i >= j && isPalindrome(product)) {  //避免重复计算
        if (product > max) {
          max = product;
        }
      }
    }
  }
  cout << max << endl;
  // answer = 906609
  return 0;
}