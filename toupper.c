#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char x;

    printf("Digite um caractere(S encerra o programa): \n");

    while(x!='S'){

        x=getchar();
        setbuf(stdin, NULL);

        if(isspace(x)){
            printf("Você digitou um espaço!\n");
        }
        if(isdigit(x)){
            printf("Você digitou um número!\n");
        }
        if(isupper(x)){
            printf("Você digitou uma letra maiúscula!\n");
        }
        if(islower(x)){
            printf("Você digitou uma letra minúscula!\n");
        }
        if(isalpha(x)){
            printf("Você digitou uma letra!\n");

        printf("\n\t\t\tMaiúscula >>> %c\n", toupper(x));
        printf("\t\t\tMinúscula >>> %c\n", tolower(x));
        }

    }
            return 0;
}
