#include<stdio.h>
#include<math.h>
#include<conio.h>
//Loop Statement
int main(){
    int a,n,s,x,i;
    printf("Input n:");scanf("%d",&n);
    for(i=1;i<=n;i++){
       s=0; a=i;               
       while(a>0){
          x=a%10;
          s=s+pow(x,3);
          a=a/10;
       }
       if(i==s){
        printf("%d\t",i);
        }   
    }
    getch();
    return 0;
}
