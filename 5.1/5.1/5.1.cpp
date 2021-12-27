#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int getValueint()
{
	while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
	{
		int a;
		cin >> a;

		if (cin.fail()) { // если предыдущее извлечение оказалось неудачным,
			cin.clear(); // то возвращаем cin в 'обычный' режим работы
			cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << "Вы ввели некорректное число! Попробуйте еще раз ";

		}
		else // если всё хорошо, то возвращаем a
			return a;
	}
}

void fun1(string* s) {
	for (auto c : *s) {
		if (c >= 'A' && c <= 'Z') {
			int al_num = c - 'A';
			c = al_num + 'a';
		}
		cout << c;
	}
	cout << endl;
}

void fun2(string *s) {
	for (auto c : *s) {
		if (c >= 'A' && c <= 'Z') cout << "«.»";
		cout << c;
	}
}

int main() {
	setlocale(0, "ru");
	string* s1 = new string;
	string* s2 = new string;

	cout << "Введите 1 строку\n";
	getline(cin, *s1);
	cout << "Введите 2 строку\n";
	getline(cin, *s2);

	cout << "Введите 2 строку\n";
	cout << "Измененная 1 строка\n";
	fun1(s1);
	cout << "Измененная 2 строка\n";
	fun2(s2);

	delete s1;
	delete s2;

}
