#include<iostream>
#include<iomanip>
using namespace std;

int  main(){
	int age;	
	char name[20],city[30];
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your city name: ";
	cin>>city;
	cout<<"Enter your age: ";
	cin>>age;	
	
	cout<<"\n\n\t\t\tYour name is "<<name<<endl;
	cout<<"\t\t\tYour city name is "<<city<<endl;
	cout<<"\t\t\tYour age is "<<age<<endl;
		
	if (age < 8){
		cout<<"You are a kid..";
				}
	else if (age<18){
		cout<<"You are not a kid...";
			}						
	else{
		cout<<"You are adult..";
		
	}
	
	cout<<"\n\t\t\tThank you for using";
	
}
