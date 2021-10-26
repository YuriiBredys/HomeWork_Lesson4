#include<iostream>
using namespace std;

void Revers_array(int array[], int size)
{
	for(int j = 0; j < size; j++)
	{
	  for (int i = 0; i < size - j - 1; i++)
	  {
		int temp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;
	  }
    }
}

int main()
{
	int size = 0;
	cin >> size;
	int* array = new int[size];
	

	for (int i = 0; i < size; i++) 
	{
		cin>>array[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "," ;
	}
	
	cout << endl;
	Revers_array(array, size);
	
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ",";
	}

	delete[] array;
	return 0;
}