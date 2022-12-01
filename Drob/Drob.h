#pragma once
#include <iostream>

using namespace std;
class Drob
{
	double x1, y1, x2, y2;
public:
	void Drob1() {
		cout << "ВВедите числитель 1 : " << endl;
		cin >> x1;
		cout << "ВВедите знаменатель 1 : " << endl;
		cin >> y1;
		cout << x1 << " / " << y1 << endl;
	}
	void Drob2() {
		cout << "ВВедите числитель 2 : " << endl;
		cin >> x2;
		cout << "ВВедите знаменатель 2 : " << endl;
		cin >> y2;
		cout << x2 << " / " << y2 << endl;
	}
	void summa() {
		cout << "Сумма: " << (x1 + x2) / (y1 * y2) << endl;
	}
	void minus() {
		cout << "Вычитание: " << (x1 - x2) / (y1 * y2) << endl;
	}
	void ymnoj() {
		cout << "Умножение: " << (x1 * x2) / (y1 * y2) << endl;
	}
	void del() {
		cout << "Деление: " << (x1 * y2) / (x2 * y1) << endl;
	}
	void print() {
		cout << x1 << " / " << y1 << endl;
		cout << x2 << " / " << y2 << endl;
	}
	~Drob() {
		cout << "Distructor " << this << endl;
	}
};

