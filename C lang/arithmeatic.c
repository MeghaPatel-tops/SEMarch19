#include<stdio.h>
main(){
	int a=10,b=3,c,x=10,m=5,n;
	
	//Modulo operator
	c=a % b; 
	printf("\n reminder=%d",c);
	
	
	//increment-decrement
	x++;//incre by 1
	printf("\n x=%d",x);
	
	x--;
	printf("\n x=%d",x);
	
//	n=m++;//post increment
//	// first value assign to other varible and then incre by itself

    n= ++m;//pre increment
    //first value increse and then assign 
	printf("\n n=%d  m=%d",n,m);
	
	
}
