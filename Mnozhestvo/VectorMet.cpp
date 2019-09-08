#include"MySet.h"
#include"MyVector.h"

MyVector::MyVector(MyVector& v) {
	this->maxsize = v.Maxsize();
	this->pdata = new string[this->maxsize];
	this->size = v.Size();
	for (int i = 0; i < size; i++)
		this->pdata[i] = v[i];
}

void MyVector::resize(bool n) {
	if (n == 1) this->maxsize *= 1.5;
	else this->maxsize /= 1.5;
	string * a = new string[this->maxsize]; for (int i = 0; i < this->size; i++) a[i] = this->pdata[i]; this->pdata = a;
}

void MyVector::add_element(string el) {
	if (this->size + 1 >= this->maxsize) this->resize(1);
	this->pdata[size] = el;
	size++;
}

bool MyVector::delete_element(int i) {
	if (i > size) return false; else {
		for (int j = i; j < size; j++)
			if (j == size - 1) this->pdata[j].erase(); else
				this->pdata[j] = this->pdata[j + 1];
		if (this->size - 1 < this->maxsize / 2) this->resize(0);
		size--;
	}
}

ostream & operator<<(ostream & out, MyVector & v) {
	for (int i = 0; i < v.size; i++)
		out << v.pdata[i] << ';'<<' ';
	return out;
}

MyVector& MyVector:: operator=(MyVector & v) {
	this->maxsize = v.Maxsize();
	this->size = v.Size();
	this->pdata = new string[this->maxsize];
	for (int i = 0; i < size; i++)
		this->pdata[i] = v[i];
	return *this;
}

int MyVector::find(string el) {
	for (int i = 0; i < this->size; i++)
		if (this->pdata[i] == el) return i;
	return -1;
}

string MyVector::operator[](int i) {
	return this->pdata[i];
}

void MyVector::sort() {
	int ind;
	for (int j = 0; j < (size - 1); j++) {
		ind = j;
		for (int k = (j + 1); k < (size); k++) {
			if (pdata[ind].length() > pdata[k].length()) {
				ind = k;
			}
		}
		swap(pdata[ind], pdata[j]);
	}
}
