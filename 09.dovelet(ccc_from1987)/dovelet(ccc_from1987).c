//
// Created by Daniel Tim Lee on 2016. 1. 27..
//
//http://59.23.113.171/pool/ccc_from1987/ccc_from1987.php?pname=ccc_from1987
#include "../library/lib.h"

#include<unistd.h>

void ccc_from1987() {
    int year = 0, div = 0;
    scanf("%d", &year);
    int arr[4];
    memset(arr, '\0', sizeof(arr));
    do {
        year++;
        save_digit(arr, sizeof(arr) / sizeof(int), &year);
        print_arr(arr, sizeof(arr) / sizeof(int));
        printf("\t%d\n", duplicate_chk_arr(arr, sizeof(arr) / sizeof(int)));
    } while (duplicate_chk_arr(arr, sizeof(arr) / sizeof(int)) != 0);

}

