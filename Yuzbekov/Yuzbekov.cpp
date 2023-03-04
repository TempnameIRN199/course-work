#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>
#include <fstream>
using namespace std;

struct wifi
{
	char firm[20];
	char model[20];
	int speed;
	int price;
	char date[20];
}ved[4];
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
// функция для создания матрицы
void SecondCreate(int** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
// функция для вывода матрицы
void SecondPrint(int** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
// функция для сортировки матрицы
void SecondSort(int** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j][0] < arr[j + 1][0])
			{
				int* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
// функция ввода данных в структуру
void ThirdCreate(wifi* ved, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Введите фирму: ";
		cin >> ved[i].firm;
		cout << "Введите модель: ";
		cin >> ved[i].model;
		cout << "Введите скорость: ";
		cin >> ved[i].speed;
		cout << "Введите цену: ";
		cin >> ved[i].price;
		cout << "Введите дату: ";
		cin >> ved[i].date;
	}
}
// Вывод базы данных
void ThirdPrint(wifi* ved, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Фирма: " << ved[i].firm << endl;
		cout << "Модель: " << ved[i].model << endl;
		cout << "Скорость: " << ved[i].speed << endl;
		cout << "Цена: " << ved[i].price << endl;
		cout << "Дата: " << ved[i].date << endl;
	}
}
// Сортировка по скорости
void ThirdSort(wifi* ved, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (ved[j].speed < ved[j + 1].speed)
			{
				wifi temp = ved[j];
				ved[j] = ved[j + 1];
				ved[j + 1] = temp;
			}
		}
	}
}
// Поиск по скорости
void ThirdSearch(wifi* ved, int n)
{
	int speed;
	cout << "Введите скорость: ";
	cin >> speed;
	for (int i = 0; i < n; i++)
	{
		if (ved[i].speed == speed)
		{
			cout << "Фирма: " << ved[i].firm << endl;
			cout << "Модель: " << ved[i].model << endl;
			cout << "Скорость: " << ved[i].speed << endl;
			cout << "Цена: " << ved[i].price << endl;
			cout << "Дата: " << ved[i].date << endl;
		}
	}
}
// Сохранение в файл
void ThirdSave(wifi* ved, int n)
{
	ofstream fout("wifi.txt");
	for (int i = 0; i < n; i++)
	{
		fout << "Фирма: " << ved[i].firm << endl;
		fout << "Модель: " << ved[i].model << endl;
		fout << "Скорость: " << ved[i].speed << endl;
		fout << "Цена: " << ved[i].price << endl;
		fout << "Дата: " << ved[i].date << endl;
	}
	fout.close();
}
// первое задание
void firstEx()
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
// второе задание
void secondEx()
{
	srand(time(NULL));
	int n, m;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	SecondCreate(arr, n, m);
	SecondPrint(arr, n, m);
	SecondSort(arr, n, m);
	cout << endl;
	SecondPrint(arr, n, m);
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
// третье задание
void thirdEx()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите количество элементов: ";
	cin >> n;
	ThirdCreate(ved, n);
	ThirdPrint(ved, n);
	ThirdSort(ved, n);
	cout << "Отсортированный список: " << endl;
	ThirdPrint(ved, n);
	ThirdSearch(ved, n);
	ThirdSave(ved, n);
}
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	do
	{
		cout << "Выберите задание: " << endl;
		cout << "1. Задание 1" << endl;
		cout << "2. Задание 2" << endl;
		cout << "3. Задание 3" << endl;
		cout << "0. Выход" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
			firstEx();
			break;
		case 2:
			secondEx();
			break;
		case 3:
			thirdEx();
			break;
		case 0:
			break;
		default:
			cout << "Неверный ввод" << endl;
			break;
		}
		system("PAUSE");
		system("cls");
	} while (n != 0);
	return 0;
}
