#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "���~�H��:" << endl;
		cout << "��J��ӦW�l��" << endl;
	}


	for (int i = 1; i < argc; i = i + 2)
	{
		string kw = argv[i];
		if (kw == "-?") {
			cout << "��J��ӦW�l��" << endl;
		}


		else {
			cout << "Hello, " << argv[1] << "." << endl;
			cout << "This is " << argv[2] << ", welcome." << endl;

		}
		return 0;

	}
}