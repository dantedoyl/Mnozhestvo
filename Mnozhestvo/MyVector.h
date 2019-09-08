#pragma once
//файл MyVector.h - описание класса MyVector
#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 5;

class MyVector
{
public:
	MyVector(){
		maxsize = MAX_SIZE;
		pdata = new string[maxsize];
		size = 0;
	}
	MyVector(string el, int maxsz = MAX_SIZE) {
		maxsize = MAX_SIZE;
		pdata = new string[maxsize];
		pdata[0] = el;
		size = 1;
	};
	MyVector(MyVector& v);
	~MyVector() { delete[] pdata; };
	void add_element(string el);
	bool delete_element(int i);
	string operator[](int i);
	void sort();
	int Size() { return size; }
	int Maxsize() { return maxsize; }
	int find(string el);
	MyVector& operator=(MyVector& v);
	friend ostream& operator<<(ostream& out, MyVector& v);

protected:
	int maxsize;
	int size;
	string* pdata;
private:
	void resize(bool);
};




#endif
