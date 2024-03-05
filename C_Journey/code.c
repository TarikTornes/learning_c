#include <stdio.h>


struct compte { int banque; int numero; float solde; };

struct compte creeCompte (int banque, int num) {
    struct compte cpt = {banque, num};
    cpt.solde = 80;
    return cpt;
}


void addSolde (struct compte *cpt) {
    (*cpt).solde = (*cpt).solde + 11;
}

int main() {
    int t[5] = {1,2,3,4,5};
    struct compte cp;
    cp = creeCompte(12, 1234);
    printf("%f\n", cp.solde);
    
//addSolde(&cp);
    cp.solde = cp.solde + 11;

    printf("%f\n", cp.solde);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", t[i]);
    } 

    printf("%d\n",t);

    printf("%d\n",&t);




    return 0;
}
