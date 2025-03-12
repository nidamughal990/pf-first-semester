#include <iostream>
using namespace std;
struct student{
	string firstname;
	string lastname;
	int rollno;
	double marks;
	void displaystudentinfo(){
	    
		cout<<"first name :"<<firstname <<endl;
		cout<< "lastname:"<<lastname <<endl;  
		
		cout<<"rollno :"<<rollno<<endl;
		cout<<"marks :"<<marks<<endl;
	}
	};

int main(){
	int n ;
	cout <<"Enter numberof students :";
	cin >> n;
	student s[n];
	for(int i=0;i<n;i++){
		
	cin>>s[i].firstname;
	cin >>	s[i].lastname;
	cin >> s[i].rollno;
	cin >> s[i].marks;
	
	cout <<endl;
	}
	
		
	


for(int i=0 ;i<n; i++){
			s[i].displaystudentinfo();
				cout<<endl;
		}
	
		
}
