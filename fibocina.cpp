#include<stdio.h>
#include<conio.h>
//Loop Statement
int main(){
    int n,i,f,f1,f2;
    printf("Enter n: ");scanf("%d",&n);
    f=1; f1=1; f2=1;
    for(i=3;i<=n;i++){
       f2=f1;
       f1=f;
       f=f1+f2;
    }
    printf("Fibonacci= %d\n",f);
    getch();
    return 0;
}
