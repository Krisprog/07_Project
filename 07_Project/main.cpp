#include<iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout << x << "\t" << y << endl;
	}
};
class Person
{
	string name;
	int age;
public:
	Person()
	{}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
	void Print()
	{
		cout << name << "\t" << age << endl;
	}

};

int main()
{

}