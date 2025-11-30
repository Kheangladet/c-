#include<stdio.h>
#include<conio.h>
int x=10;
int sample(int a){
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
    getch();
    return 0;
}    
