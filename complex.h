#define COMPLEX_H_
struct complex{
	float re;
	float im;
};
struct complex sum(struct complex ,struct complex );
struct complex multiply(struct complex, struct complex );
struct complex *createComplexArray(int);
void printComplex(struct complex);
