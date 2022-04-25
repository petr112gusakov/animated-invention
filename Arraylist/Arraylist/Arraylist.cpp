#include "Arraylist.h"
void Arraylist::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

void Arraylist::swap(int posi, int posj)
{
	int temp;
	temp = data[posi];
	data[posi] = data[posj];
	data[posj] = temp;
	
}

int Arraylist::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

Arraylist::Arraylist(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

Arraylist::Arraylist(const Arraylist& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

Arraylist::~Arraylist()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

void Arraylist::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void Arraylist::pushbegin(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->count++;
	for (int i = this->count; i > 0; --i)
	{
		this->data[i] = this->data[i - 1];
	}
	this->data[0] = element;
	

}

void Arraylist::insert(int element, int position)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->count++;

	for (int i = this->count; i > position; --i)
	{
		this->data[i] = this->data[i - 1];
	}
	this->data[position] = element;
}

int Arraylist::extractbegin()
{
	int ellement = this->data[0];
	this->count--;
	for (int i = 0; i < this->count; ++i)
	{
		this->data[i] = this->data[i + 1];
	}
	return ellement;
}

int Arraylist::extractend()
{
	this->count--;
	return this->data[this->count];
}

int Arraylist::extract(int position)
{
	int ellement = this->data[position];
	this->count--;
	for (int i = position; i < this->count; ++i)
	{
		this->data[i] = this->data[i + 1];
	}
	return ellement;;
}

int& Arraylist::operator[](int pos)
{
	return data[ind(pos)];
}

void Arraylist::sort()
{
	for (int i = this->count-1; i >= 1; i--) {
		for (int j = 0; j < i; j++)
			if (this->data[j] > this->data[j+1]) {
				int temp = this->data[j];
				this->data[j] = this->data[j+1];
				this->data[j+1] = temp;
			}
	}

}

std::ostream& operator<<(std::ostream& stream, Arraylist& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}