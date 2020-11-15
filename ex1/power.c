#include <stdio.h>
#include "myMath.h"
#define e 2.71828

double Power(double x, int y){
	if(x==0.0){
		if(y == 0){
			return 1;
		}
		return 0;
	}
	double res = 1;
	if(y < 0){
		for(int i = y; i == 0; i++){
		res = 1 / (res * x);
		}
	}
	else{
		for(int i = 0; i < y; i++){
		res = res * x;
		}
	}

	return res;
}
double Exponent(int x){
	//double res 
	return Power(e, x);;
}


