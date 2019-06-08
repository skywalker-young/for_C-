#include "pch.h"
#include <string>
#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int>divide(int dividend, int divisor)
{
	//return make_tuple(dividend / divisor, dividend % divisor);
	return { dividend / divisor, dividend % divisor };

}

 
 
int main()
{  
	// Declaring tuple 
	tuple <char, int, float> geek;
	// Assigning values to tuple using make_tuple() 
	geek = make_tuple('a', 10, 15.5);
	// Printing initial tuple values using get() 
	cout << "The initial values of tuple are : ";
	cout << get<0>(geek) << " " << get<1>(geek);
	cout << " " << get<2>(geek) << endl;
	// Use of get() to change values of tuple 
	get<0>(geek) = 'b';
	get<2>(geek) = 20.5;

	 
	cout << "The size of tuple is : ";
	cout << tuple_size<decltype(geek)>::value << endl;

	int i_val;
	char ch_val;
	float f_val;

	// Initializing tuple 
	tuple <int, char, float> tup1(20, 'g', 17.5);
	// Use of tie() without ignore 
	tie(i_val, ch_val, f_val) = tup1;
	cout << "The unpacked tuple values are : ";
	cout << i_val << ch_val << f_val<<'\n';
	int quo, rem;
	 
	tie(quo , rem) = divide(17, 3); //tie将变量的引用整合成一个tuple，从而实现批量赋值
	cout << quo << ',' << rem << endl;
 
	 
}
