#include<stdio.h>
main(){
	int a[5];
	int i;
	int max;

	for(i=0;i<5;i++){
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]=%d",i,a[i]);
	}
	printf("\n\n\n max value =%d",max);
	
}
