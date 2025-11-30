#include<stdio.h>
#include<string.h>
struct coffe{
	char name[20];
	int price;
	int qty;
}
void inputall(coffe c[],int n){
	for(int i=0;i<n;i++){
		printf("Input name");fflush(stdin);gets(c[i].name);
		printf("Input price");scanf("%d",c[i].price);
		printf("Input quantity");scanf("%d",c[i].qty);
	}
}
float totalprice(coffe c){
	return c.price*c.qty;
}
void outputall(coffe c[],int n){
	for(int i=0;i<n;i++)
	printf("%c\t%d\t%d"\t%.2f$\n",c[i].name, c[i].price, c[i].qty, totalprice(c[i]);
}
float totalprice(coffe c[],int n){
	float s=0;
	for(int i=0;i<n;i++){
		s=s+totalprice(c[i]);
	}
	return s;
}
coffe maxprice()