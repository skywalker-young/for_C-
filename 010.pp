#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <algorithm>
using namespace std;

void  threadCallback(int x, string str)
{
	cout << "passed number=" << x << endl;
	cout << "passed string=" << str << endl;
}

class Wallet {

	int mMoney;
public :
	Wallet():mMoney(0){}
	int getMoney() { return mMoney; }
	void addMoney(int money)
	{
		for (int i=0;i<money;i++)
		{
			mMoney++;
		}
	}

};
int testMultithreadWallet() {
	Wallet walletObject;
	std::vector<std::thread> threads;
	for (int i = 0; i < 5; i++) {
		threads.push_back(std::thread(&Wallet::addMoney, &walletObject, 100));
	}

	for (int i = 0; i < 5; i++) {
		threads.at(i).join();
	}

	return walletObject.getMoney();
}

int main()
{
	/*int x = 10;
	string str = "sample string";
	thread threadObj(threadCallback, x, str);
	cout<<threadObj.get_id()<<"\n";
	threadObj.join();
	thread threadObj2(threadCallback,15, "xychef");
	cout << threadObj2.get_id() <<"\n" ;
	threadObj2.join();
	*/
	int val = 0;
	for (int k = 0; k < 100; k++) {
		if ((val = testMultithreadWallet()) != 500) {
			cout << "Error at count = " << k << " Money in Wallet = " << val << std::endl;
		}
	}
	 
}
