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
//// функция для создания матрицы
//void SecondCreate(int** arr, int n, int m)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			arr[i][j] = rand() % 100;
//		}
//	}
//}
//// функция для вывода матрицы
//void SecondPrint(int** arr, int n, int m)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//// функция для сортировки матрицы
//void SecondSort(int** arr, int n, int m)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[j][0] < arr[j + 1][0])
//			{
//				int* temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//srand(time(NULL));
//int n, m;
//cout << "Enter n: ";
//cin >> n;
//cout << "Enter m: ";
//cin >> m;
//int** arr = new int* [n];
//for (int i = 0; i < n; i++)
//{
//	arr[i] = new int[m];
//}
//SecondCreate(arr, n, m);
//SecondPrint(arr, n, m);
//SecondSort(arr, n, m);
//cout << endl;
//SecondPrint(arr, n, m);
//for (int i = 0; i < n; i++)
//{
//	delete[] arr[i];
//}
//delete[] arr;
//}
