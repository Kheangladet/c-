/*
//Finding grade
#include<stdio.h>
#include<string.h>
int main(){
    char grade; char str[20];
    printf("Enter your grade: ");scanf("%c",&grade);
    switch(grade){
			case'A':strcpy(str,"91<=score<=100");break;
        	case'B':strcpy(str,"81<=score<=90");break;
            case'C':strcpy(str,"71<=score<=80");break;
        	case'D':strcpy(str,"61<=score<=70");break;
        	case'E':strcpy(str,"51<=score<=60");break;
            case'F':strcpy(str,"0<=score<=49");break;
            deafult:strcpy(str,"Enter grade again:");
    }
    printf("Your score is: %s\n",str);  
   return 0;
} 
*/
//Finding day in a month
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
    return(0);
}   
