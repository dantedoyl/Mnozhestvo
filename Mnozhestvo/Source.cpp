


//���� lab4 ��� ������������ ������� MyVector � MySet

#include <iostream>
#include "MyVector.h"
#include "MySet.h"
//#include "MyVector.cpp"
//#include "MySet.cpp"
using namespace std;

int main()
{
	setlocale(0, "russian");
	MyVector v("Hello!");
	v.add_element("������!");
	v.add_element("������!");
	v.add_element("������!");
	v.add_element("������!");
	v.add_element("������!");
	cout << "������ v: " << v << endl;
	v.add_element("������!");
	v.add_element("������!");
	v.add_element("������!");
	cout << "������ v: " << v << endl;
	MyVector v1 = v;
	cout << "������ v1: " << v1 << endl;
	for (int i = 0; i < MAX_SIZE; i++)
		v1.delete_element(0);
	cout << "������ v1: " << v1 << endl;
	MySet s("Yes"), s2, s1;
	s.add_element("������!");
	s.add_element("No");
	string str = "Hello!";
	s.add_element(str);
	cout << "��������� s: " << s << endl;
	s1.add_element("Cat");
	s1.add_element("No");
	s1.add_element("������!");
	cout << "��������� s1: " << s1 << endl;
	s2 = s1 - s;
	cout << "��������� s2=s1-s: " << s2 << endl;
	cout << "��������� s1: " << s1 << endl;
	cout << "��������� s: " << s << endl;
	s2 = s - s1;
	cout << "��������� s2=s-s1: " << s2 << endl;
	cout << "��������� s1: " << s1 << endl;
	cout << "��������� s: " << s << endl;
	s2 = s1 + s;
	cout << "��������� s2=s1+s: " << s2 << endl;
	cout << "��������� s1: " << s1 << endl;
	cout << "��������� s: " << s << endl;
	s2 = s1 * s;
	cout << "��������� s2=s1*s: " << s2 << endl;
	cout << "��������� s1: " << s1 << endl;
	cout << "��������� s: " << s << endl;
	MySet s3 = s2;
	cout << "��������� s3=s2: " << s3 << endl;
	if (s3 == s2)
		cout << "��������� s3=s2\n";
	else
		cout << "��������� s3!=s2\n";
	if (s3 == s1)
		cout << "��������� s3=s1\n";
	else
		cout << "��������� s3!=s1\n";
	if (s1 == s3)
		cout << "��������� s1=s3\n";
	else
		cout << "��������� s1!=s3\n";
	system("pause");
	return 0;
}