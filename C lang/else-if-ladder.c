#include<stdio.h>
/*
Else  if Ladder
    if(condition){}
    else  if(condition){}
   	else if(condition){}
	else{}   	
	
*/


main(){
   int x1,x2;
   printf("Enter thae value of x1 and x2");
   scanf("%d %d",&x1,&x2);
   
   if(x1 > 0 && x2 >0){
   	    printf("\n First");
   }
   else if(x1 < 0 && x2 >0){
   		printf("\n Sec");
   }
   else if(x1 < 0 && x2 < 0){
   	 	printf("\n Third");
   }
   else if(x1 > 0 && x2 < 0){
   	    printf("\n Forth");
   }
   else{
   	    printf("\n Center");
   }
	
}














