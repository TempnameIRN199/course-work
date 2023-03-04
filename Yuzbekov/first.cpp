#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>
#include "fstream"
using namespace std;
// сортировка массива
void FirstSort(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
// функция для создания массива
void FirstCreate(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
// функция для вывода массива
void FirstPrint(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// функция для проверки отсортирован ли массив
bool FirstCheck(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	srand(time(NULL));
	int n;
	cout << "Enter n: ";
	cin >> n;
	int* arr = new int[n];
	FirstCreate(arr, n);
	FirstPrint(arr, n);
	FirstSort(arr, n);
	FirstPrint(arr, n);
	if (FirstCheck(arr, n))
	{
		cout << "Array is sorted" << endl;
	}
	else
	{
		cout << "Array is not sorted" << endl;
	}
	delete[] arr;
}
