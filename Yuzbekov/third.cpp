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
//// �������� ���� ������
//
//// ���������:
//// �����-���� WIFI-��������� � ��������: ����� -�������������, ������, �������� WIFI � ���� /�, ����, ���� ��������
//// ��������� ����������:
//// �� �������� ��������
//// ����� ������ �� �������
//
//struct wifi
//{
//	char firm[20];
//	char model[20];
//	int speed;
//	int price;
//	char date[20];
//}ved[4];
//// �������
//void ThirdCreate(wifi* ved, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "������� �����: ";
//		cin >> ved[i].firm;
//		cout << "������� ������: ";
//		cin >> ved[i].model;
//		cout << "������� ��������: ";
//		cin >> ved[i].speed;
//		cout << "������� ����: ";
//		cin >> ved[i].price;
//		cout << "������� ����: ";
//		cin >> ved[i].date;
//	}
//}
//// ����� ���� ������
//void ThirdPrint(wifi* ved, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "�����: " << ved[i].firm << endl;
//		cout << "������: " << ved[i].model << endl;
//		cout << "��������: " << ved[i].speed << endl;
//		cout << "����: " << ved[i].price << endl;
//		cout << "����: " << ved[i].date << endl;
//	}
//}
//// ���������� �� ��������
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
//// ����� �� ��������
//void ThirdSearch(wifi* ved, int n)
//{
//	int speed;
//	cout << "������� ��������: ";
//	cin >> speed;
//	for (int i = 0; i < n; i++)
//	{
//		if (ved[i].speed == speed)
//		{
//			cout << "�����: " << ved[i].firm << endl;
//			cout << "������: " << ved[i].model << endl;
//			cout << "��������: " << ved[i].speed << endl;
//			cout << "����: " << ved[i].price << endl;
//			cout << "����: " << ved[i].date << endl;
//		}
//	}
//}
//// ���������� � ����
//void ThirdSave(wifi* ved, int n)
//{
//	ofstream fout("wifi.txt");
//	for (int i = 0; i < n; i++)
//	{
//		fout << "�����: " << ved[i].firm << endl;
//		fout << "������: " << ved[i].model << endl;
//		fout << "��������: " << ved[i].speed << endl;
//		fout << "����: " << ved[i].price << endl;
//		fout << "����: " << ved[i].date << endl;
//	}
//	fout.close();
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int n;
//	cout << "������� ���������� ���������: ";
//	cin >> n;
//	create(ved, n);
//	print(ved, n);
//	sort(ved, n);
//	cout << "��������������� ������: " << endl;
//	print(ved, n);
//	search(ved, n);
//	save(ved, n);
//	return 0;
//}