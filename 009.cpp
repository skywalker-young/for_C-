#include "pch.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

template <typename T,typename T2> void change(T& a, T2& b) {
	//T tmp = a;
	T2 tmp=static_cast<T2>(a);
	a = static_cast<T> (b);
	b = tmp;
}
int main()
{
	float a = 9.878;
	char b = 'y';
	int c=5;
	change(a, c);
	cout << a << '\n' << b << '\n'<<c<<'\n';
	
	
}
