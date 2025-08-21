#include<iostream>
using namespace std;
int main(){
	int N1,N2;
	char op;
	cout<<"Enter First Number :";
	cin>>N1;
	cout<<"Enter Second Number :";
	cin>>N2;
	cout<<"Enter Operation :";
	cin>>op;
	switch(op){
		case '+':
			cout<<N1+N2;
			break;
		case '*':
			cout<<N1*N2;
			break;
		case '-':
			cout<<N1-N2;
			break;
		case '/':
			cout<<N1/N2;
			break;
		default:
			cout<<"Invalid Operator";
			break;
	}
}
