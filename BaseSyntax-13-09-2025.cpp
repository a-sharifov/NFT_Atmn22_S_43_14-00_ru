#include <iostream>
#include <fstream>
#include<random>
#include<ctime>
// объявление константы через define 
// !!! не рекомендуется к использованию
#define PI 3.14
using namespace  std;

int main()
{
	// какие типы данных вы знаете?
	// int, float, double, char, bool	
	// long, long long, unsigned int, unsigned long

	// объявление константы
	//const float pi = 3.14;  // byte 4

	// объявление переменной
	//int a; // byte 4


	// Print - вывод в консоль
	//cout << "Enter a number: ";
	// Scan - ввод из консоли
	//cin >> a;
	//cout << "You entered: " << a << endl;

	// do while цикл с постусловием
	// используется в диалоговых окнах
	//do
	//{

	//} while (true);

	// while - цикл с предусловием
	// используется, когда не известно 
	// количество итераций

	/*int a[5] = { 1,2,3,4,5 };
	int i = 0;
	while (i < 5)
	{
		cout << a[i] << endl;
		i++;
	}*/

	// for - цикл с параметром
	// чаще всего применяется для перебора массивов
	//for (int i = 0; i < 5; i++)
	//{
	//	if (i == 2)
	//		//  повторяет цикл не выполняя послудующий код
	//		continue; 
	//		// прерывает цикл
	//	if (i == 4)
	//		break;

	//	cout << a[i] << endl;
	//}

	//int a[5] = {};
	//int num = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "Enter a odd number : ";
	//	cin >> num;

	//	if (cin.fail())
	//	{
	//		cout << "You entered not a number, try again!" << endl;
	//		cin.clear(); // сброс состояния ошибки
	//		cin.ignore(32767, '\n'); // очистка буфера ввода
	//		i--;
	//		continue;
	//	}

	//	if (num % 2 == 0) {
	//		cout << "You entered an even number, try again!" << endl;
	//		i--;
	//		continue;
	//	}

	//	a[i] = num;
	//}
	// 

	//int a[5] = {};
	//int num = 0;
	//// seed random
	//srand(0);
	//for (int i = 0; i < 5; i++)
	//{
	//	a[i] = rand() % 100; 
	//}

	//// запись в файл  открытие файла на запись
	//ofstream fout("test.txt");

	//// проверка на успешное открытие файла
	//if (!fout.is_open())
	//{
	//	cout << "Error opening file!" << endl;
	//	return 1;
	//}

	//// запись в файл
	//for (int i = 0; i < 5; i++)
	//{
	//	// запись конректного элемента массива в файл
	//	fout << a[i] << endl;
	//}

	//// закрытие файла
	//fout.close();
	//return 0;
}
