#include<stdio.h>
#include<conio.h>
//Loop Statement
int main(){
    int n,i,s;
    printf("Enter n: ");scanf("%d",&n);
    for(i=1;i<=n;i++){
       s+=i*(i+1)*(i+2);
     printf("Sum= %.2d\t",s);  
    }
    getch();
    return 0;
}
