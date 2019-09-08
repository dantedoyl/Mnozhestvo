#pragma once
//файл MySet.h - описание класса MySet

#ifndef MYSET_H
#define MYSET_H
#include"MyVector.h"
#include <iostream>
#include <string>
using namespace std;

class MySet :public MyVector

{

public:
	MySet() : MyVector() {};
	MySet(string el) :MyVector(el) {};
	friend ostream& operator<<(ostream& out, MySet& s);
	MySet& operator+(MySet& s1);
	MySet& operator-(MySet& s1);
	MySet& operator*(MySet& s1);
	bool operator==(MySet& s);
	MySet operator=(MySet& s);
	void add_element(string el);
	void delete_element(string el);
	bool is_element(string el);
	~MySet() {};
};



#endif
