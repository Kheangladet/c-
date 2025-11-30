#include<stdio.h>
#include<conio.h>
//Loop Satatement
int main(){
    int n,i,s;
    char ch;
    do{
         printf("Enter n: ");
         scanf("%d",&n);
         s=0;
         i=1;
         do{
             s+=i;//s=s+i;
             ++i;
         }while(i<=n);
         printf("Sum: %d\n",s);
         printf("press y to continue: ");
         fflush(stdin);scanf("%c",&ch);
    }while(ch=='y');
    while(0);
    getch();
    return(0);
}
