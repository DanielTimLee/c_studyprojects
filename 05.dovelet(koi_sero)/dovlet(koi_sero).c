//
// Created by Daniel Tim Lee on 2016. 1. 26..
//
//http://59.23.113.171/pool/koi_sero/koi_sero.php?pname=koi_sero
//random 5 array with 1~15 character
//up,lw,num_case. - sp_case is not included.

#include "../library/lib.h"

void koi_sero() {
    random_init();
    int arr[5][15];
    memset(arr, 0, sizeof(arr));
    for (int k = 0; k < 5; k++) {
        int size = ran(1, 15);
        for (int j = 0; j < size; j++) {
            int sel = ran(0, 3);
            switch (sel) {
                case 0:
                    arr[k][j] = up_case();
                    break;
                case 1:
                    arr[k][j] = lw_case();
                    break;
                case 2:
                    arr[k][j] = num_case();
                    break;
            }
        }
    }
    for (int k = 0; k < 5; k++) {
        for (int j = 0; j < 15; j++) {
            if (!arr[k][j]) {
                continue;
            }
            printf("%c", arr[k][j]);
        }
        puts("");
    }
    puts("");
    for (int j = 0; j < 15; j++) {
        for (int k = 0; k < 5; k++) {
            if (!arr[k][j]) {
                continue;
            }
            printf("%c", arr[k][j]);
        }
        printf("\n");
    }
}
