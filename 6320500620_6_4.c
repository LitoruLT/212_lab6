#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    int n,i,j,k,get[2];
    scanf("%d",&n);
    int score[n],vote[n][2];

    for(i=0 ; i<n ; i++)
    {
        score[i]=0;
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%d",&vote[i][j]);
        }
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            score[vote[i][j]]++;
        }
    }
    int max=score[0];
    int min=score[0];
    int whomin=0,whomax=0,rightmin=0;

    while(!rightmin)
    {
        for(i=0 ; i<n ; i++)
        {
            if(score[i]>max)
            {
                max=score[i];
                whomax=i;
            }
            else if(score[i]<min)
            {
                min=score[i];
                whomin=i;
            }
        }

        if(vote[whomax][0]==whomin || vote[whomax][1]==whomin)
        {
            rightmin=1;
            break;
        }


    }
    printf("%d %d",whomax,whomin);




}