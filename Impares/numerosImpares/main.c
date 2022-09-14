#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, cont, apres;
cont = 1;
apres = 1;

printf("Digite um numero inteiro:");
scanf("%d", &n);

while(cont < n){
    printf("%d, ", apres);
    apres = apres + 2;
    cont++;  // cont = cont + 1;
}
while(cont == n){
    printf("%d. ", apres);
    apres = apres + 2;
    cont++;  // cont = cont + 1;
}

    // apres - 1 - 3 - 5 - 7
    // n - 3
    // cont - 1 - 2 - 3 - 4
    // Tela: 1 3 5

    return 0;

}
