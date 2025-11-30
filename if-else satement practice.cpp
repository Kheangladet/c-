#include<iostream>
using namespace std;
int main(){
	int age = 5;
	if(age>=18){
		cout << "Your an adult:" << age << endl;
	}
	else if(age<=12){
		cout << "Your a teneger:" << age << endl;	
	}
	else{
		cout << "Your a baby:" << age << endl;
	}
	return 0;
}