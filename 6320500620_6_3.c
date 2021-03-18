#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    long long int n,q,i,j,k,get,A,B,Ptime=0,max;
    scanf("%lli %lli",&n,&q);
    char Command;

    long long int Array[n];

    for(j=0 ; j<n ; j++)
    {
        Array[n]=0;
    }


    for(j=0 ; j<q ; j++)
    {
        scanf("%c %lli %lli",&Command,&A,&B);
        if(Command=='U')
        {
            Array[A]=B;
        }
        else if(Command=='P')
        {
            for(i=A-1 ; i<B ; i++)
            {

            }
            Ptime++;
        }

    }


}
