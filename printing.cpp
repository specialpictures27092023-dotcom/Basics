#include<iostream>
using namespace std;
int main(){
	int i,j,n,d=64;
	char ch;
	cout<<"Enter A Number :";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			d=d+i;
			ch=(char)d;
			cout<<ch<<" ";
			d=64;
		}
		d=64;
		cout<<endl;
	}
}
