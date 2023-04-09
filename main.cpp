#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int a,b,c;
	cout << "Введите два числа:";
	cin >> a >> b;
	
	cout << "Назовите действие\n\n1 = Сложение\n2 = Вычитание\n3 = Умножение\n4 = Деление\n\n";

	cin >> c; 
	cout << endl;
	switch (c)
	{
	case 1:
			cout << a + b;
			break;
	case 2:
			cout << a - b;
			break;
	case 3:
			cout << a * b;
		break;
	case 4:
			cout << a / b;
		break;

	default:
			cout << "Ошибка!Пункт меню отсутствует! ";
			break;


	}




}