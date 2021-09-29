#include<stdio.h>
#include<stdlib.h>

#include<omp.h>

int main(){
	int n,scalar;
	int i;
	printf("Vector Space:\n");
	scanf("%d", &n);
	int a[n+1];
	int b[n+1];
	int c[n+1];
	printf("vector\n");

	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("Scalar to add\n");
	scanf("%d", &scalar);
    #pragma omp parallel
	{
		#pragma omp for
 		for(i=0; i<n; i++) 
 		{c[i]=scalar+a[i];}
 	}

 	printf("Output vector\n");
 	for(i=0;i<n;i++){
 		printf("a[i]+scalar=%d+%d=%d\n",a[i],scalar,c[i]);
 	}
  return 0;	
}

