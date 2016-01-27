//
// Created by Daniel Tim Lee on 2016. 1. 26..
//
#include "library/lib.h"
void main() {
    int arr[10] = {4, 2, 3, 1};
    int a = 7;
    printf("%d", location_arr(arr, sizeof(arr) / sizeof(int), &a));
}