#include<iostream>
using namespace std;

int main()
{
	int num;
	

	bool bo;
	

	double dou;
	
	float f;

	char ch;


	cout << "int\n";
	cout << numeric_limits<int>::max() << '\n';
	cout << numeric_limits<int>::min() << '\n';
	cout << numeric_limits<int>::lowest() << '\n';

	cout << "bool\n";
	cout << numeric_limits<bool>::max() << '\n';
	cout << numeric_limits<bool>::min() << '\n';
	cout << numeric_limits<bool>::lowest() << '\n';

	cout << "double\n";
	cout << numeric_limits<double>::max() << '\n';
	cout << numeric_limits<double>::min() << '\n';
	cout << numeric_limits<double>::lowest() << '\n';

	cout << "float\n";
	cout << numeric_limits<float>::max() << '\n';
	cout << numeric_limits<float>::min() << '\n';
	cout << numeric_limits<float>::lowest() << '\n';

	cout << "char\n";
	cout << numeric_limits<char>::max() << '\n';
	cout << numeric_limits<char>::min() << '\n';
	cout << numeric_limits<char>::lowest() << '\n';

	return 0;
}