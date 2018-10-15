#include <stdio.h>
#include <float.h> 
#include <math.h>

float main(){
	float a;
	float b;
	float res;
	
	a = tis_float_interval((float) 1, (float) 100);
	b = FLT_MIN;
	
	res = a/b;
	
	return res;


}
