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
            printf("Voc� digitou um espa�o!\n");
        }
        if(isdigit(x)){
            printf("Voc� digitou um n�mero!\n");
        }
        if(isupper(x)){
            printf("Voc� digitou uma letra mai�scula!\n");
        }
        if(islower(x)){
            printf("Voc� digitou uma letra min�scula!\n");
        }
        if(isalpha(x)){
            printf("Voc� digitou uma letra!\n");

        printf("\n\t\t\tMai�scula >>> %c\n", toupper(x));
        printf("\t\t\tMin�scula >>> %c\n", tolower(x));
        }

    }
            return 0;
}
