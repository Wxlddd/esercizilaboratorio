/*
#include <stdio.h>
#include <string.h>
#define N 100

int main() {
    char s[N] = {'\0'};
    int i, ns, j;
    int ndoppie = 0;
    int n;

    printf("Inserire la parola da modificare\n");
    fgets(s, N, stdin);

    ns = strlen(s);

    for (i = 1; i < ns; i++)
        if (s[i] == s[i - 1])
            ndoppie++;

    for(n=0;n<ndoppie;n++)
    {
        for(i=1;i<ns;i++)
        {
            if(s[i]==s[i-1])
                for(j=0;i+j<ns;j++)
                {
                    if(s[j]=='\n') {
                        s[j] = '\0';
                        break;
                    }
                    s[i-1+j]=s[i+1+j];
                }
            ns = strlen(s);
        }

    }


    printf("%s",s);

    return 0;
}*/
