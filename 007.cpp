#include "pch.h"
#include <iostream>

#include <ctime> //==time.h
#include <string>
#include<map>

using namespace std;
                                  

int main()
{  
	//map对象是键值-内容（key-value)关系对应的
	map<int, int> shares;
    //前一个int为索引，后一个int为数值
	int price[] = {3,8,98,18,47,67,4,88};
	//cout << sizeof(price) << endl;  //32
	/*for (int i = 0; i <= sizeof(price); i++)
	{
		shares[i] = price[i];
	}*/
	shares.insert(make_pair(1, 3));
	shares.insert(make_pair(3, 39));
	shares.insert(make_pair(4, 145));
	shares.insert(make_pair(2, 32));
	shares.insert(make_pair(6, 63));
	shares.insert(make_pair(5, 52));
	shares.insert(make_pair(7, 52));
	shares.insert(make_pair(7, 22));
	//输出stl必须要iterator
	map<int, int>::iterator it;
	for (it = shares.begin(); it != shares.end(); it++)
	{
		cout << it->first << "value" << it->second << endl;
	}
	it = shares.find(8);
	if(it==shares.end())
	{
		cout << "not find" << '\n';
	}
	else {
		cout << it->second<<'\n';
	}
	cout << shares.count(7);
}
