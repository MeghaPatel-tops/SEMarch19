#include<stdio.h>
struct User{
    char name[20];
    int uid;
    char email[30];
    int std;
};
main(){
	struct User u1={"Kunj",101,"kunj@gmail.com",11};
	printf("\n name=%s",u1.name);
	printf("\n userid=%d",u1.uid);
	printf("\n email=%s",u1.email);
	printf("\n std=%d",u1.std);
}
