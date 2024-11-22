#include<iostream>
using namespace std;

int main(){
	
	int a,b,r,op;
	
	cout<<"Enter First value: ";
	cin>>a;
	cout<<"Enter Second value: ";
	cin>>b;
	cout<<"Enter operand: ";
	cin>>op;
	
	
	if (op== +){
		r=a+b;
		cout<<"The result is "<<r;
		
	}
	
	else if (op== -){
		r=a-b;
		cout<<"The result is "<<r;
		
	}
	
	else if (op== /){
		r=a/b;
		cout<<"The result is "<<r;
		
	}
	
    else if (op== *){
		r=a*b;
		cout<<"The result is "<<r;
		
	}
	else if (op== % ){
		r=a%b;
		cout<<"The result is :"<<r;
	}
		
	else{
	    cout<<"Invalid";
	}
		
		
}
