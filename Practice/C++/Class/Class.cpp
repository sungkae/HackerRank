#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
private:
	int		age;
	string	first_name;
	string	last_name;
	int		standard;
public:
	int get_age();
	void set_age(int a_age);
	string get_first_name();
	void set_first_name(string a_name);
	string get_last_name();
	void set_last_name(string a_name);
	int get_standard();
	void set_standard(int a_standard);
	string to_string() {
		string result = std::to_string(age) +"," + first_name + "," + last_name + "," + std::to_string(standard);
		return result;
	}
};
int Student::get_age() {
	return age;
}
void Student::set_age(int a_age) {
	age = a_age;
}
string Student::get_first_name() {
	return first_name;
}
void Student::set_first_name(string a_name) {
	first_name = a_name;
}
string Student::get_last_name() {
	return last_name;
}
void Student::set_last_name(string a_name) {
	last_name = a_name;
}
int Student::get_standard() {
	return standard;
}
void Student::set_standard(int a_standard) {
	standard = a_standard;
}

int main() {
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << "\n";
	cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	cout << st.get_standard() << "\n";
	cout << "\n";
	cout << st.to_string();

	return 0;
}