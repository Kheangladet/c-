/*
#include<stdio.h>
#include<math.h>
//Loop Statement
int main(){
    int n,i,s;
    printf("Enter n: ");
    scanf("%d", &n);
    s=0;
    i=0;
    while(n>0){
         s=s+(n%2)*pow(10,i);
         i++;
         n=n/2;
         }
    printf("Sum: %d",s);      
    return 0;               
} 
*/
/*
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
*/
/*
#include<stdio.h>
//Loop Statement
int main(){
    int n,i,s;
    printf("Enter n: ");
    scanf("%d",n);
    fflush(stdin);
    s=0;
    i=1;
    while(i<=n){
         s=s+i;
         i++;
    }
    printf("sum: %d\n",s); 
    return 0;
} 
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,s;
    printf("Input n: ");
    scanf("%d",&n);
    s=1;
    i=1;
    while(i<=n){
     s=s*i;
     i++;
    }   
    printf("Factorical= %d",s);
    getch();
    return(0);
}
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,p;
    printf("Enter First number: ");scanf("%d",&a);
    printf("Enter Second number: ");scanf("%d",&b);
    while(a!=b){
                if(a<b)a=a-b;
                else b=b-a;
                }
    p=a;
    printf("PGCD= %d",p);
    getch();
}

