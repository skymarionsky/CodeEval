#include <iostream>
#include <sstream>
using namespace std;

bool isPrime(int num)
{
    for(int i=num-1;i>1;i--){
        if(num%i == 0) return false;
    }
    return true;
}

bool isPalindrome(int num)
{
    stringstream ss;
    ss << num;
    string str = ss.str();
    int len = static_cast<int>(str.size()) - 1;
    for(int i=0;i<static_cast<int>(len/2);i++){
        if(str[i] != str[len-i]) return false;
    }
    return true;
}

int main(int argc, const char * argv[])
{
    for(int i=1000;i>0;i--){
        if(isPrime(i) && isPalindrome(i)){
            cout << i;
            return 0;
        }
    }
    
    return 0;
}
