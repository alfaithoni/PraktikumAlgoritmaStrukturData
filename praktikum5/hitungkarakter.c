#include<stdio.h>
#include "mesinkarakter.h"

int hitungkarakter (char karakter){
    START();
    int count = 0;
    while(! IsEOP()) {
        if (GetCC() == karakter){
            count += 1;
        }
        ADV();
    }
    return count;
}
