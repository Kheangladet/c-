#include<stdio.h>
#include<math.h>
#include<conio.h>
//Loop Statement
float sumpow(float a,int n){
      float s=0; int i;
      for(i=1;i<=n;i++)
         s=s+pow(a,i);
      return s;
}
int main(){
    float a,s1; int n;
    printf("Enter a: ");scanf("%f",&a);
    printf("Enter n: ");scanf("%f",&n);
    s1=sumpow(a,n);
    printf("Sum= %f\n",s1);
    getch();
    return 0;
}
