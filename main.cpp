#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int a,b,c;
	cout << "������� ��� �����:";
	cin >> a >> b;
	
	cout << "�������� ��������\n\n1 = ��������\n2 = ���������\n3 = ���������\n4 = �������\n\n";

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
			cout << "������!����� ���� �����������! ";
			break;


	}




}