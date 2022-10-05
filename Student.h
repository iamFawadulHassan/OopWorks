#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;

class Student
{
	private:
		string Name;
	public:
		Student()
		{
			cout<<"Please enter your name first";
		}
		~Student()
		{
			cout<<"Releasing resources";
			Name="";
		}
		
		void setName(string _Name)
		{
			Name=_Name;
		}
		void getName()
		{
			cout<<Name;
		}
	
};

#endif
