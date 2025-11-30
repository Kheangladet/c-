#include<stdio.h>
int main(){
//Loop Statement
    int n,i,j;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
       for(j=2;j<=i;j++)
          if(i%j!=0)continue;
          else break;
       if(i==j)printf("%d\t",i);
    }   
    return(0);
}
