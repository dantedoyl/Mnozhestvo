#include "MyVector.h"
#include "MySet.h"


MySet& MySet::operator+(MySet& s1) {
	MySet* a = new MySet;
	*a = *this;
	MyVector* b = a;
	for (int i = 0; i < s1.size; i++)
		for (int j = 0; j < a->size; j++)
			if (a->pdata[j] == s1.pdata[i]) break; else if (j == a->size - 1) b->add_element(s1.pdata[i]);
	a->sort();
	return *a;
}


MySet& MySet:: operator*(MySet & s1) {
	MySet* a = new MySet;
	for (int i = 0; i < s1.size; i++)
		for (int j = 0; j < this->size; j++)
			if (this->pdata[j] == s1.pdata[i]) a->add_element(this->pdata[j]);
	a->sort();
	return *a;
}

MySet & MySet::operator-(MySet & s1) {
	MySet* a = new MySet;
	*a = *this;
	for (int i = 0; i < s1.size; i++)
		for (int j = 0; j < a->size; j++)
			if (a->pdata[j] == s1.pdata[i]) a->delete_element(s1.pdata[i]);
	a->sort();
	return *a;
}


ostream & operator<<(ostream & out, MySet & s) {
	MyVector* a = &s;
	out << *a;
	return out;
}

void MySet::add_element(string el) {
	if (this->is_element(el) != 1) {
		MyVector* a = this;
		a->add_element(el);
		a->sort();
	}
}

void MySet::delete_element(string el) {
	if (this->is_element(el) == 1) {
		MyVector* a = this;
		for (int i = 0; i < this->size; i++) if (this->pdata[i] == el) {
			a->delete_element(i); break;
		}
	}
}

bool MySet::operator==(MySet & s) {
	if (this->size != s.size) return false; else
		for (int i = 0; i < this->size; i++) {
			if (this->pdata[i] == s.pdata[i]) break;
			return false;
		}
	return true;
};

bool MySet::is_element(string el) {
	MyVector* a = this;
	if (a->find(el) != -1) return true;
	else return false;
}

MySet MySet::operator=(MySet & s) {
	this->maxsize = s.maxsize;
	this->size = s.size;
	for (int i = 0; i < size; i++)
		this->pdata[i] = s[i];
	return *this;
}


