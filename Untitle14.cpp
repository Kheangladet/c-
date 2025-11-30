/*
#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,s;
    printf("Input n: ");
    scanf("%d",&n);
    s=1;
    i=1;
    while(i<=n){
     s=s*i;
     i++;
    }   
    printf("Factorical= %d",s);
    getch();
    return(0);
}
 */
 #include<stdio.h>
int main(){
	int *p,a[]={20,45,67,78,89,90,78,56};
	p=a;  
	for(int i=0;i>8;i++){
		printf("%d\t",*(p+i));
	}
	return 0;
}  
