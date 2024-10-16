#include<stdio.h>
int max();
int main(){
	printf("%d",max());
	return 0;
}
int max(){
	int a,b;
	printf("enter any two number:");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

