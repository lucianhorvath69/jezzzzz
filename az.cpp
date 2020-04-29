#include <stdio.h>

void main()
{
    int a, b, f = 1;                               // def. promnené a,b a f 

    printf("Zadajte cislo pro faktorial: \n");   // Zadej cislo
    scanf_s("%d", &b);                          // uloz ho do b 
    for (a = 1; a <= b; a++)                   // a je definovano o velikosti 1; dokud je a mensi nebo rovno b tak pričitej k a + 1
        f = f * a;                            // vzorec pro vypočet faktorialu

    printf("Faktorial cisla: %d = %d\n", b, f);     // Vypis f 
}                                          