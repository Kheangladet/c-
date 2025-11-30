/*
#include<stdio.h>
int sum(int n){
	if(n==1)return 1;
	else return sum(n-1)+n;
}
int main(){
	int n,s1;
	printf("Input n:");
	scanf("%d",&n);
	s1=sum(n);
	printf("sum= %d\n",s1);
	return 0;
}
*/
#include<stdio.h>
void sum(int n,int &x){
	if(n==1)x=1;
	else{
	 sum(n-1,x);
	 x=x+n;
    } 
}
int main(){
	int n,s1;
	printf("Input n:");
	scanf("%d",&n);
    sum(n,s1);
	printf("sum= %d\n",s1);
	return 0;
}
