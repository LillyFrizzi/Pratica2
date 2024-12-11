#include <stdio.h>

int main() {
    int a, b, c;
    float mediafloat;
    int mediaint;
    
    //Inserisci i 3 valori
    printf("Inserisci numero: ");
    scanf("%d", &a);
    printf("Inserisci numero: ");
    scanf("%d", &b);
    printf("Inserisci inumero: ");
    scanf("%d", &c);
    
    //Media
    mediafloat = (float)(a+b+c) / 3;
    mediaint=(int)(a+b+c)/3;
    
    // Visualizzazione del risultato
    printf("La media float: %.2f\n", mediafloat);
    printf("La media int: %i\n", mediaint);

}