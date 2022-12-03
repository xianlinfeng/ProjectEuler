#include <iostream>

using namespace std;

int main() {
  unsigned int i = 1, j = 2;
  unsigned int ans = 0;
  while (true) {
    if (i < 4000000) {
      unsigned int temp = i;
      i = j;
      j = temp + j;
      if (i % 2 == 0) {
        ans += i;
      }
    } else {
      break;
    }
  }

  cout << ans << endl;
  // answer = 4613732
  return 0;

  
}
