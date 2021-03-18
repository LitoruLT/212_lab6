#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    int i,j,k,n,last,posi,posj;
    char command[260];
    scanf("%d",&n);
    scanf("%s",command);



    posi=0;posj=0;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            k=0;
            while(i==posi && j==posj && command[k]!='\0' )
            {
                switch(command[k])
                {
                case 'D':
                    posi++;break;
                case 'R':
                    posj++;break;
                case 'L':
                    posj--;break;
                case 'U':
                    posi--;break;
                }
                if( i!=posi && j!=posj )
                {
                    if(i<posi || i>posi)
                    {
                        printf("|");;break;
                    }
                    if(j<posj || j>posj)
                    {
                        printf("-");;break;
                    }

                }
                k++;
            }
            printf(".");
        }
        printf("\n");


    }
}
