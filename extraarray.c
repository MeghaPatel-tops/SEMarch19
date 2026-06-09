#include<stdio.h>
main(){
	int a[10];
	int i;
	int n;
	printf("\n Enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("\n Enter a[%d]=%d",i,a[i]);
	}
	
}
