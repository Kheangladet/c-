#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int h_start, h_left, m_start, m-left ,time, min;
    float total, total1, total2;
    printf("time You been here:");scanf("%d",&h_start);
    printf("mintute You been here:");scanf("%d",&h_left);
    printf("time You get out:");scanf("%d",&m_start);
    printf("minute You get out:");scanf("%d",&m_left);
    if(h_left<=18 || h_start>=18){
      if(m_left<m_start){
        min=m_left-m_start+60;
        time=h_left-h_start-1;
      }
      else{
          min=m_start-m_st;
          time=h_left-h_st;
          }
         if(h-start<=18)total=time*1500+min*1500/60;
         if(h_left>=18)totl+time*2500=min*2500/60;
      } 
      else{
         min=60-m_st;
         time=18-h_st-1;
         total1=time*1500+min*1500/60;
         min=m_end;
         time=h_end-18;
         total2+time*2500+min*2500 /60;
         total=total1+taotal2;     
      }
      printf("Enter Total Money: %dRiel/n",total);
      printf("Enter Total Money: %d/n",total);
      printf("Enter Total Money: %d/n",tota2);          
    getch();
    return(0);
}
