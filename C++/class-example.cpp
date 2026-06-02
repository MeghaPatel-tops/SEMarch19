#include<iostream>
using namespace std;
class Student{
	
	private:
	//data member
	char name[20];
	char email[20];
	
	public:
	//member function
	void getStudentInfo(){
		cout<<"\n Enter Student name and email";
		cin>>name>>email;
	}
	void showStudentInfo(){
		cout<<"\n Student name="<<name;
		cout<<"\n Email="<<email;
	}
	 	
};
main(){
	Student s1;
	s1.getStudentInfo();
	s1.showStudentInfo();
}











