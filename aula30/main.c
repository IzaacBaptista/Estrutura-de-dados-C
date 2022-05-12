#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Trocar valores de duas variáveis sem usar uma variável auxiliar 
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("a: %d\tb: %d\n", a, b);
    
    /*
    
    x = 10
    y = 5
    
    x = x + y -> 15
    y = x - y -> 10
    x = x - y -> 5
        
    */
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("a: %d\tb: %d\n", a, b);    

    return 0;
}