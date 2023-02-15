//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <ctime>
//#include <stdlib.h>
//#include <iomanip>
//#include <conio.h>
//#include <string>
//#include <string.h>
//#include <ctype.h>
//#include "fstream"
//using namespace std;
//
//void FirstSort(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void FirstCreate(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//}
//void FirstPrint(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//bool FirstCheck(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	srand(time(NULL));
//	int n;
//	cout << "Enter n: ";
//	cin >> n;
//	int* arr = new int[n];
//	create(arr, n);
//	print(arr, n);
//	sort(arr, n);
//	print(arr, n);
//	if (check(arr, n))
//	{
//		cout << "Array is sorted" << endl;
//	}
//	else
//	{
//		cout << "Array is not sorted" << endl;
//	}
//	delete[] arr;
//	return 0;
//}
