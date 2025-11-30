#include<stdio.h>
#include<conio.h>
int swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10; int y=20;
    printf("Before swapping:\n");
    printf("x= %d\tand y=%d\n",x,y);
    swap(x,y);
    printf("After swapping:\n");
    printf("x= %d\tand y= %d\n",x,y);
    getch();
    return 0;
}
