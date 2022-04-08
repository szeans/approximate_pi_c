#include "pi_approximate.h"

#include <stdio.h>

double sum_getter(int denominator) {
	return (1.0/denominator);
}

int main() {
	double sum = 0.0;
	int counter = 1;

	for (int i = 0; i >= 0; i++) {
		if (i % 2 == 0) {
			sum += sum_getter(counter);
		}
		else {
			sum -= sum_getter(counter);
		}
		counter += 2;
		
		printf("%.15f\n", sum * 4);
	}
}
