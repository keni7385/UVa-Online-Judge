/* Problem 11799 - Horror Dash */
#include <stdio.h>

int main(int argc, char argv[])
{
    int t, i, j, ac, max, n;

    scanf("%d", &t);
    for(i=1; i<=t; i++) {
        scanf("%d", &n);
        scanf("%d", &max);
        for(j=1; j<n; j++) {
            scanf("%d", &ac);
            if(ac > max)
                max = ac;
        }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}
