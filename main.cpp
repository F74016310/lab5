#include<iostream>
#include"HugeInt.h"

using namespace std;

int main(){
	HugeInt x;
	HugeInt y(28825252);
	HugeInt z("783927");
	HugeInt result;

	cin >> x;
	result = x + y;
	cout << x << "+" << y << "=" << result <<endl;

	result = z-x;
	cout << result << endl;
//	cout << "Enter your phone number as (XX) XXXXXXX: ";
//	cin >> hugeInt;
//	cout << hugeInt << endl;
	return 0;
}
