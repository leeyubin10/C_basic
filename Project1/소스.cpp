#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;

	double radius;
	cout << "�������� �Է��ϼ���: ";
	cin >> radius;

	double area = radius * radius * PI;
	cout << "���� ����: " << area << endl;

	double limb = 2 * PI * radius;
	cout << "���� �ѷ�: " << limb << endl;

	double cq = 2 * radius * 2 * radius;
	cout << "�������簢���� ����: " << cq << endl;

	return 0;
}