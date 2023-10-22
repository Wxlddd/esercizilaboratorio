/*
#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char s[N];
    int i,j = 0;
    int n = 0;
    int len[N] = {0};
    float media, totale = 0.0;

    fgets(s,N,stdin);

    for(i=0;i<strlen(s);i++)
        if(s[i] == ' ' || s[i]=='\n')
        {
            len[n] = i - j;
            n++;
            j = i + 1;
        }
    for(i=0;i<n;i++)
        totale+=len[i];
    media = totale/n;

    for(i=0;i<n;i++)
    {
        if(len[i]<media)
            printf("-");
        else if (len[i]>media)
            printf("+");
        else if (len[i]==media)
            printf("=");
    }





    return 0;
}
*/