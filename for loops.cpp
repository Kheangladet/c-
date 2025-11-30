//Odd number 
#include<stdio.h>
#include<conio.h>
//Loop Satatement
int main(){
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       if(i%2==0)continue;
       printf("%d\t",i);
    }
    return 0;
}
//Finding total money
#include<stdio.h>
//Loop Statement
int main(){
    int n,i;
    float total;
    printf("Enter n: ");
    scanf("%d",&n);
    total=15000;
    for(i=1;i<=n;i++){
       total=total*(1+0.065)+250;
       }             
    printf("Total money: %2.f\n",total);
    return 0;               
} 
//Finding the strongest number 
#include<stdio.h>
//Loop Statement
int main(){
    float x,max; int n,i;
    printf("Enter n:");scanf("%d",&n);
    printf("Enter elements: ");scanf("%f",&x);
    max=x;
    for(i=0;i<=n;i++){
       printf("Enter number: %d",i);scanf("%f",&x);
       if(max<x)max=x;
    }
    printf("Max: %2.f\n",max);
    return 0;
}
//Findong average
#include<stdio.h>
//Loop Statement
int main(){
    int i,s,a,average;
    printf("Input a: ");scanf("%d",&a);
    s=0;
    for(i=1;i<=7;i++){
       s=s+a;
       }
    average=s+a%7;
    printf("Average=: %d\n",average);
    return 0;
}
//
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
