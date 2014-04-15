#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(int argc, const char* argv[])
{
	vector<int> n(12 * 12);
	
	unsigned int length = 1;

	for (int i = 0; i < 12; i++){
		for (int j = 0; j < 12; j++){
			int val = (i + 1)*(j + 1);
			n[i * 12 + j] = val;
			if (j == 0){
				ostringstream oss;
				oss << val;
				string tmp(oss.str());
				if (tmp.length() > length) length = tmp.length();
			}
		}
	}

	for (int i = 0; i < 12; i++){
		for (int j = 0; j < 12; j++){
			ostringstream oss;
			oss << n[i*12+j];
			string tmp(oss.str());
			unsigned int width = (j == 0) ? length : 4;
			for (unsigned int k = 0; k < width - tmp.length(); k++){
				cout << " ";
			}
			cout << tmp;
		}
		cout << endl;
	}

	return 0;
}