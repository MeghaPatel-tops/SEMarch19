#include<stdio.h>
/*
switch(ch){
	case 1:
	   //block
	break;  
	case 2:
	   //block
	break;
	default:
	   //block
	break      
}
*/
main(){
	int x,y;
	char choice;
    printf("\n press + for add");	
    printf("\n press - for sub");	
    printf("\n press * for mul");	
    printf("\n press / for div");
    
    printf("\n Enter Yuor Choice");
    scanf("%c",&choice);
	
	printf("\n Enter x and y");
	scanf("%d %d",&x,&y);
	
	switch(choice){
		case '+':
			printf("\n add of %d and %d = %d",x,y,x+y);
		break;	
		case '-':
			printf("\n sub of %d and %d=%d",x,y,x-y);
		break;	
		case '*':
			printf("\n mul of %d and %d=%d",x,y,x*y);
		break;	
		case '/':
			printf("\n div of %d and %d=%d",x,y,x/y);
		break;	
		default:
			printf("\n Invalid choice");
		break;	
	}
    
}











