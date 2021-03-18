#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    int n,i,j,k,get,posR=0,NumR=0;
    scanf("%d",&n);
    char ans[n],num[n];


    scanf("%s",ans);
    scanf("%s",num);


    for(i=0 ; ans[i]!='\0' ; i++)
    {
        if(ans[i]==num[i])
        {
            posR++;
        }
        else
        {
            for(j=0 ; ans[j]!='\0' ; j++)
            {
                if(num[i]==num[j])
                    NumR++;
            }
        }

    }

    printf("%d %d",posR,NumR);

}
