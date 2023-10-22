#include <stdio.h>
#include<string.h>
#define N 100

int main()
{
    int i,j,ls;
    char s[N];
    scanf("%s",s);
    ls=strlen(s);
    for (i=0; i<ls-1; i++){
        if (s[i]==s[i+1]){
            for (j=i; j<ls-1;j++){
                s[j]=s[j+2];
                ls=strlen(s);
                i--;
            }
        }
    }
    printf("%s",s);
    return 0;
}