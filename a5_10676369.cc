#include<iostream>
#include<string>
// There are 5 students in a class,each of them is defined by grade,
// name,score,gender,age and Id number.
using namespace std;
int main()
{
	string name;
	int ID;
	int age;
	string gender;
	int score;
	char grade;
	float marks,sum=0,sum1=0,average=0;
	for(int x=1;x<=5;x++)
	{
		cout<<x<<":Enter your name= "<<endl;
		cin>>name;
		cout<<x<<":Enter your ID number= "<<endl;
		cin>> ID;
		cout<<x<<":how old are you?= "<<endl;
		cin>> age;
		cout<<x<<":Gender= "<<endl;
		cin>> gender;
		cout<<x<<":Enter your marks= "<<endl;
		cin>> score;
	cout<<x<<":Enter your grade= "<<endl;
	cin>> grade;



		sum=sum+score;
		sum1=sum+age;
	}
	average=sum/5;
	cout<<"Average is = "<<average<<endl;
	age=sum1/5;
	cout<<"Average age is= "<<age<<endl;

	return 0;
}
