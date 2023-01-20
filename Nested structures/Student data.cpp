#include <iostream>

using namespace std;

struct address{
	string city;
	string branch;
	int street_no;
};

struct school{
	string school_name;
	int school_id;
	address ad;
};

struct student{
	string name;
	int id;
	int marks;
	
	school sch;
};

int main()
{
	int num;
	cout<<"Enter number of students to save their records : ";
	cin>>num;
	
	student s[num];
	
	for(int i=0;i<num;i++){
		cout<<"Enter data of student no "<<i+1<<" : "<<endl;
		cout<<"Enter name of student no "<<i+1<<" : ";
		cin>>s[i].name;
		cout<<"Enter ID of student no "<<i+1<<" : ";
		cin>>s[i].id;
		cout<<"Enter marks of student no "<<i+1<<" : ";
		cin>>s[i].marks;
		cout<<"Enter school name of student no "<<i+1<<" : ";
		cin>>s[i].sch.school_name;
		cout<<"Enter school ID of student no "<<i+1<<" : ";
		cin>>s[i].sch.school_id;
		cout<<"Enter school city of student no "<<i+1<<" : ";
		cin>>s[i].sch.ad.city;
		cout<<"Enter school branch of student no "<<i+1<<" : ";
		cin>>s[i].sch.ad.branch;
		
	}
	
	for(int i=0;i<num;i++){
		cout<<"Data of student no "<<i+1<<" : "<<endl;
		cout<<"Name: "<<i+1<<" : "<<s[i].name<<endl;
		cout<<"ID : "<<i+1<<" : "<<s[i].id<<endl;
		cout<<"Marks : "<<i+1<<" : "<<s[i].marks<<endl;
		cout<<"School name: # "<<i+1<<" : "<<s[i].sch.school_name<<endl;
		cout<<"School ID: "<<i+1<<" : "<<s[i].sch.school_id<<endl;
		cout<<"School city : "<<i+1<<" : "<<s[i].sch.ad.city<<endl;
		cout<<"School branch : "<<i+1<<" : "<<s[i].sch.ad.branch<<endl;
	}
	
	return 0;
}
