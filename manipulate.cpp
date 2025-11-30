#include<stdio.h>
#include<conio.h>
void table(int);
int main(){
    int num;
    printf("Enter positive number:\t");
    scanf("%d",&num);
    printf("Multiplication Table for %d is:\n",num);
    table(num);
    getch();
    return 0;
}
void table(int num){
    int count;
    for(count=1;count<=10;count++){
       printf("%d x %d = %d\n",num,count,num*count);
       }  
}
