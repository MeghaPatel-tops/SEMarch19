#include<stdio.h>
struct TodoList{
	char taskname[20];
	int isDone;
};
main(){
	struct TodoList t[5];
	int i;
	printf("\n Create todo list");
	for(i=0;i<5;i++){
		printf("\n task list ");
		scanf("%s %d",t[i].taskname,&t[i].isDone);
		
	}
	for(i=0;i<5;i++){
		printf("\n task list ");
		printf("%s \t status(Done or Not) =%d",t[i].taskname ,t[i].isDone);
		
	}
}
