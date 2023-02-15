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
//struct wifi
//{
//	char firm[20];
//	char model[20];
//	int speed;
//	int price;
//	char date[20];
//}ved[4];
//void ThirdCreate(wifi* ved, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Ââåäèòå ôèðìó: ";
//		cin >> ved[i].firm;
//		cout << "Ââåäèòå ìîäåëü: ";
//		cin >> ved[i].model;
//		cout << "Ââåäèòå ñêîðîñòü: ";
//		cin >> ved[i].speed;
//		cout << "Ââåäèòå öåíó: ";
//		cin >> ved[i].price;
//		cout << "Ââåäèòå äàòó: ";
//		cin >> ved[i].date;
//	}
//}
//void ThirdPrint(wifi* ved, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Ôèðìà: " << ved[i].firm << endl;
//		cout << "Ìîäåëü: " << ved[i].model << endl;
//		cout << "Ñêîðîñòü: " << ved[i].speed << endl;
//		cout << "Öåíà: " << ved[i].price << endl;
//		cout << "Äàòà: " << ved[i].date << endl;
//	}
//}
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
//void ThirdSearch(wifi* ved, int n)
//{
//	int speed;
//	cout << "Ââåäèòå ñêîðîñòü: ";
//	cin >> speed;
//	for (int i = 0; i < n; i++)
//	{
//		if (ved[i].speed == speed)
//		{
//			cout << "Ôèðìà: " << ved[i].firm << endl;
//			cout << "Ìîäåëü: " << ved[i].model << endl;
//			cout << "Ñêîðîñòü: " << ved[i].speed << endl;
//			cout << "Öåíà: " << ved[i].price << endl;
//			cout << "Äàòà: " << ved[i].date << endl;
//		}
//	}
//}
//void ThirdSave(wifi* ved, int n)
//{
//	ofstream fout("wifi.txt");
//	for (int i = 0; i < n; i++)
//	{
//		fout << "Ôèðìà: " << ved[i].firm << endl;
//		fout << "Ìîäåëü: " << ved[i].model << endl;
//		fout << "Ñêîðîñòü: " << ved[i].speed << endl;
//		fout << "Öåíà: " << ved[i].price << endl;
//		fout << "Äàòà: " << ved[i].date << endl;
//	}
//	fout.close();
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int n;
//	cout << "Ââåäèòå êîëè÷åñòâî ýëåìåíòîâ: ";
//	cin >> n;
//	create(ved, n);
//	print(ved, n);
//	sort(ved, n);
//	cout << "Îòñîðòèðîâàííûé ñïèñîê: " << endl;
//	print(ved, n);
//	search(ved, n);
//	save(ved, n);
//	return 0;
//}
