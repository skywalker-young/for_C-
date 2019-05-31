using namespace std;
const int max = 5;
int main()
{
	/*---
	int var[max] = { 0,1,2,3,4 };
	int *p;
	p = &var[max - 1];
	for (int i = max; i > 0; i--)
	{
		cout << p << endl;
		cout << *p << endl;
		p--;
	}
	---*/
	int var[max] = { 7,8,9,10,11 };
	int *p[max]; //每个元素都是指向int的指针
	p[0] = &var[4];
	p[1] = &var[1];
	p[2] = &var[2];
	p[3] = &var[3];
	p[4] = &var[4];

	for (int i = 0; i < max; i++)
	{
		cout << *p[i] << endl;
	}


}
