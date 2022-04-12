#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;
}

int main()
{
    char s1[100],s2[100];

    scanf("%s",s1);
    ///scanf("%s",s2);

    strcpy(s2,strrev(s1));

    int s1len,s2len;

    s1len=strlen(s1);
    s2len=strlen(s2);

    int LCS[s1len][s2len],i,j,m=0;

    if(s1len==0||s2len==0)
    {
        printf("\n\n0");
        exit(0);
    }

    for(i=0;i<=s1len;i++)
    {
        LCS[i][0]=0;
    }

    for(j=0;j<=s2len;j++)
    {
        LCS[0][j]=0;
    }

    for(i=1;i<=s1len;i++)
    {
        for(j=1;j<=s2len;j++)
        {
            if(s1[j]==s2[i])
                LCS[i][j]=LCS[i-1][j-1]+1;
            else
            {
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }

            if(LCS[i][j]>m)
                m=LCS[i][j];
        }
    }

    printf("\n\n%d",s1len-m);
}
