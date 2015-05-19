#include<stdlib.h>
#include<iomanip>
#include<iostream>
#include<string>
#include<cstring>
#include"HugeInt.h"

using namespace std;
HugeInt::HugeInt(){}

HugeInt::HugeInt(int j):x(j){}

HugeInt::HugeInt(string str){
	cout << str << endl;
	char array[str.size() + 1];
	char * pStr;
	strcpy(array, str.c_str());
	x = strtoll(array,NULL,10);
}

ostream & operator<<(ostream &out, const HugeInt &num){
	out << x;
	return out;
}

istream &operator>>(istream & in, HugeInt & num){
	in >> x;
	return in;
}



