#include <stdio.h>
int factorial(int x){
	int fact=1,i;
	for(i=2;i<=x;i++){
		fact=fact*i;
	}
    return fact;
}
int permutation(int n,int r){
	int npr= factorial(n)/factorial(n-r);
	return npr;
}
int main(){
	int n,r;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter r:");
	scanf("%d",&r);
	int p= permutation(n,r);
	printf("%d",p);
}
