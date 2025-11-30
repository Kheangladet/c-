#include<stdio.h>
#include<string.h>
struct product{
	int code;
	char name[20];
	int price;
	int qty;	
};
void inputALL(product p[] , int n){
	for(int i=0; i<n; i++) {
		//printf("Product %d: ",(i+1));
		printf("Input code: ");scanf("%d",&p[i].code);
		printf("Input name: ");fflush(stdin);gets(p[i].name);
		printf("Input price: ");scanf("%d",&p[i].price);	
		printf("Input quantity: ");scanf("%d",&p[i].qty);
	}
}
float totalPrice(product p){
	return p.price*p.qty;
}
void outputAll(product p[], int n){
	for(int i=0; i<n;  i++) 
		printf("%d\t%s\t%d\t%.2f$n\n",p[i].code, p[i].name, p[i].price, p[i].qty, totalPrice(p[i]));
}
float total(product a[],int n){
	float s=0;
	for(int i=0; i<n; i++) 
		s=s+totalPrice(a[i]);
	return s;
}
product maxPrice(product a[], int n){
	product p;
	p=a[0];
	for(int i=0;i<n;i++)
		if(p.price<a[i].price)p=a[i];
	return p;
}
void sort(product a[],int n){
	product p;
	int i,j;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
		if(a[i].price>a[j].price){
			p=a[i];
			a[i]=a[j];
			a[j]=p;
		}
}
int searchCode(product a[],int n,int x){
	int index=-1;
	for(int i=0;i<n;i++)
		if(a[i].code==x){
			index=i;
		break;
		}
	return index;
}
int main(){
	float s; int c,pos,pos1,p; char nameSearch[20];
	//product x,a[5]=((1,"Coca",7,18),(2,"ABC",27,10),
		//(3,"Vital",4,20),(4,"Angkor",13,5),(5,"M150",9,8));
	product x,a[100]; int n,i;
	printf("Number of Product: ");scanf("%d",&n);
	inputALL(a,n);
	printf("Code\tName\tPrice\tQuantity\tToatalPrice:\n");
	//for(int i=0;i<5;i++)
		outputAll(a,n);
	s=total(a,n);
	printf("Total =%2.f\n",s);
	x=maxPrice(a,n);
	printf("Max Price Of Product is:\n");
	outputAll(&x,1);
	printf("Code to search: ");scanf("%d",&c);
	pos=searchCode(a,5,c);
	if(pos==-1)printf("Searach not found");
	else{
		printf("Product to search is:\n");
		outputAll(&a[pos],1);
	}
    //printf("Name to search");fflush(stdin);gets(nameSearch);
    /*pos1=searchName(a,5,nameSearch);
    if(pos1==-1)printf("Search not found:\n");
    else{
    	printf("Price Product to update: ");scanf("%d"&p);
    	a[pos1].price=p;
	}
	printf("After to updated:\n");
	for(int i=0;i<5;i++)
		output(a[i]);
	*/
	sort(a,n);
	printf("After sorting:\n");
	outputAll(a,n);
	return 0;
}
