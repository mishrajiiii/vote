/*Teenage validation:
If person’s age is greater than or equal to 13 and less than or equal to 19, than person is teenager otherwise person is not a teenager.
Voting edibility:
If person’s age is greater than or equal to 18, person is eligible for voting.*/

#include<iostream>
using namespace std;

int main()
{
	int age;

	cout<<"Enter your age: ";
	cin>>age;

	if(age>=13 && age<=19)
	{
		cout<<"Person is Teenager"<<endl;
	}
	else
	{
		cout<<"Person is not a Teenager"<<endl;
	}

	if(age>=18)
	{
		cout<<"Personl is eligible for voting"<<endl;
	}
	else
	{
		cout<<"Person is not eligible for voating"<<endl;
	}

	return 0;
}
