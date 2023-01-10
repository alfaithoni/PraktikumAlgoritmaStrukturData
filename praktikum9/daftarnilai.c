#include <stdio.h>
#include "listlinier.h"

int main () {
    List L;
    int input;

    CreateEmpty(&L);
    scanf("%d", &input);
    while (input >= 0 && input <= 100) {
        InsVFirst(&L, input);
        scanf("%d", &input);
    }
    if (!IsEmpty(L)) {
        printf("%d\n", NbElmt(L));
        printf("%d\n", Max(L));
        printf("%d\n", Min(L));
        printf("%.2f\n", Average(L));

        InversList(&L);
        PrintInfo(L);
        printf("\n");
        InversList(&L);
        PrintInfo(L);
        printf("\n");

    } else {
        printf("Daftar nilai kosong\n");
    }
    return 0;
}
