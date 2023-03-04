//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <ctime>
//#include <stdlib.h>
//#include <iomanip>
//#include <conio.h>
//#include <string>
//#include <string.h>
//#include <ctype.h>
//#include <fstream>
//using namespace std;
//
//// Создание базы данных
//
//// Структура:
//// Прайс-лист WIFI-адаптеров в магазине: фирма -производитель, модель, скорость WIFI в Мбит /с, цена, дата поставки
//// Параметры сортировки:
//// за падением скорости
//// Выбор данных по условию
//
//struct wifi
//{
//	char firm[20];
//	char model[20];
//	int speed;
//	int price;
//	char date[20];
//}ved[4];
//// Функции
//void ThirdCreate(wifi* ved, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Введите фирму: ";
//		cin >> ved[i].firm;
//		cout << "Введите модель: ";
//		cin >> ved[i].model;
//		cout << "Введите скорость: ";
//		cin >> ved[i].speed;
//		cout << "Введите цену: ";
//		cin >> ved[i].price;
//		cout << "Введите дату: ";
//		cin >> ved[i].date;
//	}
//}
//// Вывод базы данных
//void ThirdPrint(wifi* ved, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Фирма: " << ved[i].firm << endl;
//		cout << "Модель: " << ved[i].model << endl;
//		cout << "Скорость: " << ved[i].speed << endl;
//		cout << "Цена: " << ved[i].price << endl;
//		cout << "Дата: " << ved[i].date << endl;
//	}
//}
//// Сортировка по скорости
//void ThirdSort(wifi* ved, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (ved[j].speed < ved[j + 1].speed)
//			{
//				wifi temp = ved[j];
//				ved[j] = ved[j + 1];
//				ved[j + 1] = temp;
//			}
//		}
//	}
//}
//// Поиск по скорости
//void ThirdSearch(wifi* ved, int n)
//{
//	int speed;
//	cout << "Введите скорость: ";
//	cin >> speed;
//	for (int i = 0; i < n; i++)
//	{
//		if (ved[i].speed == speed)
//		{
//			cout << "Фирма: " << ved[i].firm << endl;
//			cout << "Модель: " << ved[i].model << endl;
//			cout << "Скорость: " << ved[i].speed << endl;
//			cout << "Цена: " << ved[i].price << endl;
//			cout << "Дата: " << ved[i].date << endl;
//		}
//	}
//}
//// Сохранение в файл
//void ThirdSave(wifi* ved, int n)
//{
//	ofstream fout("wifi.txt");
//	for (int i = 0; i < n; i++)
//	{
//		fout << "Фирма: " << ved[i].firm << endl;
//		fout << "Модель: " << ved[i].model << endl;
//		fout << "Скорость: " << ved[i].speed << endl;
//		fout << "Цена: " << ved[i].price << endl;
//		fout << "Дата: " << ved[i].date << endl;
//	}
//	fout.close();
//}
//
//int main()
//{
//setlocale(LC_ALL, "rus");
//int n;
//cout << "Введите количество элементов: ";
//cin >> n;
//ThirdCreate(ved, n);
//ThirdPrint(ved, n);
//ThirdSort(ved, n);
//cout << "Отсортированный список: " << endl;
//ThirdPrint(ved, n);
//ThirdSearch(ved, n);
//ThirdSave(ved, n);
//}
