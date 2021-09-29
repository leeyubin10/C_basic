#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;

	double radius;
	cout << "반지름을 입력하세요: ";
	cin >> radius;

	double area = radius * radius * PI;
	cout << "원의 면적: " << area << endl;

	double limb = 2 * PI * radius;
	cout << "원의 둘레: " << limb << endl;

	double cq = 2 * radius * 2 * radius;
	cout << "외접정사각형의 면적: " << cq << endl;

	return 0;
}