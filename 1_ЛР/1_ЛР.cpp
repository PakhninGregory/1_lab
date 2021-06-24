#include <iostream>
#include <ctime> 
#include <iomanip> 
#include <string>
using namespace std;
#define Debug "PressF"




int main()
{
	setlocale(LC_ALL, "Russian");
	int z;
	do {
		cout << "Введите номер задания для его дальнейшего выполнения (для выхода - 0): ";
		cin >> z;
		switch (z) {
		case 1: {
			srand(time(0)); // рандомизация
			cout << "\nНаписать функцию, которая заменяет все четные числа в целочисленном статическом массиве на 0.\nМассив сделал из 10 элементов, статическим, рандомно генерирующимся:\n\n";
			const int length_array = 10; // размер массива
			int mass[length_array]; // объявляе массив соответствующего размера
			for (int counter = 0; counter < length_array; counter++)
			{
				mass[counter] = rand() % 100; // инициализация массива случайным числом в интервале [0;99]
				cout << mass[counter] << "\t"; // печать элемента массива
			}
			cout << "\n\nМассив с 0 вместо четных:\n";
			for (int counter = 0; counter < length_array; counter++)
			{
				if (mass[counter] % 2 == 0)mass[counter] = 0; // замена на 0 четных
				cout << mass[counter] << "\t"; // печать элемента массива
			}
		}
			  break;
		case 2: {
			cout << "Ввод символа с клавиатуры(с проверкой что это именно символ), ввод строки с клавиатуры(с проверкой что это именно строка).\nВывод в консоль номера, который символ занимает в строке, если он там есть.\nЕсли нет — вывод сообщения об отсутствии символа.\n";
			char ch;
			while (1 > 0) {
				cout << "Введите букву в англ раскладке/цифру/символ (до 127 по аски, иначе прога умрет)\nПри вводе цифры или буквы, введи еще раз, и так пока не умрешь (или введи символ и цикл прекратит бытие): ";
				cin >> ch;
				if (!isalnum(ch))
					break;
				system("pause");
				system("cls");
			}

			string Str;
			while (1 > 0) {
				cout << "Введите строку (больше одного символа): ";
				cin >> Str;
				if (Str.length() > 1)
					break;
				system("pause");
				system("cls");
			}

			//			cout << "\nЯ не оч осознаю что значит проверка на строку (да и на символ), что угодно в string,\nвроде как является строкой, добавил проверку на больше 1 символа в строке\n";

			int kolv = 0;
			for (auto c : Str) {
				kolv++;
				if (c == ch) {
					cout << "Не буква/цифра, совпавшая с символом " << kolv << "я по счету : '" << c << "'" << endl;
					break;
				}
				if (Str.length() == kolv)
					cout << "Символа " << ch << " не найдено\n"; //прямо как смысл жизни
			}
		}
			  break;
		case 3: {
			cout << "Расчет определителя матрицы, матрица размером 3 на 3. Ввод чисел построчно. Числа только целые.\n";
			const int size = 3;
			int matr[size][size];
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					cout << "элемент матрицы [" << i << "][" << j << "]= ";
					cin >> matr[i][j];
				}
			}
			int determ = matr[0][0] * matr[1][1] * matr[2][2] - matr[0][0] * matr[1][2] * matr[2][1]
				- matr[0][1] * matr[1][0] * matr[2][2] + matr[0][1] * matr[1][2] * matr[2][0]
				+ matr[0][2] * matr[1][0] * matr[2][1] - matr[0][2] * matr[1][1] * matr[2][0];//мне было лень в час ночи вспоминать как оно по человечески делается, я потом нашел код в интернете, но и так работает
			cout << "Определитель матрицы равен " << determ << endl;
		}
			  break;
		}

		system("pause");
		system("cls");
	} while (z != 0);
	cout << "\n\n\n\n\t\t\tСделал Пахнин Григорий\n\n\n\n\n";
	return 0;
}