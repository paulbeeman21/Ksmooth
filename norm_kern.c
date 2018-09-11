#include <R.h>
#include <Rmath.h>

void norm_kern(int *m, int *n, double *b, double *g, double *x, double *y) 

 {
	
	int i,j;
	double a;

	for(i=0; i< *m; i++){
		a=0.0;	
		
	
	for(j=0; j< *n; j++){
         	
		a += dnorm((g[i] - x[j]) / *b, 0, 1, 0) / (*b * *n);
	 }
	y[i] = a;
	}
}