#include<stdio.h>
main(){
	char a[5][20];	
	int i;
	for(i=0;i<5;i++){
		printf("\n Enter task name");
		scanf("%s",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\n task no =%d = %s",i+1,a[i]);
	}
}
