#include<iostream>
using namespace std;
int main(){
	int a,b,r;
	char o;
	cout<<"Enter first number: ";
	cin>>a;

	cout<<"Enter second number: ";
	cin>>b;
	
	cout<<"Enter operand: ";
	cin>>o;
	
	if (o == '+'){
	r=a+b;
	cout<<r<<" is the result.";
	}
	
	else if (o == '-') {
	r=a-b;
	cout<<r<<" is the result.";
	}
	
	else if (o == '/'){
	r=a/b;
	cout<<r<<" is the result.";
	}
	else if (o == '*'){
	r=a*b;
	cout<<r<<" is the result.";
	}
	
	else if (o=='%'){
		r=a%b;
		cout<<r<<" is the result.";
		}
		
		
		
		
}
		
		

