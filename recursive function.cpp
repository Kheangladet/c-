#include<stdio.h>
void reserve(int n, int &x){
	static int x=0;
	if(n==0)x=s;
	else{
		s=s*10+(n%10);
		reserve(n/10,x);
	}
}
int main(){
	int n,s1;
	printf("Input n:");
	scanf("%d",&n);
	s1=reserve(n);
	printf("Reserves %d\n",s1);
	return 0;
}
