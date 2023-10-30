#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	
    string str;
    int alpha[26] = {0};

    getline(cin,str);

    for (int i =0; i < str.length(); i++){
        str[i] = toupper(str[i]);
        alpha[str[i] - 65] = alpha[str[i]- 65] + 1;         //대문자 A(65)를 빼줘야 숫자를 사용할수 있으메
    }

    int max = 0;

    int index = -1;

    for ( int i =0; i < 26; i++){
        if (alpha[i] > max){
            max = alpha[i];
            index = i;

        }
    }

    for ( int i =0; i < 26; i++){
        
        if (i == index)
			continue;
        if (alpha[i] == max)
		{
			cout << '?';
			return 0;
		}

    }
    
    cout << (char)(index+65);
	return 0;
}