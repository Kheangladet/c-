#include<stdio.h>
#include<conio.h>
//Loop Statement
int main(){
    int month,year,day;
    printf("Enter month(1-12): ");
    scanf("%d",&month);
    printf("Enter year: ");
    scanf("%d",&year);
    switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
         day=31;break;
    case 4: case 6: case 9: case 11:
         day=30;break; 
    case 2:if(year%4==0)day=29;
            else day=28;
            break;
    deafult:printf("Enter again:"); 
    }
     printf("The day in the month: %d\n",day);
    getch();
    return(0);
}
   
  
