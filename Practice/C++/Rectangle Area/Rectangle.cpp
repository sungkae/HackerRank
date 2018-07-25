#include <iostream>

using namespace std;

class Rectangle {
protected:
	int width, height;
public:
	void display() {
		cout << width << " " << height << endl;
	}
};

class RectangleArea : public Rectangle {
private:
	int area;
public:
	void read_input() {
		cin >> width >> height;
	}
	void display() {
		area = width * height;
		cout << area << endl;
	}
};

int main() {
	/*
	 *Declare a RectangleArea object			
	 */
	RectangleArea r_area;
	r_area.read_input();
	
	r_area.Rectangle::display();

	r_area.display();

	system("pause");
	return 0;
}