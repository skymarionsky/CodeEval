#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(const string& str, char delim)
{
	istringstream iss(str);
	string tmp;
	vector<string> res;
	while (getline(iss, tmp, delim))res.push_back(tmp);
	return res;
}

void run(int n, int m)
{
	int t = 0;
	while (m*t < n){
		t++;
	}
	if (m*t > n){
		t--;
	}
	int res = n - m*t;
	cout << res << endl;
}

int main(int argc, const char* argv[])
{
	ifstream file(argv[1]);
	string linebuffer;
	vector<string> tmp;

	while (file && getline(file, linebuffer)){
		if (linebuffer.length() == 0) continue;
		tmp = split(linebuffer, ',');
		run(stoi(tmp[0]), stoi(tmp[1]));
	}

	return 0;
}