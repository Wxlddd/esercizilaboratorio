/*
#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char alfabeto[26];
    int contatori[26] = {0};
    char s[N];
    int i,j;
    int max,min=1;

    for(i=0;i<26;i++)
        alfabeto[i]='a'+i;

    fgets(s,N,stdin);

    for(i=0;i<strlen(s);i++)
        for(j=0;j<26;j++)
            if(s[i]==alfabeto[j]||s[i]==alfabeto[j]+32)
                contatori[j]++;


    for(i=0;i<26;i++)
        if(contatori[i] != 0)
        {
            max = contatori[i];
            min = contatori[i];

        }

    for(i=0;i<26;i++)
        if(contatori[i] != 0)
            if(contatori[i]>max)
                max = contatori[i];
            else if (contatori[i]<min)
                min = contatori[i];

    printf("G:%d, g:%d",max,min);

    return 0;
}*/
