/*
#include<stdio.h>
int main(){
	int a[]={7,13,10,9,16,11,3,2,17};
	int b[]={3,8,3,5,6,2,9,6,9};
	int c[10], d[10];
	for (int i=0;i<9;i++){
		c[i]=a[i]+b[i];
		d[i]=a[i]+7;
	}
	for(int i=0;i<9;i++)
		printf("%d\t ",c[i]);
	printf("\n");
	for(int i=0;i<9;i++)
		printf("%d\t",d[i]);
	return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int sum(int n){
	int s=0;
	for(int i=2; i<=n; i++)
		s=s + pow(i+1,i);
	return s;
}
int main(){
	int n,s1;
	printf("Input n:");
	scanf("%d",&n);
	s1=sum(n);
	printf("Output n: %d ",s1);
	return 0;
}
*/
#include<stdio.h>
void inputarr1(float a[],int n,int m){
	for(int i=0;i<n;i++)
		printf("Salary: a[%d]",a[i]);	
}
void outputarr2(float a[],int n,int m){
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf(" \n ");
}
void sort(float a[],int n, int m){
	for(int i=0;i<n;i++)
	for(int j=0;i<m;j++)
		if(a[i]>a[j]){
			float temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
}
int main(){
	float a[1000],x,n,m;
	printf("Input Teacher's salary: ");scanf("%f",&n);
	inputarr1(x,n);
	outputarr1("Output Teacher's salaary %f ",m);
	outputarr1(x,m);
	printf("After sorting salary");
	inputarr1(x,n);
	sort(x,n);
	return 0;
}
