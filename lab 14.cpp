#include <iostream>
using namespace std;
struct student{
	string name;
	int rollno;
	float GPA;
};
int main(){
	student  s1;
	s1. name="Ali";
	s1. rollno=30;
	s1.GPA=3.8;
	cout<<"name :"<<s1. name<<endl;
	cout<<"rollno :"<<s1.rollno<<endl;
	cout<<"GPA :"<<s1.GPA<<endl;

}