#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
       for(j=2;j<=i;j++){
          if(i%j|==0)continue;
          else break;
          if(i==j)printf("%d\t",i);
          }
    getch();
    return(0);
}
