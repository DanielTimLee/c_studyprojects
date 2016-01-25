#include <stdio.h>
#include "../library/lib.h"

int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d", Lcm(&a, &b));
}