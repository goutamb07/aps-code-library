#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>

int main() {
    int N,M,i,j;
    scanf("%d %d",&N,&M);
    int a[N],l,r;
    for(i=0;i<N;i++) scanf("%d",&a[i]);
    int min = INT_MAX;
    for(i=0;i<M;i++) {
        scanf("%d %d",&l,&r);
        // printf("%d \n",ar[l][r]);
        min = INT_MAX;
        if(l<N && r<N) {
            for(j=l;j<=r;j++) {
                if(min > a[j]) min = a[j];
            }
            printf("%d \n",min);
        }
        else printf("0\n");
    }
    return 0;
}
