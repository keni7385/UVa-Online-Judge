/* Problem 10077 - The Stern-Brocot Number System */
#include <iostream>

using namespace std;

int main() {
  int a, b, j, k, v, z;
  int m, n;
  while(1) {
    a=0; b=1; j=1; k=1; v=1; z=0;
    cin >> m >> n;
    if(m == 1 && n == 1)
      break;
    
    while(1) {
      if(j == m && k == n) {
        // number found
        break;
      } else if(m*k-n*j > 0) { // x > middle
        a=j; b=k;
        cout << "R";
      } else { // x < middle
        v=j; z=k;
        cout << "L";
      }
      j = a + v;
      k = b + z;
    }
    
    cout << endl;
  }
  return 0;
}
