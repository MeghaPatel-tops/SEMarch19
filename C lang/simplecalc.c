#include<stdio.h>
main(){
	int a,b ,add,sub,mul;
	float div;
	printf("\n Enter the value of a and b");
	scanf("%d %d",&a,&b);
	add = a + b;
	printf("\n add=%d",add);
	sub= a - b;
	printf("\n sub=%d",sub);
	mul= a * b;
	printf("\n mul=%d",mul);
	div = a / b;
	printf("\n div=%f",div);
}

