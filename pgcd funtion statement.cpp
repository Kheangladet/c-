#include<stdio.h>
#include<conio.h>
int pgcd(int a,int b){
    while(a!=b){
       if(a>b)a=a-b;
       else b=b-a;
    }
    return a;
}
int main(){
    int x,y,p;
    printf("Input x:");scanf("%d",&x);
    printf("Input y:");scanf("%d",&y);
    p=pgcd(x,y);
    printf("PGCD= %d\n",p);
    getch();
    return 0;
}       
   
