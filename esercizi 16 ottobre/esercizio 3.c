/*
#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char s[N];
    char reverse[N];
    int i,match = 0;
    int ns;


    fgets(s,N,stdin);

    s[strlen(s)-1]= '\0';

    for(i=0;i<strlen(s);i++)
        reverse[i]=s[(strlen(s))-i-1];

    reverse[i]=0;

    if(strcmp(s,reverse)==0)
        match = 1;
    else
        match = 0;

    printf("%d",match);


    return 0;
}*/
