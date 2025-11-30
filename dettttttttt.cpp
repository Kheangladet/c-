#include<stdio.h>
#include<conio.h>
#include<math.h>
//Loop Statement
int main(){
    int a,n,i;
    double s;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=1; 
    s=0;
    while(i<=n){
                s+=pow(a,i);
                i++;
                }
    printf("sum= %2.f",s);
   getch();
   return 0;
}
   
      
                
