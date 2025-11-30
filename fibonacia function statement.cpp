#include<stdio.h>
#include<conio.h>
int fibonacia(int n){
    int f=1; int f1=1; int f2=1;
    for(int i=3;i<=n;i++){
            f2=f1;
            f1=f;
            f=f1+f2;
     }
     return f;
}
int main(){
    int n,f;
    printf("input n: ");scanf("%d\n",&n);
    f=fibonacia(n);
    printf("Fibonacia(%d)= %d\n",n,f);
    getch();
    return 0;
}       
