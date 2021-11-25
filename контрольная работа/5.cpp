#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream file;
	ofstream fil;
	file.open("INPUT.txt");
	fil.open("OUTPUT.txt");
	int a[1000];
	int i = 0;
	int n = 0; 
	int s = 0;
	file >> n;
	for (i = 0; i < n; i++)
	{
		file >> a[i];
	}

	s = a[0] + a[n - 1] + ((a[1] > a[n - 2]) ? a[1] : a[n - 2]);
	for (i = 1; i < n - 1; i++)
	{
		if (a[i - 1] + a[i] + a[i + 1] > s)
		{
			s = a[i - 1] + a[i] + a[i + 1];
		}

	}
	fil << s;
	file.close();
	fil.close();
	return EXIT_SUCCESS;
}