#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char grade; char str[20];
    printf("Enter your grade: ");scanf("%c",&grade);
    switch(grade){
                  case'A':printf("91<=score<=100");break;
                  case'B':printf("81<=score<=90");break;
                  case'C':printf("71<=score<=80");break;
                  case'D':printf("61<=score<=70");break;
                  case'E':printf("51<=score<=60");break;
                  case'F':printf("0<=score<=49");break;
                  deafult:printf("Enter grade again:");
                  }
getch();
}

                  
                  
                  
