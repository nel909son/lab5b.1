#include <iostream>

#include <cstdlib>

#include <string>

using namespace std;

float* read_data(int& size);



int main()
{
	float* array;
	int size = 0;
	array = read_data(size);
	
}

float* read_data(int& size)

{
	
	
	int capacity = 10; //used to store current capacity of array
	float* array = new float[capacity];
	float input;

	cout << "Enter float numbers for array: ";

	while (cin >> input)
	{
		if (cin.fail())
		{
			break;
		}
		array[size] = input;
		++size;
	}
	cout << "Array = ";
	
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	cin.clear();
	cin.ignore();

	cout << "Enter MORE float numbers for array: ";

	while (cin >> input)
	{
		if (cin.fail())
		{
			break;
		}
		//doubling capacity of array
		if (size >= capacity)

		{
			//copy elements to temp array
			capacity *= 2;
			float* temp = new float[size];
			for (size_t i = 0; i < size; i++)
			{
				temp[i] = array[i];

			}
			//delete old array, allocate new array at new capacity
			delete[] array;
			array = new float[capacity];
			//copy temp array to new array  

			for (size_t i = 0; i < size; i++)
			{
				array[i] = temp[i];
			}
			delete[] temp;

		}
		
		array[size] = input;
		++size;
	}
	cout << "Array = ";
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	cin.clear();
	cin.ignore();
	


	return array;  //return address of array
	}
