#include<stdio.h>
#include<conio.h>
int main(){
    int id; char name[20]; char sex; float score;
    printf("=================Student Informations=====================\n");
    printf("    Input your ID:    ");scanf("%d",&id);fflush(stdin);
    printf("    Input your name:  ");gets(name);
    printf("    Input your sex:   ");scanf("%c",&sex);
    printf("    Input your score: ");scanf("%f",&score);
    printf("=================Student Informations===========\n");
    printf("________________________________________________\n");
    printf(" ID     Name     Sex    Score\n");
    printf("________________________________________________\n");
    printf(" %d   %s    %c     %f\n",id,name,sex,score);
    printf("________________________________________________\n");
    getch();
    return 0;
}   
