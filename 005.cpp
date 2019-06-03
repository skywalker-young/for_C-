#include "pch.h"
#include <iostream>
#include <ctime> //==time.h
#include <string>

using namespace std;
                                  
class Shares
{
public:
	float price;
	int vol;
	Shares(float p ,int v );
	Shares();
	~Shares()
	{
		cout << "has been cleared";
	}
};
Shares::Shares(float p , int v)
{
	price = p;
	vol = v;
	
} 
Shares::Shares()
{
	cout << "created" << endl;
}
int main()
{  
	Shares s1(12.8,5);
	Shares s2;
	s2.price = 12.8;
	s2.vol = 3;
	float total = s2.price*s2.vol;
	//cout << total << endl;
	cout << s1.price*s1.vol << endl;;

}
