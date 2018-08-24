#include <iostream>

using namespace std;

class Box {
private:
	int l, b, h;
public:
	Box()
	{
		this->l = 0;
		this->b = 0;
		this->h = 0;
	}
	Box(int length, int breath, int height)
	{
		this->l = length;
		this->b = breath;
		this->h = height;
	}
	Box(Box &box)
	{
		this->l = box.l;
		this->b = box.b;
		this->h = box.h;
	}

	int getLength()
	{
		return this->l;
	}
	int getBreadth()
	{
		return this->b;
	}
	int getHeight()
	{
		return this->h;
	}

	long long CalculateVolume()
	{
		return (long long)l*b*h;
	}
	bool operator<(Box& b)
	{
		if (this->l < b.l)
		{
			return true;
		}
		if (this->b < b.b && this->l == b.l)
		{
			return true;
		}
		if (this->h < b.h && this->b == b.b && this->l == b.l)
		{
			return true;
		}
		return false;
	}

	friend ostream& operator <<(ostream& out, Box& B)
	{
		out << B.l << " " << B.b << " " << B.h;
		return out;
	}
};

void check2()
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}
	}
}

void main()
{
	check2();
	system("pause");
}

