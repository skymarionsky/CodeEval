#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int run(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	//cout << n << " : ";
	int a = 0;
	int b = 1;
	int c;
	for (int i = 2; i <= n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	return c;

}

int main(int argc, const char* argv[])
{
	/*cout << argv[1] << endl;*/
	string linebuffer;
	ifstream file;
	file.open(argv[1]);

	while (file && getline(file, linebuffer)){

		cout << run(stoi(linebuffer)) << endl;


	}

	return 0;
}