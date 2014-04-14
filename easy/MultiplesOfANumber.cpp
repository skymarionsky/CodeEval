#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(const string &str, char delim)
{
	istringstream iss(str);
	string tmp;
	vector<string> res;
	while (getline(iss, tmp, delim)) res.push_back(tmp);
	return res;
}

void run(int x, int n)
{
	int tmp = n;
	while (n < x){
		n += tmp;
	}
	cout << n << endl;
}

int main(int argc, const char* argv[])
{
	/*cout << argv[1] << endl;*/
	string linebuffer;
	ifstream file;
	file.open(argv[1]);
	vector<string> lines;

	while (file && getline(file, linebuffer)){
		if (linebuffer.length() == 0) continue;
		lines = split(linebuffer, ',');

		int x = stoi(lines[0]);
		int n = stoi(lines[1]);

		run(x, n);

	}

	return 0;
}