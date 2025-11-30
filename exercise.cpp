#include<stdio.h>
#include<conio.h>
//Loop Satatement
int main(){
    int h_start, h_left, m_start, m_left, time, min;
    float total;    char vehicle;
    printf("Type of vehicle C for Car, B for bus, T for Truck:  "); 
    scanf("%c",&vehicle);
    printf("Enter Hour vehicle entered lot (0 - 24)? ");
    scanf("%d",&h_start);
    printf("Enter Minute vehicle entered lot (0 - 60)? ");
    scanf("%d",&m_start);
    printf("Enter Hour vehicle left lot (0 - 24)? ");
    scanf("%d",&h_left);
    printf("Enter minute vehicle left lot(0 - 50)? ");
    scanf("%d",&m_left);
    if(m_left<m_start){
      min=m_left-m_start;
      time=h_left-h_start;
      }
    switch(vehicle){
     case 'C': if (time <= 180) total = 0;  // Free for 3 hours (180 minutes)
          else total = ((time - 180) / 60.0) * 1.50;  // $1.50 per hour after 3 hours
          break;
     case 'T': if (time <= 120) total = 0;  // Free for 2 hours (120 minutes)
          else total = 2.0 + ((time - 120) / 60.0) * 2.30;  // $2.30 per hour after 2 hours, with a $2 base
          break;
     case 'B': if (time <= 60) total = 0;   // Free for 1 hour (60 minutes)
          else total = 1.0 + ((time - 60) / 60.0) * 3.70;   // $3.70 per hour after 1 hour, with a $1 base
          break;
       default: printf("Enter again\n");
       }
       printf("Total Money is: %$.2f\n",total);
       getch();
}                               
