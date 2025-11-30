#include<stdio.h>
#include<conio.h>
//Loop Statement
int main(){
    int n,i;
    printf("Enter n: ");scanf("%d",&n);
    for(i=1;i<=n;i++){
       if(n%i!=0)continue;
    printf("%d\t",i);
    }
    getch();
    return 0;
}
