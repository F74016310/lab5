#ifndef HUGEINT_H
#define HUGEINT_H

#include<iostream>
#include<string>

using namespace std;

class HugeInt{
	friend ostream &operator<<(ostream&, const HugeInt&);
	friend istream &operator>>(istream&, HugeInt &);
	friend int operator+(int b, HugeInt & anObj);

	public:
	int operator+(int y){return x + y;}
		HugeInt();
		HugeInt(int j);
		HugeInt(string str);
	private:
		int x;
		string areaCode;
		string exchangeNum;
		string serialNum;
};
#endif
