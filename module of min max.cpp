#include<stdio.h>
int great(int x, int y){
	int max=x;
	if(y>x) max=y;
	return max;
}
int main(){
	int z=great(1,3);
	printf("%d",z);
}

