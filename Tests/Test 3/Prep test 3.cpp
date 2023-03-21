
#include <iostream>;
#include<cmath>;
using namespace std;


//struct Point {
//	double x = 0.0, y = 0.0;
//};
//
//bool CheckRectangular(const Point& a, const Point& b, const Point& c) {
//	if ((pow((a.x - b.x), 2) + pow((c.y - a.y), 2)) == (sqrt(pow((c.x - b.x), 2) + pow((c.y - b.y), 2)))) return true;
//	if ((pow((b.x - c.x), 2) + pow((a.y - b.y), 2)) == (sqrt(pow((a.x - c.x), 2) + pow((a.y - c.y), 2)))) return true;
//	if ((pow((c.x - b.x), 2) + pow((a.y - c.y), 2)) == (sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2)))) return true;
//	if ((pow((a.x - c.x), 2) + pow((b.y - a.y), 2)) == (sqrt(pow((b.x - c.x), 2) + pow((b.y - c.y), 2)))) return true;
//	if ((pow((b.x - a.x), 2) + pow((c.y - b.y), 2)) == (sqrt(pow((c.x - a.x), 2) + pow((c.y - a.y), 2)))) return true;
//	if ((pow((c.x - a.x), 2) + pow((b.y - c.y), 2)) == (sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2)))) return true;
//	return false;
//}
//
//int main() {
//	Point a, b, c;
//	cin >> a.x >> a.y;
//	cin >> b.x >> b.y;
//	cin >> c.x >> c.y;
//	cout << CheckRectangular(a, b, c) << endl;
//	return 0;
//}


int* Extract( const int number) {
	int count = 0;
	int num = number;
	while (num != 0) {
		num / 10;
		count++;
	}
	
	int array[200];
	for (int i = 0; i < count; i++) {
		array[i] = number % 10;
		number / 10;
	}
	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			if (array[i] > array[j]) swap(array[i], array[j]);
		}
	}
	int i = count;
	array[i + 1] == -1;
	return array;
}

int main() {
	int number;
	cin >> number;
	int min, max;
	cin >> min >> max;

	int* p = Extract(number);
	for (int i = 0; i < 200; i++) {
		cout << p[i];
	}

}
