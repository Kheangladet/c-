/*
//(a,n) funtion statemnet
#include<stdio.h>
#include<math.h>
float sumpow(float a,int n){
    float s=0; int i;
    for(int i=1;i<=n;i++)
       s=s+pow(a,i);
    return s;
}
int main(){
    int n; float a,s1;
    printf("Input a: ");scanf("%f",&a);
    printf("Input n: ");scanf("%d",&n);
    s1=sumpow(a,n);
    printf("Sumpow= %2.f\n",s1);
    return 0;
}   
*/
/*
//Funtion statment    
#include<stdio.h>
void sum(int n,int*x);
int factotical(int n);
    int main(){
    int n,s1;
    printf("Input n: ");scanf("%d",&n);
    sum(n,&s1);
    printf("Sum= %d\n",s1);
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
*/
/*
//1+2+3+..+(n+1) funtion
#include<stdio.h>
#include<math.h>
//Loop Statement
int sum(int n){
    int s=0; int i;
    for(i=1;i<=n;i++){
      s=s+pow(i,i+1);
    }
    return s;
}
int main(){
    int n,s1;
    printf("Input n:");scanf("%d",&n);
    s1=sum(n);   
    printf("sum= %d\n",s1);
    return 0;
}
*/
/*
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
    return 0;
}
*/
/*
//deafult paramenter
#include<stdio.h>
#include<conio.h>
int sum(int a,int b,int c){
    return (a+b+c);
}
int main(){
    int sum(int a=4, int b=4, int c=9);
    printf("Sum= %d\n",sum());
    printf("Sum= %d\n",sum(20));
    printf("Sum= %d\n",sum(14,30));
    printf("Sum= %d\n",sum(12,89,90));
    return 0;
}
*/
//global variable
#include<stdio.h>
#include<conio.h>
int x=10;
int sample(int a){
    int x=50;
    x=x+a;
    printf("x1= %d\n",x);
}
int main(){
    x=x+3;
    printf("x2= %d\n",x);
    sample(5);
    x=x+7;
    printf("x3= %d\n",x);
    sample(20);
    x=x+2;
    printf("x4= %d\n",x);
    return 0;
    return 0;
}    
    
    
    
