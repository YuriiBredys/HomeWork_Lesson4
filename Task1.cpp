#include<iostream>
#include<string>
using namespace std;

class Point
{
private:
	double x;
	double y;
	string name;

public:
	Point(double x, double y,string name)
	{
		this->x = x;
		this->y = y;
		this->name = name;
	}

	~Point() {}

	double GetX()
	{
		return x;
	}

	double GetY()
	{
		return y;
	}

	void SetX(double x)
	{
		this->x = x;
	}

	void SetY(double y)
	{
		this->y = y;
	}

	void Print()
	{
		cout <<"Point " << name << "\tX = " << x << "\tY = " << y << endl;
	}
};

int main()
{
	Point a(12.35, 9, "First");
	a.Print();
	a.SetX(2);
	a.SetY(12.23);
	a.Print();
	cout << a.GetX() << "  " << a.GetY() << endl;
	return 0;
}
