//
// Created by daniel on 16. 1. 25.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
#define ran(num1, num2)    (rand() % (num2 - num1)) + num1; // _new define : random range

void pSwap(int *num1, int *num2) {		//swap var
	int swap=*num1;
	*num1 = *num2;
	*num2 = swap;
}

void pNumAsec(int *num1, int *num2) {	//arange as asec. order (after func_swap)
    (*num1 > *num2) ? pSwap(num1,num2) : 0 ;
}

void pNumDsec(int *num1, int *num2) {	//arange as dsec. order (after func_swap)
	(*num1 < *num2) ? pSwap(num1, num2) : 0;
}

void input(int *num1, int *num2) {
    printf("Input num1 : ");
    scanf("%d", num1);
    printf("Input num2 : ");
    scanf("%d", num2);
}

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d", arr[i]);
    }
}

int sum_arr(int *arr) {
    int i = 0, total = 0;
    while (arr[i]) {
        total += arr[i];
        i++;
    }
    return total;
}

int length_arr(int *arr) {
    int i = 0;
    while (arr[i]) {
        i++;
    }
    return i;
}

int duplicate_chk_arr(int *arr, int arr_size) {   //not the exact number of duplication.
    int count = 0;
    for (int i = 0; i < arr_size; ++i) {
        for (int j = i + 1; j < arr_size; ++j) {
            if (arr[i] == arr[j])
                count++;
        }
    }
    return count;
}

int Lcm(int *num1, int *num2) {            //Least common multiple. If(num2==0), returns 0;
    pNumDsec(num1, num2);
    int result = 0;
    if (*num2 == 0)
        return 0;
    do {
        result = *num1 % *num2;
        *num1 = *num2;
        *num2 = result;
    } while (result != 0);
    return *num1;
}

int length_digit(int *num) {
    int divider = 0;
    for (int i = 0; i < 11; ++i) {
        divider = pow(10.0, (double) (i));
        if (*num / divider == 0) {
            return i;
        }
    }
}

void save_digit(int *arr, int arr_size, int *num) {     //saves each digit in array. compare arr_size and digit length
    int length = length_digit(num);
    int size = (arr_size > length) ? length : arr_size;
    int divider = 0;
    for (int i = 0; i < size; ++i) {
        divider = pow(10.0, (double) (length - 1 - i));
        arr[i] = (*num / divider) % 10;
    }
}

int location_arr(int *arr, int arr_size, int *num) {    //if const doesn't exits, returns -1
    for (int i = 0; i < arr_size; ++i) {
        if (arr[i] == *num) {
            return i;
        }
        i++;
    }
    return -1;
}


/*
 * random
 */
int up_case() { return ran(65, 91); }

int lw_case() { return ran(97, 123); }

int sp_case() { return ran(33, 38); }   //special_case needs to be reset. range is too small
int num_case() { return ran(48, 58); }

void random_init() {                                     //random function needed with this init.
    srand((unsigned) time(NULL));
}

/*
 * *******************************
 * The following function
 * random_init(); must be needed!!
 * ********************************
 */
void random_arr(int *arr, int size, int *num1, int *num2) { //range of random needed : num1,num2
    pNumAsec(num1, num2);
    for (int i = 0; i < size; ++i) {
        arr[i] = ran(*num1, *num2);
    }
}

int random_case() {
    int sel = ran(0, 4);
    switch (sel) {
        case 0:
            return up_case();
        case 1:
            return lw_case();
        case 2:
            return num_case();
        case 3:
            return sp_case();
    }
}
