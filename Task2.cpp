#include<iostream>
using namespace std;

class Fraction
{
private:
	int n;
	int d;

public:
	
	Fraction(){}

	Fraction(int n, int d)
	{
		this->n = n;
		this->d = d;
	}

	Fraction& operator ++() 
	{
		this->n += this->d;
		return *this;
	}

	Fraction& operator ++(int value)
	{
		Fraction temp(*this);
		this->n += this->d;
		return temp;
	}

	Fraction operator *(const Fraction &other) 
	{
		Fraction temp;
		temp.n = this->n * other.n;
		temp.d = this->d * other.d;
		return temp;
	}

	Fraction operator -(const Fraction &other)
	{
		Fraction temp;
		temp.n = (this->n * other.d)-(other.n * this->d);
		temp.d = this->d * other.d;
		return temp;
	}

	int getN() 
	{
		return n;
	}

	int getD() 
	{
		return d;
	}

	void setN(int n)
	{
		this->n = n;
	}
	
	void setD(int d)
	{
		if (d == 0) 
		{
			cout << "Error" << endl;
		}
		this->d = d;
	}

};

int main() 
{
	pow(1, 2);
	Fraction a(1, 2);
	Fraction b(3, 4);
	Fraction c = a * b;
	Fraction d = b - a;
	cout << c.getN() << " / " << c.getD() << endl;
	cout << d.getN() << " / " << d.getD() << endl;
	++a;
	b++;
	cout << a.getN() << " / " << a.getD() << endl;
	cout << b.getN() << " / " << b.getD() << endl;
	return 0;
}
