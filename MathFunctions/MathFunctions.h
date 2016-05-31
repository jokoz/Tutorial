#include<stdio.h>
#include<stdlib.h>
double mysqrt(double d)
{
	double x=1.0;
	do{
		x=(d/x+x)/2.0;
	}while(x*x-d>0.000001 || x*x-d<-0.000001);
	return x;
}
