//
// Created by Daniel Tim Lee on 2016. 1. 26..
//

#include "../library/lib.h"

void koi_10bu() {
    random_init();
    int num = num_case();
    printf("%c\n", num);
    int count = 0, a[5];
    for (int i = 0; i < 5; ++i) {
        a[i] = num_case();
        printf("%c ", a[i]);
        if (a[i] == num) count++;
    }
    printf("\ncount : %d", count);
}