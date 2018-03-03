/* Problem 00108 - Maximum Sum */
#include <iostream>

#define MAX(a, b) ( (a>b) ? a : b )

using namespace std;

int main() {
  int N, A[101][101];
  int ans = -127*100*100, sum;
  cin >> N;
  for(int i=0; i<N; i++) for(int j=0; j<N; j++) {
    cin >> A[i][j];
    if(i>0) A[i][j] += A[i-1][j];
    if(j>0) A[i][j] += A[i][j-1];
    if(i>0 && j>0) A[i][j] -= A[i-1][j-1];
  }
  
  for(int i=0; i<N; i++) for(int j=0; j<N; j++) {
    for(int k=i; k<N; k++) for(int l=j; l<N; l++) {
      sum = A[k][l];
      if(i > 0) sum -= A[i-1][l];
      if(j > 0) sum -= A[k][j-1];
      if(i > 0 && j > 0) sum += A[i-1][j-1];
      ans = MAX(ans, sum);
    }
  }
  
  cout << ans << endl;
  
  return 0;
}
