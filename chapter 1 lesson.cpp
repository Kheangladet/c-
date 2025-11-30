//Plus a+b
#include<stdio.h>
int main(){
    int a,b,s;
    printf("Input first number:");scanf("%d",&a);
    printf("Input second number:");scanf("%d",&b);
    s=a+b;
    printf("Sum= %d\n",s);
    return 0;
}
//Your own information
#include<stdio.h>
int main(){
    int id; char sex; char name[20]; float salary;
    printf("Input id: ");scanf("%d",&id);
    printf("Input sex: ");fflush(stdin);gets(name);
    printf("Input name: ");fflush(stdin);scanf("%c",&name);
    printf("Input salary: ");fflush(stdin);scanf("%f",&salary);
    printf("------Your CV:----------\n");
    printf("Id: %d\n",id);
    printf("Name: %s\n",name);
    printf("Sex: %c\n",sex);
    printf("salary: %.5f\n",salary);
    return 0;
}
//PI*r2
#include<stdio.h>
#include<conio.h>
int main(){
    const float PI=3.14;
    float r,s;
    printf("Enter raduis:"); scanf("%f",&r);
    s=PI*r*r;
    printf("Area= %1.f\n",s)
    getch();
    return(0);
}
//Finding the lenght
#include<stdio.h>
#include<math.h>
int main(){
    int ax,ay,bx,by,p,length;
    printf("Input length one:");scanf("%d",&ax);
    printf("Input length two:");scanf("%d",&ay);
    printf("Input length three :");scanf("%d",&bx);
    printf("Input length four :");scanf("%d",&by);
    p=(ax-bx)\2.0;
    length=sqrt(pow(ax-by),2)+pow(ay-by),2));
    printf("The Total of the length is:",length);
    return 0;
}
//Finding the size of triangle
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,p,s;
    printf("Input size1:");scanf("%f",&a);
    printf("Input size2:");scanf("%f",&b); 
    printf("Input size3:");scanf("%f",&c);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Area of the triangle is: %2.f\n",s);
    return 0;
}

