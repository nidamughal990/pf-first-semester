#include <iostream>
using namespace std;
struct student{
	string firstname;
	string lastname;
	int rollno;
	double marks;
	void displaystudentinfo(){
	string fullname=firstname+lastname;
	cout<<fullname<<endl;

	cout<<rollno<<endl;
	cout<<marks<<endl;
}
};
int main(){
	student s1 ;
	s1.firstname="Nida" ;
	s1.lastname="Mughal";
	s1.rollno=41;
	s1.marks=400;
	s1.displaystudentinfo();
}