#include<stdio.h>
main(){
	int x,y,z=0,m=10,n=3,round;
	round = 10%3;
	printf("\n round=%d",round);
	x= ++m;
	printf("\n m=%d x=%d",m,x);
	
	printf("\n 5==3=%d",5==3);
	x+=20;//x=x+20;//x=11+20
	printf("\n x=%d",x);
	
	printf("\n size of int=%d byte",sizeof(x));
	//(condition)?(true):(flase);
	
	(z > 0)?printf("\n postive"):printf("\n negative");
	
	/*
	
	0  0   0
	0  1   0
	1  0   0
	1  1   1
	
	0  0   0
	0  1   1
	1  0   1
	1  1   1
	
	*/
	
}
