//
#include "pch.h"
#include <string>
#include <iostream>
#include <vector>
#include <thread>
using namespace std;

void foo(int x)
{
	//int x = 3;
	for (int i = 0; i < x; i++)
	{
		cout << "using foo:"<<this_thread::get_id()<<'\n';
	}
}

class thread_obj
{
public: int y;
		void operator()(int x) //将类对象作为参数，需要重载运算符()
		{
			for (int i = 0; i < x; i++)
				cout << "using class" << this_thread::get_id() << '\n';
		}
};
 
int main()
{  
	cout <<"using main:"<< this_thread::get_id() << '\n';
	//函数传参
	thread th1(foo,2);
	//start thread t1
	//wait for t1 to finish
	th1.join();
	//detach挂起，运行完th2后再执行th1
	thread th2(thread_obj(), 1);
	th2.join();
	cout << "ending main:" << this_thread::get_id() << '\n';
	
}
