/*
//Finding grade
#include<stdio.h>
//Loop Satatement
int main(){
    char grade; 
    printf("Input grade: ");scanf("%s",&grade);
    switch(grade){
        case 'A':printf("Excellent");break;
        case 'B':printf("Very good");break;
        case 'C':printf("Good");break;
        case 'D':printf("Fair");break;
        case 'F':printf("Failed");break; 
        deafult:printf("Invialed grade");
        printf("Your grade %2.s\n",grade);
     }  
    return 0;
}
*/
/*
//pay tax using if else
#include<stdio.h>
#include<string.h>
//Loop Satatement
int main(){
    int age; char gender[10];
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your gender(Males/Females/Other): ");
    scanf("%s",&gender);
    if(strcmp(gender, "Males")==0&&age>20){
       printf("Pay tax.\n");
    }
    else if(strcmp(gender, "Males")==0&&age>=18&&age<=35){
       printf("Pay tax.\n");
    }
    else{
        printf("Other no need to pay tax.\n"); 
    }       
    return 0;
}
*/
/*
//calculate price of paper
#include<stdio.h>
#include<string.h>
//Loop Satatement
int main(){
    int paper; float price;
    printf("The number of photocopies: ");scanf("%d",&paper);
    if(paper>=30){
      price=paper*0.05;            
      printf("Total price= $%2.f\n",price);
    }
    else if(paper>=30&&paper<=100){
      price=paper*0.025;
      printf("Total price=  $%2.f\n",price);
    }
    else{
      price=paper*0.01;
      printf("Total price= $%2.f\n",price);
    }
    return 0;
}
*/
/*
//geal 10
#include<stdio.h>
//Loop Satatement
int main(){
    int n,i,sum,odd;
    printf("Enter n: ");scanf("%d",&n);
    sum=0; odd=1;
    for(i=1;i<=n;i++){
      sum+=odd;
      printf("%d",odd);
      if(i<n){
        printf("+");
    }
      odd+=2;
    }
    printf("= %d\n",sum);
    printf("%d^2 =%d\n",n,sum);  
    return(0);
}
*/
/*
//Fimding vowels or consonant
#include <stdio.h>

int main() {
    char character;
    
    printf("Input character: ");
    scanf(" %c", &character);  // Space before %c to avoid newline issues

    switch(character) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':  // Added lowercase vowels
            printf("Vowel\n");
            break;
        
        case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K':
        case 'L': case 'M': case 'N': case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'V': case 'W': case 'X': case 'Y': case 'Z': 
        case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k':
        case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't':
        case 'v': case 'w': case 'x': case 'y': case 'z':  // Added lowercase consonants
            printf("Consonant\n");
            break;

        default:
            printf("Invalid\n");
   }
    return 0;
}
*/
//Calculate the price
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char Product1[50],Product2[50]; 
    int Amount1,Amount2;
    float total,total1,total2;
    float Price1,Price2;
    printf("Enter the name of the first product: ");   
    scanf("%s",&Product1);
    printf("Enter the amount of the first product: ");
    scanf("%d",&Amount1);
    printf("Enter the price per unit($): ");
    scanf("%f",&Price1);
    printf("Enter the name of the second product:");
    scanf("%s",&Product2);
    printf("Enter the amount of the second product: ");
    scanf("%d",&Amount2);
    printf("Enter the price per unit($): ");
    scanf("%f",&Price2);
    total=Price1*Amount1;
    total2=Price2*Amount2;
    total=total1+total2;
    printf("\n=======================================================================\n");
    printf("No  |Products|  |Price per unit($)|  |Amount| |Price($)|\n");
    printf("--------------------------------------------------------------------------\n");
    printf("1   |%-8s|      |%-17.2f|        |%-6d|  |%-14.2f|\n",Product1,Price1,Amount1); 
    printf("2   |%-8s|      |%-17.2f|        |%-6d|  |%-14.2f|\n",Product2,Price2,Amount2);
    printf("--------------------------------------------------------------------------\n");
    printf("|Total: $%-33.2f|\n",total);
    printf("===========================================================================\n");
    getch();
    return 0;
}
