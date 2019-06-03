#include "pch.h"
#include <iostream>
#include "MdSpi.h"
#include <ctime> //==time.h
#include <string>

using namespace std;
                                     // 请求编号

int main()
{  
	char str1[11] = "hello";
	char str2[11] = "xy";
	//int len;
	char str3[26];
	char tme[26];
	//strcpy_s(str3, str2);
	//cout << str2;
	//strftime 转化时间格式
	//strftime(currentTime, sizeof(currentTime), "%Y/%m/%d %X", localtime(&t));
	time_t t1;
	time(&t1);
	cout << t1<<endl;
	time_t t2 = time(0);
	cout << t2<<endl; //t1==t2
	tm newtime;
	localtime_s(&newtime, &t1);
	cout << newtime.tm_hour << endl;
	cout << newtime.tm_min << endl;
	asctime_s(str3, sizeof(str3), &newtime);
	strftime(tme, 26, "%Y%m%d %X", &newtime);
	cout << tme << endl;
	cout << str3<<endl;


}
