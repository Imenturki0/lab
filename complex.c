#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "complex.h"


struct complex sum(struct complex c1,struct complex c2){
	struct complex sum;
	sum.re=c1.re+c2.re;
	sum.im=c1.im+c2.im;
	return sum;
}


struct complex multiply(struct complex c1, struct complex c2){
	struct complex mutiply;
	mutiply.re = c1.re*c2.re-c1.im*c2.im;
	mutiply.im = c1.im*c2.re + c1.re*c2.im;
	return multiply;
}

struct complex *createComplexArray(int n){
	struct complex *c  = (struct complex * )malloc(n*sizeof(struct complex));
	srand(time(NULL) );
	int i;
	for(i = 0;i < n; i++){
		c[i].im=rand%5;
		c[i].re=rand%8;
	}
}
void printComplex(struct complex c){
	printf("%.1f + %.1fi \n",c.re,c.im);
}

