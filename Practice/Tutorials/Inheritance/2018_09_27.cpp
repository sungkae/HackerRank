#include <iostream>
#include <vector>	
#include <string>

using namespace std;

class Person {
protected:
	string firstName;
	string lastName;
	int id;

public:
	Person(string firstName, string lastName, int identification)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = identification;
	}

	void printPerson()
	{
		cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
	}
};

class Student : public Person
{
private:
	vector<int> testScores;
public:
	Student(string firstName, string lastName, int identification, vector<int> scores) : Person(firstName,lastName,id)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = identification;
		this->testScores = scores;
	}

	char calculate()
	{
		int avg = 0;
		char letter;

		for (int i = 0; i < (int)testScores.size(); i++)
		{
			avg += testScores[i];
		}
		avg /= (int)testScores.size();
		if (avg >= 90)
		{
			letter = 'O';
		}
		else if (avg >= 80)
		{
			letter = 'E';
		}
		else if (avg >= 70)
		{
			letter = 'A';
		}
		else if (avg >= 55)
		{
			letter = 'P';
		}
		else if (avg >= 40)
		{
			letter = 'D';
		}
		else
		{
			letter = 'T';
		}
		return letter;
	}
};