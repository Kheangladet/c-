#include<stdio.h>
#include<conio.h>
int main(){
    int salse;
    float commission;
    printf("Enter Your Salse: ");
    scanf("%d",salse);
    if(salse>10000){
        commission=salse*0.05+100;
    }else{
        commission=salse*0.05;
    }
    printf("Enter the comission: %.2f\n",commission);
    return(0);
}
    
