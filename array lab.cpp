
#include<stdio.h>
void inputarr1(float a[],int n){
	for(int i=0;i<n;i++){
		printf("Element %d:",(i+1));
		scanf("%f",&a[i]);
	}
}
void outputarr1(float a[],int n){
	for(int i=0;i<n;i++)
	   printf("%2.f\t",a[i]);
}
float sum(float a[],int n){
	float s=0;
	for(int i=0;i<n;i++)
	   s=s+a[i];
	   return s;
}
float max(float a[],int n){
	float m=a[0];
	for(int i=1;i<n;i++)
	   if(m<a[i])m=a[i];
	   return m;
}
int main(){
	float x[100],s1,m1;
	int n;
	printf("Input n:");
	scanf("%d",&n);
	inputarr1(x,n);
	printf("\tyourarray\n");
	outputarr1(x,n);
	s1=sum(x,n);
	printf("Toatal=%.2f\n",s1);
	m1=max(x,n);
	printf("Max=%2.f",m1);
	return 0;	
}	

