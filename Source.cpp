#include <iostream>
using namespace std;
int main() {
	/*
	For4.  Дано  вещественное  число — цена 1 кг  конфет.  Вывести  стоимость 1,  2, …, 10 кг конфет.
	*/
	/*
	int c;
	cout << "price";
	cin >> c;
	for (int i = 1; i <= 10; ++i) {
		cout << i << " kg = " << c * i << endl;
	}
	*/
	/*
	For7. Даны два целых числа A и B (A < B). Найти сумму всех целых чисел от A до B включительно. 
	*/
	/*
	int a, b;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	int sum = 0;
	for (int i = a; i <= b; ++i) {
		sum += i;
		}
	cout << "Sum = " << sum;
	*/
	/*
	For8. Даны два целых числа A и B (A < B). Найти произведение всех целых чи-сел от A до B включительно. 
	*/
	/*
	int a, b, c = 1;
	cout << "a";
	cin >> a;
	cout << "b:";
	cin >> b;

	for (int i = a; i <= b; i++) {
		c *= i;
	}
	cout << c;
	*/
	/*
	For9. Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых чисел от A до B включительно.
	*/
	int a, b;
	cout << "a";
	cin >> a;
	cout << "b";
	cin >> b;

	int i, rez = 0;
	for (i = a; i <= b; ++i)
		rez += i * i;
	cout << "rez " << rez;
	return 0;
}