/* Problem 11340 - Newspaper */
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
  int TC, K, M, money=0;
  vector<int> value;
  
  cin >> TC;
  char c;
  while(TC--) {
    money = 0;
    value.clear(); value.assign(256, 0);
    cin >> K;
    for(int i=0; i<K; i++) {
      cin >> c;
      cin >> value[(int)c];
    }
    cin >> M;
    cin.ignore();
    for(int i=0; i<M; i++) {
      unsigned char c;
      while ((c = cin.get()) != '\n')
        money += value[(int)c];
    }
    printf("%d.%02d$\n", money / 100, money % 100);
  }
  
  return 0;
}
