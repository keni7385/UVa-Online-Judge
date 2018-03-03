/* Problem 10038 - Jolly Jumpers */
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int nums[3001];
bool diffAlreadyTaken[3001];
int n;

string checkJolly() {
  int SumFrom1toNmeno1 = (n-1)*n/2, diff;
  for(int i=1; i<n; i++) {
    diff = abs(nums[i] - nums[i-1]);
    if(diff >= n || diffAlreadyTaken[diff]) return "Not jolly";
    else {
      SumFrom1toNmeno1 -= diff;
      diffAlreadyTaken[diff] = true;
    }
    if(SumFrom1toNmeno1 < 0) return "Not jolly";
  }
  if(SumFrom1toNmeno1 == 0) return "Jolly";
  else return "Not jolly";
}

int main(int argc, char **argv)
{
  while(scanf("%d", &n) != EOF) {
    if(n==1) {
      cin >> n;
      cout << "Jolly" << endl;
      continue;
    } else {
      for(int i=0; i<n; i++)
        cin >> nums[i];
      memset(diffAlreadyTaken, false, sizeof diffAlreadyTaken);
      cout << checkJolly() << endl;
    }
  }
  return 0;
}
