#include<iostream>
using namespace std;
int main(){
	int i,j,n,d=64;
	char ch;
	cout<<"Enter A Number :";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			d=d+1;
			ch=(char)d;
			if(i%2==0) cout<<ch<<" ";
			else cout<<j<<" ";  
		}
		d=64;
		cout<<endl;
	}
}
