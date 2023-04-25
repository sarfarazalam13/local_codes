#include <iostream>
using namespace std;

int Airthmatic (int a,int b){
	char n;
	cout<<"\nEnter a operator:\n";
	cin>>n;
	switch (n){
		
		case '+' :	 return a+b;
			break;
		
		case '-':	 return a-b;
			break;
		
		case '*':	 return a*b;
			break;
		
		case '/':	if(b!=0){
				return a/b;}
			break;	
		
		case '%':	 return a%b;
			break;
		
		case '++':	 cout<<a++<<++b;
			break;
		
		case '--':	 cout<<a--<<--b;
			break;		
	}
}


int Relational (int a,int b){
	char n;
	cout<<"\nEnter a operator:\n";
	cin>>n;
	switch (n){
		
		case '>=':	return a>=b?a:b;
			break;
		
		case '<=':	return a<=b?a:b;
			break;
		
		case '==':	return a==b?a:b;
			break;
			
		case '!=':	return a!=b?a:b;
			break;
		
		case '<':	return a<b?a:b;
			break;
		
		case '>':	return a>b?a:b;
			break;	
	}
}

int Logical (int a,int b){
	char n;
	cout<<"\nEnter a operator:\n";
	cin>>n;
	switch (n){
		
		case '&&':	return a&&b?a:b;
			break;
		
		case '||':	return a||b?a:b;
			break;
		
		case '!':	return !a;
			break;	
	}
}

int Assignment(int a){
	char n;
	int x;
	cin>>n;
	switch (n){
		case '=': a=x;
				return x;
				break;
				
		case '+=': return a+=10;
				 break;
		
		case '-=': return a-=10;
				 break;
		
		case '/=': return a/=10;
				 break;		 	 
	}
}
    int main(){
	int x,y;
	x=30; y=10;
	cout<<"\nAirthmatic Operator:\n"<<Airthmatic(x,y)<<endl;
	cout<<"\nRelational Operator:\n"<<Relational(x,y)<<endl;
	cout<<"\nLogical Operator:\n"<<Logical(x,y)<<endl;
	cout<<"\nAssignment Operator:\n"<<Assignment(x)<<endl;
	return 0;
	}