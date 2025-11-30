#include<stdio.h>
#include<conio.h>
#include<math.h>
//Loops Statement
int main(){
    int n; int i; int s=0;
    printf("Input n:");scanf("%d",&n);
    for(i=0;n>0;i++){
       s=s+(n%2)*pow(10,i);
       n=n/2;
    }
    printf("sum= %d\n",s);
    getch();
    return 0;
}
