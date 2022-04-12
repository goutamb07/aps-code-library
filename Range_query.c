#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long query(long long int n,long long int m,long long int table[n][m],long long int low,long long int high,long long int arr[n])
{
    long long int l=high-low+1;
    long long int k=log2(l);
    if(arr[table[low][k]]<arr[table[high-(1<<k)+1][k]])
    {
        return arr[table[low][k]];
    }
    return arr[table[high-(1<<k)+1][k]];
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int n,q;
    scanf("%lld %lld",&n,&q);
    long long int  arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int que[q][2];
    for(int k=0;k<q;k++)
    {
        scanf("%lld %lld",&que[k][0],&que[k][1]);
    }
    long long int m=floor(log2(n))+1;
    long long int table[n][m];
    //make_table(table,n,arr);
    for(int i=0;i<n;i++) 
        table[i][0]=i;
    
    for(int j=1;(1<<j)<=n;j++)
    {
        for(int i=0;i+(1<<j)-1<n;i++)
        {
            if(arr[table[i][j-1]]<arr[table[i+(1<<(j-1))][j-1]])
            {
                table[i][j]=table[i][j-1];
            }else{
                table[i][j]=table[i+(1<<(j-1))][j-1];
            }
        }
    }
    for(int i=0;i<q;i++)
    {
        printf("%lld\n",query(n,m,table,que[i][0],que[i][1],arr));    
    }
    
    return 0;
}
