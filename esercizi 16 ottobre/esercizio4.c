/*

#include <stdio.h>
#include <string.h>
#define N 100

int main()
{

    //La stringa grande e quella che potenzialmente potrebbe contenere l'altra


    char grande[N];
    char piccola[N];
    int i,j = 0;
    int match = 1;
    int count = 0;

    printf("Inserire la stringa grande\n");
    fgets(grande,N,stdin);

    printf("Inserire la stringa piccola\n");
    fgets(piccola,N,stdin);

    for(i=0;i<=strlen(grande)-strlen(piccola);i++)
    {
        for(j=0;j<strlen(piccola)-1;j++)
            if(piccola[j]!=grande[i+j]) // Controllo se tutti gli elementi della stringa piccola sono presenti (in ordine)
            {                           // nella stringa grande con un doppio ciclo for
                match = 0;
                break;
            }
        if(match)
            count++;                    //Conto quante volte la stringa piccola si ripresenta
        match = 1;
    }

    printf("%d\n",count);

return 0;
}

*/
