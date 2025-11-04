#include <stdio.h>

int main() {
    int total;
    int counter = 1;
    
    while (counter > 0)  
    {
        int number;
        printf("Digite um número inteiro:\n");
        scanf("%d", &number);
        if(number == 0) 
        {
            counter = 0;
            continue;
        }

        total += number;
    }

    printf("Resultado final: %d", total);

    return 0;
}