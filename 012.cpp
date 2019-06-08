#include "pch.h"
#include <string>
#include <iostream>
#include <tuple>
using namespace std;

void compare(int a, int b, int* add_great, int* add_small)
{
	if (a > b) {

		// a is stored in the address pointed 
		// by the pointer variable *add_great 
		*add_great = a;
		*add_small = b;
	}
	else {
		*add_great = b;
		*add_small = a;
	}
}
 
//结构，常用来返回多个值
struct greatSmall {
	int greater, smaller;
};
greatSmall findgreatsmall(int a,int b)//class也有相同效果
{
	greatSmall s;
	if (a > b) {
		s.greater = a;
		s.smaller = b;
	}
	else
	{
		s.greater = b;
		s.smaller = a;
	}
	return s;
}

void find(int a, int b, int arr[])
{

	// Store the greater element at 
	// 0th index of the array 
	if (a > b) {
		arr[0] = a;
		arr[1] = b;
	}
	else {
		arr[0] = b;
		arr[1] = a;
	}
}
int main()
{
/*	int great, small, x, y;
	
	printf("Enter two numbers: \n");
	cin >> x >> y;

	// The last two arguments are passed 
	// by giving addresses of memory locations 
	compare(x, y, &great, &small);
	printf("\nThe greater number is %d and the"
		"smaller number is %d",great, small);
	 */
	 
	greatSmall out;
	out = findgreatsmall(108, 98);
	cout << out.greater << ','<<out.smaller<<endl;

	int a = 9, b = 99;
	int arr[2];
	find(b,a,arr);
	cout << "arr[1]:"<<arr[1] << endl;
}
