#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int convert;
	try {
		convert = stoi(s);
		cout << convert << endl;
	}
	catch (exception& e)
	{
		cout << "Bad String" << endl;
	}

	return 0;
}