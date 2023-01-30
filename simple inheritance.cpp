#include<iostream>
using namespace std;
class student
{
	private:
	char name[30],gender;
	int age;
	public:
		void input1();
		void display1();
};
void student::input1()
	{
		cout<<"enter the name of the student:";
		cin>>name;
		cout<<"enter the age:";
		cin>>age;
		cout<<"enter the gender:";
		cin>>gender;
	}
void student:: display1()
	{
	cout<<"name is:"<<name;
	cout<<"age:"<<age;
	cout<<"gender:"<<gender;
   }
class marks:public student
{
	private:
	int n1,n2;
	public:
		void input2();
		void display2();
};
void marks::input2()
	{
		cout<<"enter the first subject marks:";
		cin>>n1;
		cout<<"enter the second subject marks:";
		cin>>n2;
	}
void marks:: display2()
	{
		cout<<"total is:"<<(n1+n2);
		cout<<"avegage is"<<(n1+n2)/2;
	}	
int main()
{
	student s;
	marks m;
	s.input1();
	s.display1();
	m.input2();
	m.display2();
	return 0;
}
