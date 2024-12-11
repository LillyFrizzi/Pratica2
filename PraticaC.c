#include <stdio.h>
#include <math.h>

int main() {
    int lato=4;
    
    // Area del quadrato
    int areaq= lato * lato;
    printf("L'area del quadrato è di:%.i\n",areaq);
    
    // Area del cerchio
    int raggio = lato / 2;
    float areac = 3.14 * (raggio*raggio);
    printf("L'area del cerchio è: %.2f\n", areac);
    
    // CArea del triangolo equilatero
    int areat= (sqrt(3) / 4) * (lato*lato);
    printf("L'area del triangolo equilatero è: %.i\n",  areat);
    
 }

 