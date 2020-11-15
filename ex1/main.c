#include <stdio.h>
#include "myMath.h"

int main(){
	printf("Please enter a real number:\n");
	double x;
	scanf("%lf",&x);
	double res2 = Power(x,3);
	double res1 = Exponent((int) x);
 	float res3 = add(res1, res2);
 	float res4 = sub(res3, 2);
	printf("\nf(x) = e^x + x^3 - 2\nwith x = %f, equals = %0.4f\n\n",x,res4);
	res1 = mul(x, 3);
 	res2 = Power(x, 2);
 	res3 = mul(res2, 2);
 	res4 = add(res1, res3);
	printf("f(x) = 3x + 2x^2\nwith x = %f, equals = %0.4f\n\n",x,res4);
	res1 = Power(x, 3);
 	res2 = mul(res1, 4);
 	res3 = div(res2, 5);
 	res4 = mul(x, 2);
 	float res5 = sub(res3, res4);
	printf("f(x) = (4x^3)/5 - 2x\nwith x = %f, equals = %0.4f\n\n",x,res5);
	return 0;
}
