//
// Created by Daniel Tim Lee on 2016. 1. 26..
//

#include "../library/lib.h"

void stick() {
    int num[10] = {'\0'};
    num[0] = 64;
    int x = 0;
    int k = 0;
    scanf("%d", &x);

    for (int i = 0; i < 10; i++) {
        if (sum_arr(num) > x) {
            k++;
            num[i] = num[i] / 2;
            if (sum_arr(num) > x) {
                i--;
                continue;
            }
            else if (sum_arr(num) == x) {
                printf("%d\n", k);
                break;
            }
            num[i + 1] = num[i];
        }
    }
}