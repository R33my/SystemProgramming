#include <iostream>
#include <iomanip>

//Lab4. Variant 13. Task 2
using namespace std;

void changeFirstLast(int**, int, int);

int main()
{
	int n, m;
	int a, b;
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

	changeFirstLast(arr, n, m);

	cout << "\nArray swaps the last row and first column: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	delete[] arr;
	cout << endl << endl;
	return 0;
}

void changeFirstLast(int** arr, int n, int m)
{
	int rows = n;
	int columns = m;
	for (int i = 0; i < n; i++)
	{
		int temp = arr[i][0];
		arr[i][0] = arr[rows - 1][i];
		arr[rows - 1][i] = temp;
	}
}