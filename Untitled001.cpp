
#include<stdio.h>
int main(){
	int i, n, A[20];
	printf("Inpur n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("A[%d] = ",i);
		scanf("%d", &A[i]);
	}
	for(i=0;i<n;i++){
	   printf("A[%d]= %d\n",i,A[i]);	
	}
	return 0;
}

