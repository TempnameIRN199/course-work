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

int FirsTask();
int SecondTask();
int ThirdTask();

struct wifi
{
	char firm[20];
	char model[20];
	int speed;
	int price;
	char date[20];
}ved[4];

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
void FirstCreate(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FirstPrint(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
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

