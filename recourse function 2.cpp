/*
#include<stdio.h>
#include<math.h>
float sum(float a,int n){
	if(n==1)return a;
	else return sum(a,n-1)+pow(a,n);
}
int main(){
	float a,s1; int n;
	printf("Input a:");
	scanf("%f",&a);
	printf("Imnput n:");
	scanf("%d",&n);
	s1=sum(a,n);
	printf("The results is: %f\n",s1);
	return 0;	
}
*/
#include<stdio.h>
#include<math.h>
void sum(float a,int n,float *x){
	if(n==1)*x=a;
	else {
		sum(a,n-1,x);
		*x+=pow(a,n);
	}
	
}
int main(){
	float a,s1; int n;
	printf("Input a:");
	scanf("%f",&a);
	printf("Imnput n:");
	scanf("%d",&n);
    sum(a,n,&s1);
	printf("The results is: %f\n",s1);
	return 0;	
}
