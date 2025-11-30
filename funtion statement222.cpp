/*
\*
#include<stdio.h>
#include<conio.h>
int sum(int n,int *x){
    int s=0,p=1;
    for(int i=1;i<=n;i++){
       p=p*i;
       s=s+p;
    }
    *x=s;
}
int main(){
    int n,s1;
    printf("Input n: ");scanf("%d",&n);
    sum(n,&s1);
    printf("Sum= %d\n",s1);
    getch();
    return 0;     
}
/*
#include<stdio.h>
#include<conio.h>
int factotical(int n){
    int p=1;
    for(int i=1;i<=n;i++)
     p=1;
    return p;
}
int sum(int n,int *x){
    int s=0,p=1;
    for(int i=1;i<=n;i++){
       p=p*i;
       s=s+p;
    }
    *x=s;
}
int main(){
    int n,s1;
    printf("Input n: ");scanf("%d",&n);
    sum(n,&s1);
    printf("Sum= %d\n",s1);
    getch();
    return 0;     
}


