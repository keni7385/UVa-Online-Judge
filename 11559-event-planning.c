/* Problem 11559 - Event Planning */
#include <stdio.h>
#include <stdlib.h>
#define OVF "stay home"
#define INF -1

int main()
{
    int N, B, H, W;
    int h, w, p, nW, minCost, cePosto;

    while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF) {
        minCost = INF;
        cePosto = 0;
        for(h=0; h<H; h++) {
            scanf("%d", &p);
            for(w=0; w<W; w++) {
                scanf("%d", &nW);
                if(nW >= N)
                    cePosto = 1;
            }
            if(cePosto)
                if(minCost == INF)
                    minCost = p * N;
                else
                    if(minCost > p*N)
                        minCost = p * N;
        }
        if(minCost != INF && minCost <= B)
                printf("%d\n", minCost);
            else
                printf("%s\n", OVF);
    }

    return 0;
}
