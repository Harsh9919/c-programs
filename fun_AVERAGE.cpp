#include<stdio.h>
int avg(int,int,int,int,int);
int main(){
	int a,b,c,d,e;
	printf("enter the numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("average: %d",avg(a,b,c,d,e));
	return 0;
}
int avg(int a,int b,int c,int d,int e){
	return (a+b+c+d+e)/5;
	
}
