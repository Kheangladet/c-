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

void sort(float a[],int n){
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
		if(a[i]>a[j]){
			float temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
}
int search(float a[],int n,float data){
	int index=-1;
	for(int i=0;i<n;i++)
		if(a[i]==data){
			index=i;
			break;	
		}
		return index;
}
int count(float a[],int n){
	int c=0;
	for(int i=0;i<n;i++)
		if(a[i]<50)c++;
	return c;
}
int main(){
	float x[120],data1,data2; int n;
	int pos;
	printf("Number of elememts:");scanf("%d",&n);
	printf("Input all elemnts:\n");
	inputarr1(x,n);
	printf("Display all elmentemts:\n");
	outputarr1(x,n);
	printf("Input data1:");scanf("%f",&data1);
	pos=search(x,n,data1);
	if(pos==-1)printf("Search not found:\n");
	else{
		printf("Input data2:");scanf("%f",&data2);
		x[pos]=data2;
	}
	printf("After updating:\n");
	outputarr1(x,n);
	sort(x,n);
	printf("After sorting:\n");
	outputarr1(x,n);
	int countabove50=count(x,n);
	printf("Number of elemnnts less than 50:%d\n",countabove50);
	return 0;
}
