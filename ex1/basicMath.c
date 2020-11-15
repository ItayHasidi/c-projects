#include <stdio.h>
#include "myMath.h"

float add(float x, float y){
	float result = 0;
	result = x+y;
	return result;
}

float sub(float x, float y){
	float result = 0;
	result = x-y;
	return result;
}

double mul(float x, float y){
	float result = x*y;
	return result;
}

double div(float x, float y){
	double res = x/y;
	return res;
        
}
