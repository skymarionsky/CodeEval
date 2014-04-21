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

void run(vector<string>str,vector<string>str2)
{
	int cnt = 0;
	vector<string>::iterator it2 = str2.begin();
	
	for (vector<string>::iterator it = str.begin(); it != str.end(); it++){
		while (it2 != str2.end() && stoi(*it) >= (stoi(*it2))){
			if (stoi(*it) == stoi(*it2)){
				if (cnt>0) cout << ",";
				cout << *it;
				cnt++;
			}
			it2++;
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
		tmp = split(linebuffer, ';');
		run(split(tmp[0],','),split(tmp[1],','));
	}

	return 0;
}