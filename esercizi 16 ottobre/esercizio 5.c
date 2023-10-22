/*

#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char s[N];
    char t[N];
    char r[N];
    char g[N];
    int match = 0;
    int i = 0;

    printf("Inserire la prima parola\n");
    fgets(s,N,stdin);

    printf("Inserire la seconda parola\n");
    fgets(t,N,stdin);

    if (strlen(s)==strlen(t))
    {
        while(i<strlen(s))
        {
            r[i]=s[i];
            i++;
            r[i]=t[i];
            i++;
        }
        i = 0;
        while(i<strlen(s))
        {
            g[i]=t[i];
            i++;
            g[i]=s[i];
            i++;
        }
        i = 0;
        if(strcmp(g,s)==0 || strcmp(g,t)==0|| strcmp(r,s) == 0 ||strcmp(r,t)==0)
            match = 1;
    }

    if(match)
        printf("Le parole sono compatibili");
    else
        printf("Le parole non sono compatibili");








    return 0;
}
*/
