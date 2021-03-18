#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    long long int n,q,i,j,k,get[2],A,B,Ptime=0,max,test;
    for(i=0; i<2 ;i++)
    {
        scanf("%lli",&get[i]);
    }
    n=get[0];
    q=get[1];
    char Command,getc;
    long long int Array[n],ans[q];
    for(j=0 ; j<n ; j++)
    {
        Array[j]=0;
        ans[j]=0;
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

        if(Command=='U')
        {
            Array[A-1]=B;
            //printf("now Array = ");///////////////////
            //for(test=0 ; test<n ; test++)
            //    printf("%lli ",Array[test]);///////////////////
        }

        else if(Command=='P')
        {
            max=Array[A-1];
            for(i=A-1 ; i<=B-1 ; i++)
            {
                if(Array[i]>max)
                {
                    //printf("max =%lli\n",max);///////////////////
                    max=Array[i];
                    //printf("array[i] =%lli\n",max);//////////////
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
