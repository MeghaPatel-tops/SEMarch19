#include<stdio.h>
float pi=3.14;//global varible
void test(){
	printf("\n global varible in function pi=%f",pi);
}
void add(int a,int b){//a and b formal parameter
	int c=a+b;
	printf("\n addition=%d",c);
}
main(){
	int x=10;//local varible
	
	{
		int y=90;//local varible
		printf("\n y=%d",y);
	}
	printf("\n global varible pi=%f",pi);
	test();
	add(10,20);
}
