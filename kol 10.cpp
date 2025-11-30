/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
//Loop Statement
int binary(int n,int *x){
    int s=0,i=0;
    while(n>0){
         s=s+(n%10)*pow(2,i);
         i++;
         n=n/10;
         }
     *x=s;
}
int main(){
    int n,s1;
    printf("Input n:");scanf("%d",&n);
    binary(n,&s1);
    printf("Result= %d\n",s1);
    getch();
    return 0;
}
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
//Loop Statement
int binary(int n){
    int s=0;
    int i=0;
    while(n>0){
        s=s+(n%10)*pow(2,i);
        i++;
        n=n/10;
        }
     return s;
}
int main(){
    int n,s1;
    printf("Input n:");scanf("%d",&n);
    s1=binary(n);
    printf("Result= %d\n",s1);
    getch();
    return 0;
}
