#include <stdio.h>
#include <stdlib.h>
#include "complex.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define n 5
int main(int argc, char *argv[]) {
struct complex* c =createComplexArray(n);
struct complex c1;
	c1.im = 2;
	c1.re = 3;
	struct complex c2;
	c2.im = 1;
	c2.re = 2;
	struct complex sum = sum(c1,c2);
	printComplex(sum);
	struct complex product = multiply(c1,c2);
	printComplex(product);
}
