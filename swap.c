#include <stdio.h>
int main(){
	int A;
	printf("Enter A:");
	scanf("%d",&A);
	int B;
	printf("Enter B:");
	scanf("%d",&B);
	A=A+B;
	B=A-B;
	A=A-B;
	printf("The Value Of A = %d\n",A);
	printf("The Value Of B = %d",B);
}
