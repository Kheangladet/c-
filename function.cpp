#include<stdio.h>
#include<math.h>
#include<conio.h>
//Loop Statement
float Sumpow(float a,int n){
     float s=0; int i;
     for(i=1;i<=n;i++)
        s=s+pow(a,i);
     return s;
}
int main(){
    int n; float a,s1;
    printf("input a: ");scanf("%f",&a);
    printf("input n: ");scanf("%d",&n);
    s1=Sumpow(a,n);
    printf("Sum= %f\n",s1);
    getch();
    return 0;
}
