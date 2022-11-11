#include <iostream>
#include <iomanip>

//Lab4. Variant 13. Task 2
using namespace std;

int main()
{
	int n, m;
	int a, b;
	int mainEven = 0, mainOdd = 0;
	int sideEven = 0, sideOdd = 0;
	int** arr;

	cout << "Enter rows: \n";
	cin >> n;
	cout << "Enter columns: \n";
	cin >> m;

	cout << "Enter the range of the array: \n";
	cin >> a >> b;
	if (a == b || a > b)
	{
		cout << "Please, enter another second number of the range: ";
		cin >> b;
	}

	arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	cout << "Range: " << a << " - " << b << endl;
	cout << "Rows: " << n << "\t Columns: " << m;
	cout << "\nArray: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % (b - a + 1) + a;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				if (arr[i][j] % 2 == 0)
				{
					mainEven++;
				}
				else
				{
					mainOdd++;
				}
			}

			if (i == m - j - 1)
			{
				if (arr[i][j] % 2 == 0)
				{
					sideEven++;
				}
				else
				{
					sideOdd++;
				}
			}
		}
	}

	int minIndex = 0;
	int minSum = 0;
	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += arr[j][i];
		}
		if (i == 0)
		{
			minSum = sum;
		}
		else if (sum < minSum)
		{
			minSum = sum;
			minIndex = i;
		}
	}

	cout << endl << "Main diagonal \t Even: " << mainEven << " Odd: " << mainOdd << endl;
	cout << endl << "Side diagonal \t Even: " << sideEven << " Odd: " << sideOdd << endl;

	cout << endl << "The minimum sum of matrix column elements: " << minSum << " \tColumn number:" << minIndex + 1 << endl;

	delete[] arr;
	cout << endl << endl;
	return 0;
}