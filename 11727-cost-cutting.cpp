/* Problem 11727 - Cost Cutting */
#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a, const void * b) {
  if(*(int *)a > *(int *)b)
    return 1;
  else
    return 0;
}

int main(int argc, char **argv)
{
  int TC, num[3], tc=1;
  scanf("%d", &TC);
  while(TC--) {
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    qsort(num, 3, sizeof(int), cmp);
    printf("Case %d: %d\n", tc, num[1]);
    tc++;
  }
  return 0;
}
