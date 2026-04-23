#include<stdio.h>
int factFind(num){
	int f;
	if(num==1){
		return 1;
	}
	f= num*factFind(num-1);
	return f;
}
main(){
	int f= factFind(5);
	printf("\n factorial =%d",f);
}
