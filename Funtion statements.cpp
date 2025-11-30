/*
#include<stdio.h>
#include<conio.h>
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
*\
*/
/*
#include<stdio.h>
#include<conio.h>
int sum(int n){
    int s=0,p=1;
    for(int i=1;i<=n;i++){
       p=p*i;
       s=s+p;
    }
    return s;
}
int main(){
    int n,s1;
    printf("Input n: ");scanf("%d",&n);
    s1=sum(n);
    printf("Sum= %d\n",s1);
    getch();
    return 0;      
} 
\*
*\
*/
/*
#include<stdio.h>
#include<conio.h>
int sum(int n,int &x){
    int s=0,p=1;
    for(int i=1;i<=n;i++){
       p=p*i;
       s=s+p;
    }
    x=s;
}
int main(){
    int n,s1;
    printf("Input n: ");scanf("%d",&n);
    sum(n,s1);
    printf("Sum= %d\n",s1);
    getch();
    return 0;     
}
*\
*/
/*
