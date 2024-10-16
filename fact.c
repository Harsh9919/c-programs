#include<stdio.h>
int fact();
int main(){
	printf("%d",fact());
	return 0;
}
int fact(){
	int a,b=1,i;
	printf("enter any number:");
	scanf("%d",&a);
	for( i=1;i<=a;i++){
		b=b*i;
	}
	return b;
}
