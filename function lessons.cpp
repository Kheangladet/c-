#include<stdio.h>
#include<conio.h>
//Loop Statement
int factorial(int n){
     int p=1;
    for(int i=1;i<=n;i++)
    p=p*i;
    return p;
} 
int main(){
    int n,s1;
    printf("Input n: ");scanf("%d",&n);
    s1=factorial(n);
    printf("Factorial: %d\n",s1);
    getch();
    return 0;
}
    
    
