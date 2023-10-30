#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    getline(cin,str);

    int len = str.length();

    string pattern1 = "c=";
    string pattern2 = "c-";
    string pattern3 = "dz=";
    string pattern4 = "d-";
    string pattern5 = "lj";
    string pattern6 = "nj";
    string pattern7 = "s=";
    string pattern8 = "z=";
    

    size_t found1 = str.find(pattern1); // "c=" 첫 등장 위치 찾기
    size_t found2 = str.find(pattern2); // "c-" 첫 등장 위치 찾기
    size_t found3 = str.find(pattern3); // "c-" 첫 등장 위치 찾기
    size_t found4 = str.find(pattern4); // "c-" 첫 등장 위치 찾기
    size_t found5 = str.find(pattern5); // "c-" 첫 등장 위치 찾기
    size_t found6 = str.find(pattern6); // "c-" 첫 등장 위치 찾기
    size_t found7 = str.find(pattern7); // "c-" 첫 등장 위치 찾기
    size_t found8 = str.find(pattern8); // "c-" 첫 등장 위치 찾기



    while (found1 != string::npos || found2 != string::npos || found3 != string::npos || found4 != string::npos || found5 != string::npos || found6 != string::npos || found7 != string::npos || found8 != string::npos) {
        if (found1 != string::npos) {
            len--;
            found1 = str.find(pattern1, found1 + 1); // 찾은 위치 이후부터 다시 검색
        }

        else if (found2 != string::npos) {
            len--;
            found2 = str.find(pattern2, found2 + 1); // 찾은 위치 이후부터 다시 검색
        }

        else if (found3 != string::npos) {
            len--;
            found3 = str.find(pattern3, found3 + 1); // 찾은 위치 이후부터 다시 검색
        }

        else if (found4 != string::npos) {
            len--;
            found4 = str.find(pattern4, found4 + 1); // 찾은 위치 이후부터 다시 검색
        }

        else if (found5 != string::npos) {
            len--;
            found5 = str.find(pattern5, found5 + 1); // 찾은 위치 이후부터 다시 검색
        }

        else if (found6 != string::npos) {
            len--;
            found6 = str.find(pattern6, found6 + 1); // 찾은 위치 이후부터 다시 검색
        }

        else if (found7 != string::npos) {
            len--;
            found7 = str.find(pattern7, found7 + 1); // 찾은 위치 이후부터 다시 검색
        }

        else if (found8 != string::npos) {
            len--;
            found8 = str.find(pattern8, found8 + 1); // 찾은 위치 이후부터 다시 검색
        }

    }

        cout << len;
    return 0;
}
