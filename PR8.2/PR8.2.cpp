#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(const char* s)
{
	int k = 0;
	if (s[0] == 'b')
		k++;
	for (int i = 0; s[i + 1] != 0; i++)
		if (s[i] == ' ' && s[i + 1] == 'b')
			k++;
	return k;
}

int main()
{
	char str[101];

	cout << "Enter modified: " << endl;
	cin.getline(str, 100);

	cout << "Number of words started with b = " << Count(str) << endl;

	return 0;
}