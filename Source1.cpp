#include<iostream>
using namespace std;

double Sum(double* pointer1, double* pointer2)
{
	return *pointer1 + *pointer2;
}

int main() 
{
	double a,b;
	cin >> a >> b;
	cout << Sum(&a, &b) << endl;
	return 0;
}