#pragma once
#include<ostream>
class Arraylist
{
private:
	int* data;
	int capacity;
	int count;
	void expand(int count = 1);
	void swap(int posi, int posj);
	int ind(int index);

public:
	Arraylist(int capacity = 10);
	Arraylist(const Arraylist& list);
	~Arraylist();

	
	void pushend(int element);
	void pushbegin(int element);
	void insert(int element, int position);
	int extractbegin();
	int extractend();
	int extract(int position);
	
	int& operator[](int pos);
	
	void sort();

	friend std::ostream& operator<<(std::ostream& stream, Arraylist& list);
};

