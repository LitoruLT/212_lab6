#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{

    int n,i,j,k;
    scanf("%d",&n);
    char word[n][1100],wordsave[1100];
    for(i=0; i<n ; i++)
    {
        fflush(stdin);
        scanf("%[^\n]c",&word[i]);
    }

    for(i=0; i<n ; i++)
    {
        for(j=0; word[i][j]!='\0' ; j++)
        {
            while( toupper(word[i][j]) > toupper(word[i+1][j]) && i+1<n)
            {
                strcpy(wordsave,word[i]);
                strcpy(word[i],word[i+1]);
                strcpy(word[i+1],wordsave);
                if(i>0)
                    i=i-1;
            }
            if(toupper(word[i][j]) < toupper(word[i+1][j]))
                break;

        }
    }

    for(i=0; i<n ; i++)
    {
        printf("%s\n",&word[i]);

    }

}
