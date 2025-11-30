/*
#include<stdio.h>
int main(){
	int a[6]={6, 10, 11, 45, 80, 82};
	for(int i=0;i<6;i++){
		printf("Element %d:",(i+1));
		scanf("%d",&a[i]);
	}
	// Algorithim
	bool isVaild= true;
	for (int i = 1; i < 6 ; i++ ) {
		if (a[i] <= a[ i- 1]){
			isVaild= false;
			break;
		}
	}
	
	// Output
	printf("%d",isVaild);
}
*/
#include<stdio.h>
#include<stdbool.h>
void inputarr( int a[],int n){
	for(int i=0;i<6;i++){
		printf("Element %d:",(i+1));
		scanf("%d",&a[i]);
	}
}
int isvalidarr(int a[],int n){
	int isvalid;
	// Algorithim
	bool isvaild= true;
	for (int i = 1; i < 6 ; i++ ) {
		if (a[i] <= a[ i- 1]){
			isvaild= false;
			break;
		}
	}
	return isvalid;
}
int main(){
	int a[6];
	int n=6;
	int isvalid;
	inputarr(a,n);
	isvalidarr(a,n);
	// Output
	printf("%d",isvalid);
	return 0;
}
