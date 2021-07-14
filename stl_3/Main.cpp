#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color 1F");

	cout << "c";

	return 0;
}