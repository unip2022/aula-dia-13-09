#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdaluno, contador;
    float nota1, nota2, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdaluno);

    contador=1;
    while(contador <= qtdaluno)
    {
        printf("Digite as notas do aluno %d. \n", contador);
        printf("Digite a nota 1: \n");
        scanf("%f", &nota1);
        printf("Digite a nota 2:");
        scanf("%f", &nota2);

        media = (nota1+nota2)/2;

        if (media>=5){
            printf("Aprovado.\n");
        }
        else{
            printf("Reprovado.\n");
        }
        contador++;
    }
    return 0;
}
