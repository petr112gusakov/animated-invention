#include<iostream>
#include<clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int chislo = 0;
	int a = 0;
	int b = 0;

	cin >> chislo;

	a = chislo / 100;
	b = (chislo / 10) % 10;

	switch (a)
	{
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	default:
		break;
	}

	if (b != 0 && b != 1)
	{
		switch (b)
		{
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		default:
			break;
		}
		switch (chislo % 10)
		{
		case 1:
			cout << "���� �����" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "������ ������" << endl;
			break;
		case 5:
			cout << "���� �������" << endl;
			break;
		case 6:
			cout << "����� �������" << endl;
			break;
		case 7:
			cout << "���� �������" << endl;
			break;
		case 8:
			cout << "������ �������" << endl;
			break;
		case 9:
			cout << "������ �������" << endl;
			break;
		default:
			cout << "�������" << endl;
			break;
		}
	}
	else if (b == 1)
	{
		switch (chislo % 10)
		{
		case 0:
			cout << "������ �������" << endl;
			break;
		case 1:
			cout << "����������� �������" << endl;
			break;
		case 2:
			cout << "���������� �������" << endl;
			break;
		case 3:
			cout << "���������� �������" << endl;
			break;
		case 4:
			cout << "������������ �������" << endl;
			break;
		case 5:
			cout << "���������� �������" << endl;
			break;
		case 6:
			cout << "����������� �������" << endl;
			break;
		case 7:
			cout << "���������� �������" << endl;
			break;
		case 8:
			cout << "������������� �������" << endl;
			break;
		case 9:
			cout << "������������ �������" << endl;
			break;
		}
	}
	else
	{
		switch (chislo % 10)
		{
		case 1:
			cout << "���� �����" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "������ ������" << endl;
			break;
		case 5:
			cout << "���� �������" << endl;
			break;
		case 6:
			cout << "����� �������" << endl;
			break;
		case 7:
			cout << "���� �������" << endl;
			break;
		case 8:
			cout << "������ �������" << endl;
			break;
		case 9:
			cout << "������ �������" << endl;
			break;
		}
	}

	return EXIT_SUCCESS;
}
