//
// Created by Daniel Tim Lee on 2016. 1. 26..
//
#include "../library/lib.h"

void ran10num() {
    random_init();
    int a[10];
    int num1 = 0, num2 = 0;
    input(&num1, &num2);
    random_arr(a, sizeof(a) / sizeof(int), &num1, &num2);
    for (int j = 0; j < 10; ++j) {
        for (int i = 0; i < (sizeof(a) / sizeof(int)) - 1; ++i) {
            pNumAsec(&a[i], &a[i + 1]);
        }
    }
    print_arr(a, sizeof(a) / sizeof(int));
    puts("");
    for (int j = 0; j < 10; ++j) {
        for (int i = 0; i < (sizeof(a) / 4) - 1; ++i) {
            pNumDsec(&a[i], &a[i + 1]);
        }
    }
    print_arr(a, sizeof(a) / sizeof(int));
}