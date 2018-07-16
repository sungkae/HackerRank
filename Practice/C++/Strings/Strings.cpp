#include <iostream>
#include <string>

using namespace std;

int main() {
	// Complete the program

	int		len_a, len_b;				//for length of two strings
	string	str_a, str_b;				//Two Strings
	char	tmp_char;					//Temporary save point

										//Step1. Input Two Strings
	cin >> str_a >> str_b;

	//Step2. Save Their Length
	len_a = str_a.size();
	len_b = str_b.size();

	//Step3. Print Lengths and Strings
	cout << len_a <<" "<< len_b << "\n" << str_a << str_b << "\n";

	//Step4. Swap Their First Characters
	tmp_char = str_a[0];				//Save First Character of str_a;
	str_a[0] = str_b[0];				//Swap
	str_b[0] = tmp_char;

	//Step5. Print Swapped Strings
	cout << str_a + " " + str_b << endl;

	system("pause");
	return 0;
}