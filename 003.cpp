#include "pch.h"
#include <iostream>

#include <ctime> //==time.h
#include <string>

using namespace std;
int main()
{/*--
    // This program uses _time64 to get the current time
// and then uses _localtime64_s() to convert this time to a structure
// representing the local time. The program converts the result
// from a 24-hour clock to a 12-hour clock and determines the
// proper extension (AM or PM).
	struct tm newtime;
	char am_pm[] = "AM";
	__time64_t long_time;
	char timebuf[26];
	errno_t err;

	// Get time as 64-bit integer.
	_time64(&long_time);
	// Convert to local time.
	err = _localtime64_s(&newtime, &long_time);
	if (err)
	{
		printf("Invalid argument to _localtime64_s.");
		exit(1);
	}
	if (newtime.tm_hour > 12)        // Set up extension.
		strcpy_s(am_pm, sizeof(am_pm), "PM");
	if (newtime.tm_hour > 12)        // Convert from 24-hour
		newtime.tm_hour -= 12;        // to 12-hour clock.
	if (newtime.tm_hour == 0)        // Set hour to 12 if midnight.
		newtime.tm_hour = 12;

	// Convert to an ASCII representation.
	err = asctime_s(timebuf, 26, &newtime);
	if (err)
	{
		printf("Invalid argument to asctime_s.");
		exit(1);
	}
	printf("%.19s %s\n", timebuf, am_pm);
	*/

	errno_t err;
	time_t long_time;
	time(&long_time);
	struct tm newtime;
	//err = localtime_s(&newtime,&long_time);
	localtime_s(&newtime, &long_time);
	char timebuf[26];
	err = asctime_s(timebuf, sizeof (timebuf), &newtime);
	printf("%s \n", timebuf);
	cout << newtime.tm_hour << endl;


}
