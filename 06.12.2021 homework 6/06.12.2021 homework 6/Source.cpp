#include <iostream>
#include <stdio.h>
#include <clocale>
using namespace std;

void print(int* a, int count)
{
	for (int i = 0; i < count; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return;
}

void append_back(int*& a, int& count, int& capacity, int value)
{
	if (capacity <= count)
	{
		int* b = new int[capacity * 2];
		capacity *= 2;
		for (int i = 0; i < count; ++i)
		{
			b[i] = a[i];
		}
		b[count] = value;

		delete[] a;
		a = b;
	}
	else
	{
		a[count] = value;
	}
	count++;
	return;
}

void append_first(int*& a, int& count, int& capacity, int value)
{
	if (capacity <= count)
	{
		int* b = new int[capacity * 2];
		capacity *= 2;
		for (int i = 0; i < count; ++i)
		{
			b[i + 1] = a[i];
		}
		b[0] = value;

		delete[] a;
		a = b;
	}
	else
	{
		int c = a[0];
		for (int i = 1; i < count + 1; ++i)
		{
			swap(a[i], c);
		}
		a[0] = value;
	}
	count++;
	return;
}

void pop_back(int*& a, int& count, int& capacity)
{
	count--;
	int* b = new int[capacity];

	for (int i = 0; i < count; ++i)
	{
		b[i] = a[i];
	}

	delete[] a;
	a = b;

	return;
}

void pop_first(int*& a, int& count, int& capacity)
{
	count--;
	int* b = new int[capacity];

	for (int i = 1; i < count + 1; ++i)
	{
		b[i - 1] = a[i];
	}

	delete[] a;
	a = b;

	return;
}

void reversing(int*& a, int& count)
{
	for (int i = 0; i < count / 2; ++i)
	{
		swap(a[i], a[count - i - 1]);
	}
	return;
}

int main(int argc, const char* argv[])
{
	setlocale(LC_ALL, "Russian");

	bool(dontworking) = false;

	int capacity = 1;
	int count = 1;
	int* a = new int[capacity] {0};

	while (!dontworking)
	{
		system("cls");
		cout << "_____МЕНЮ_____" << endl;
		cout << "0. Выход из программы." << endl;
		cout << "1. Вывод текущего состояния массива." << endl;
		cout << "2. Добавить элемент в конец массива." << endl;
		cout << "3. Добавить элемент в начало массива." << endl;
		cout << "4. Удалить элемент из конца массива." << endl;
		cout << "5. Удалить элемент из начала массива." << endl;
		cout << "6. Развернуть массив." << endl;

		char c = 0;
		cin >> c;

		switch (c)
		{
		case 48:
		{
			dontworking = true;
			break;
		}
		case 49:
		{
			print(a, count);
			cout << capacity << endl;
			break;
		}
		case 50:
		{
			int value_d = 0;
			cin >> value_d;
			append_back(a, count, capacity, value_d);
			break;
		}
		case 51:
		{
			int value_f = 0;
			cin >> value_f;
			append_first(a, count, capacity, value_f);
			break;
		}
		case 52:
		{
			pop_back(a, count, capacity);
			break;
		}
		case 53:
		{
			pop_first(a, count, capacity);
			break;
		}
		case 54:
		{
			reversing(a, count);
			break;
		}
		}

	}

	return EXIT_SUCCESS;
}