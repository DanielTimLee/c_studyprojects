//
// Created by daniel on 16. 1. 25.
//

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

int Lcm(int *num1, int *num2) {			//Least common multiple. If(num2==0), returns 0;
	pNumDsec(num1, num2);
    int result = 0;
	if (*num2 == 0)
		return 0;
	do{
		result = *num1%*num2;
		*num1 = *num2;
		*num2 = result;
	} while (result != 0);
	return *num1;
}