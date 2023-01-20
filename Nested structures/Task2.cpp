#include <iostream>
using namespace std;

struct adress{
	string city;
    int house_no;
	string country;		
};
	struct student{
	int roll_no;
	string name;
	int age;
	adress ad;
};
student s1;
student s2;
student s3;

void age14(){
	if (s1.age==14){
		cout<<"This student has age 14:"<<s1.name<<endl;
	}
	if(s2.age==14){
		cout<<"this student has age 14: "<<s2.name<<endl;
	}
	if(s3.age==14){
		cout<<"This student has age 14 :" <<s3.name<<endl;
	}
}
	void even_roll() {
	
		if (s1.roll_no%2==0){
		cout<<"This student has even roll no:"<<s1.name<<endl;
	}

	    if(s2.roll_no%2==0){
		cout<<"this student has even roll no: "<<s2.name<<endl;
	}
	if(s3.roll_no%2==0){
		cout<<"This student has even roll no :" <<s3.name<<endl;
	}
}
	int main(){
	
		cout<<"Enter info of student 1";
		cout<<"Enter name : ";
		cin>>s1.name;
		cout<<"enter age : " ;
		cin>>s1.age;
		cout<<"enter roll no : ";
		cin>>s1.roll_no;
		cout<<"Enter address : " <<endl;
		cout<<"enter house no :";
		cin>>s1.ad.house_no;
		cout<<"enter city : ";
		cin>>s1.ad.city;
		cout<<"enter country : ";
		cin>>s1.ad.country;
		
		cout<<"ENTER INFO OF STUDENT 2 : ";
		
		cout<<"Enter name : ";
		cin>>s2.name;
		cout<<"enter age : ";
		cin>>s2.age;
		cout<<"enter roll no : ";
		cin>>s2.roll_no;
		cout<<"Enter address : "<<endl;
		cout<<"enter country : ";
		cin>>s2.ad.country;
		
		cout<<"Enter info of student 3";
		cout<<"Enter name : ";
		cin>>s3.name;
		cout<<"enter age : ";
		cin>>s3.age;
		cout<<"enter roll no : ";
		cin>>s3.roll_no;
		cout<<"Enter address : ";
	
		cout<<"enter house no :";
		cin>>s3.ad.house_no;
		cout<<"enter city : ";
		cin>>s3.ad.city;
		cout<<"enter country : ";
		cin>>s3.ad.country;
		
		even_roll();
		
		age14();
		return 0;
	}
