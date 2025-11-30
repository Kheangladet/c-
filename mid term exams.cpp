/*
#include<stdio.h>
#include<conio.h>
int sum(int n){
	int i,s=0;
	for(i=2;i<=n;i++)
	  s+=i;
	  return s;
}
int main(){
	int n,s1;
	printf("Input n:");
	scanf("%d",&n);
	s1=sum(n);
	printf("Sum= %d\n",s1);
	getch();
	return 0;
}
*/
#include<stdio.h>
#include<conio.h>
int main(){
	int n=0;
	while(1){
		n++;
		if(n%2==0)continue;
		printf("%5d",n);
		if(n>20)break;
    }
	getch();
	return 0;
}
