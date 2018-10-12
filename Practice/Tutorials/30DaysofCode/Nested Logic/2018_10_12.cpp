#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int d1, d2, m1, m2, y1, y2;
	cin >> d1 >> m1 >> y1;
	cin >> d2 >> m2 >> y2;
	int late;
	late = (y1*12*31 + (m1 * 12) + (d1 * 31)) - (y2*12*31 + (m2 * 12) + (d2 * 31));
	if (late > 0)
	{
		if (y1 - y2 > 0)
		{
			cout << "10000" << endl;
		}
		else if (m1 - m2 > 0)
		{
			cout << (m1 - m2) * 500 << endl;
		}
		else if (d1 - d2 > 0)
		{
			cout << (d1 - d2) * 15 << endl;
		}
	}
	else cout << 0 << endl;
	system("pause");
	return 0;
}