#include <iostream>
#include <random>
#include <iomanip> 
#include <istream>
#include <conio.h>
#include <string>
#include <sstream>

//Lab 6. Variant 13. Task 1
using namespace std;

const int N = 5;
const int M = 5;

void changeFirstLast(int** arr, int n, int m);
void ReturnNumber();
void RangeDouble();
void TwoDemensionalArray();

int main()
{
	int c = 0;
	int n;

	while (c == 0)
	{
		cout << "1. Return number;";
		cout << "\n2. Range double;";
		cout << "\n3. Two demensional array;";
		cout << "\n\nMake a choice: ";
		cin >> n;
		switch (n)
		{
		case 1:
			ReturnNumber();
			break;
		default:
			cout << "\nMake another choice!";
			break;
		}
	}

	cout << endl << endl;
	return 0;
}

void ReturnNumber()
{
	float a, b, c, d, x, x1, x2, dx, F;

	cout << "Enter: ";
	cout << "\n1. Input a: "; cin >> a;
	cout << "\n2. b: "; cin >> b;
	cout << "\n3. c: "; cin >> c;
	cout << "\n4. d: "; cin >> d;
	cout << "\n5. Input step: "; cin >> dx;
	cout << "\n6. Input X begin: "; cin >> x1;
	cout << "\n7. Input X end: "; cin >> x2;

	x = x1;

	while (x <= x2)
	{
		if (x < 5 && b != 0)
		{
			F = a * pow((x + 7), 2) - b;
		}
		else if (x > 5 && b == 0)
		{
			F = (x - c * d) / (a * x);
		}
		else
		{
			F = b / c;
		}

		cout << "\tX = " << x << "\tF = " << F << endl;
		x += dx;
	}
}

void RangeDouble()
{
	int m, n, k;
	double h;

	uniform_real_distribution<double> unif(-1., 1.);
	default_random_engine re;

	cout << "Enter 3 numbers: " << endl;
	cin >> k;
	cin >> m;
	cin >> n;

	if (3 < k < 10)
	{
		for (; 3 > k || k > 10;)
		{
			cout << "Please, Enter a number in the range (4...9) " << endl;
			cin >> k;
		}
	}

	cout << endl;
	for (int i = 0; i < m; i++)
	{
		if (i % k == 0)
		{
			cout << endl;
		}
		cout << rand() % 900 + 13 << " ";
	}

	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % k == 0)
		{
			cout << endl;
		}

		h = unif(re);
		cout << fixed << setprecision(2) << h;
		cout << h << " ";
	}
}

void TwoDemensionalArray()
{
	int n, m;
	int a, b;
	int** arr;

	cout << "Enter rows: \n";
	cin >> n;
	cout << "Enter columns: \n";
	cin >> m;
	if (n == N || n > N)
	{
		cout << "Please, enter another number of rows: ";
		cin >> n;
	}
	if (m == M || m > M)
	{
		cout << "Please, enter another number of columns: ";
		cin >> m;
	}

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