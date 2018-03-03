/* Problem 11498 - Division of Nlogonia */
#include <stdio.h>

int main(int argc, char **argv)
{
  int K, M, N, x, y;
  
  while(scanf("%d", &K), K) {
    scanf("%d %d", &M, &N);
    while(K--) {
      scanf("%d %d", &x, &y);
      if(x==M || y==N) {
        printf("divisa\n");
      } else {
        if(y>N)
          printf("N");
        else
          printf("S");
        
        if(x>M)
          printf("E\n");
        else
          printf("O\n");
      }
    }
  }
  
  return 0;
}
