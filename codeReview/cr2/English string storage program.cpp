﻿
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main(void)
{
	
	
	string temp;
	int num;
	char array[20], compute;
	char print[6] = "print", exit[5] = "exit";
	
	
	cout << "Input a number for the capactiy(no more than ten): " << endl;
	cin >> num;
	cout << endl;


	for (int i = 0; i < num; i++)
	{
		

		cout << "Please Input a number or word(print/exit): " << endl;



		cin >> temp;
		if (temp == "print")
		{
			for (int z = 0; z < i; z++)
			{
				cout << array[z];
			}
			cout << endl;
			system("pause");
			return 0;
		}
		if (temp == "exit")
		{
			cout << endl;
			system("pause");
			return 0;

		}
		
		array[i] = temp[0];
		for (int k = 1; k <= i; k++)
		{
			if (array[i] < array[k - 1])
			{
				compute = array[i];
				array[i] = array[k - 1];
				array[k - 1] = compute;
			}
				

		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << array[i];
	}
	cout << endl;
	if (num == 20)
	{
		cout << "Achieve highest time, over. " << endl;
		system("pause");
		return 0;
	}
	cout << endl;
	system("pause");
	return 0;
}


