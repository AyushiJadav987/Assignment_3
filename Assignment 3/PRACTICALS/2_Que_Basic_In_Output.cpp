//Basic Input/Output Write a C++ program that accepts
//user input for their name and age and then displays a personalized greeting.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int age;
	string name;
	
	cout << "Enter Your Name:"<< endl;
	cin >> name;
	
	cout << "Enter your age:" << endl;
	cin >> age;
	
	cout << "Hello "<< name << " \nyour age is " << age << endl;
	
	
	return 0;
}
