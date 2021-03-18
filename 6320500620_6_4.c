#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    int n,i,j,k,get[2];
    scanf("%d",&n);
    int score[n];

    for(i=0 ; i<n ; i++)
    {
        score[i]=0;
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%d",&get[j]);
        }
        score[get[0]]++;
        score[get[1]]++;
    }




}
