#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    long long int n,q,i,j,k,get[2],A,B,Ptime=0,max;
    for(i=0; i<2 ;i++)
    {
        scanf("%lli",&get[i]);
    }
    n=get[0];
    q=get[1];

    printf("n=%lli q=%lli\n",Command,n,q);

    char Command,getc;

    long long int Array[n],ans[q];

    for(j=0 ; j<n ; j++)
    {
        Array[n]=0;
    }


    k=0;
    for(j=0 ; j<q ; j++)
    {
        scanf("%c %lli %lli",&Command,&A,&B);
        for(i=0; i<3 ;i++)
        {
            if(i==0)
                scanf("%c",&getc);
            else
                scanf("%lli",&get[i-1]);
        }
        Command=getc;
        A=get[0];
        B=get[1];
        printf("Com=%c A=%lli B=%lli\n",Command,A,B);

        if(Command=='U')
        {
            Array[A]=B;
        }
        else if(Command=='P')
        {
            max=Array[A-1];
            for(i=A-1 ; i<B ; i++)
            {
                if(Array[i]>max)
                {
                    max=Array[i];
                }
            }
            ans[k]=max;
            k++;
            Ptime++;
        }

    }

    for(i=0 ; i<Ptime ; i++)
    {
        printf("%lli\n",ans[i]);
    }

}
