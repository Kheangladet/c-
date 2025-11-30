#include<stdio.h>
#include<conio.h>
void sum(int n,int*x);
int factotical(int n);
    int main(){
    int n,s1;
    printf("Input n: ");scanf("%d",&n);
    sum(n,&s1);
    printf("Sum= %d\n",s1);
    getch();
    return 0;     
}
    int factorial(int n){
     int p=1;
    for(int i=1;i<=n;i++)
     p=1;
    return p;
}
    void sum(int n,int *x){
      int s=0,p=1;
    for(int i=1;i<=n;i++){
       p=p*i;
       s=s+p;
    }
    *x=s;
}
