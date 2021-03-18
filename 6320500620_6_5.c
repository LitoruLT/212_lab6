#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    long long int w,h,j,get[2],i,alldirt=0,avg,more;
    for(i=0 ; i<2 ; i++)
    {
        scanf("%lli",&get[i]);
    }
    w=get[0];
    h=get[1];

    for(i=0 ; i<h ; i++)
    {
        for(j=0 ; j<w ; j++)
        {
            scanf("%lli",&get[0]);
            alldirt=alldirt+get[0];
        }
    }
    avg = alldirt/(w*h);
    more = alldirt%(w*h);
    printf("%lli",(w*h)-more);

}
