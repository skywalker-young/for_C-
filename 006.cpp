
#include <ctime> //==time.h
#include <string>
#include <vector>
using namespace std;
                                  

int main()
{  
	vector<int> x;
	for (int i = 0; i < 10; i++)
	{
		x.push_back(i);
		cout << x[i] << ",";
	}
	cout <<"\n"<< "iterator" << endl;
	vector<int>::iterator it;//声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素 
	for (it = x.begin(); it != x.end(); it++)
	{
		cout << *it << " ";
	}

	for (int i = 0; i < 7; i++)
	{
		x.pop_back();
	}
	cout << endl;
	for (int i = 0; i < x.size(); i++)
	{
		cout << x[i] << ",";
	}
	cout <<"capacity"<< x.capacity();
