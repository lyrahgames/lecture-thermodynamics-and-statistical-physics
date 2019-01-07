#include <iostream>

using namespace std;

const unsigned int n = 365;
const unsigned int k = 60;

int main(int argc, char const *argv[])
{
	float tmp = 1.0f;

	for (int i = 0; i < k; i++)
		tmp *= (float)(n-i)/(float)n;

	tmp = 1.0f-tmp;

	cout << "p = " << tmp << endl;
	
	return 0;
}