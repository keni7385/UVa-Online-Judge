/* Problem 11172 - Relational Operator */
#include <stdio.h>

int main(int argc, char **argv)
{
  int TC, a, b;
  scanf("%d", &TC);
  
  while(TC--) {
    scanf("%d %d", &a, &b);
    if(a > b)
      printf(">\n");
    else if(a < b)
      printf("<\n");
    else
      printf("=\n");
  }
  
  return 0;
}
