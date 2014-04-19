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

void run(vector<string>str)
{
	int tmp = 0;
	for (vector<string>::iterator it = str.begin(); it != str.end(); it++){
		if (tmp < stoi(*it)){
			if (tmp != 0) cout << ',';
			tmp = stoi(*it);
			cout << tmp;
		}
	}
	cout << endl;
}

int main(int argc, const char* argv[])
{
	ifstream file(argv[1]);
	string linebuffer;
	vector<string> tmp;

	while (file && getline(file, linebuffer)){
		if (linebuffer.length() == 0) continue;
		tmp = split(linebuffer, ',');
		run(tmp);
	}

	return 0;
}