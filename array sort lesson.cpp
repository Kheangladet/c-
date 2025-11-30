/*
#include<stdio.h>
void inputarr1(float a[],int n){
	for(int i=0;i<n;i++){
		printf("Element %d:",(i+1));
		scanf("%f",&a[i]);
	}
}
void outputarr1(float a[],int n){
	for(int i=0;i<n;i++)
	   printf("%.2f\t",a[i]);
}
void sort(float a[],int n){
	float temp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	   if(a[i]>a[j]){
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;
	   }	
}
int main(){
	float x[100]; int n;
	printf("Number of element:");
	scanf("%d",&n);
	inputarr1(x,n);
	printf("Before sorting\n");
	outputarr1(x,n);
	sort(x,n);
	printf("\nAfter sorting\n");
	outputarr1(x,n);
	return 0;	
}	
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void inputarr1(int a[],int n){
	srand(time(NULL));
	for(int i=0;i<n;i++)
		a[i]=rand()%500;
}
void outputarr1(int a[],int n){
	for(int i=0;i<n;i++)
	   printf("%d\t",a[i]);
}
void sort(int a[],int n){
	int temp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	   if(a[i]>a[j]){
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;
	   }	
}
int main(){
	int x[100]; int n;
	printf("Number of element:");
	scanf("%d",&n);
	inputarr1(x,n);
	printf("Before sorting\n");
	outputarr1(x,n);
	sort(x,n);
	printf("\nAfter sorting\n");
	outputarr1(x,n);
	return 0;	
}	

