#include <iostream>
#include <string>

using namespace std;
int main() {
    int second = 0;
    string what;

    getline(cin, what);

    for( int i =0; i< what.length(); i++){

        if (what[i] == 'A' || what[i] == 'B' || what[i] == 'C' ){

            second += 3;
             
        }
        else if (what[i] == 'D' || what[i] == 'E' || what[i] == 'F' ){

            second += 4;
             
        }
        else if (what[i] == 'G' || what[i] == 'H' || what[i] == 'I' ){

            second += 5;
             
        }
        else if (what[i] == 'J' || what[i] == 'K' || what[i] == 'L' ){

            second += 6;
             
        }
        else if (what[i] == 'N' || what[i] == 'M' || what[i] == 'O' ){

            second += 7;
             
        }
        else if (what[i] == 'P' || what[i] == 'Q' || what[i] == 'R' || what[i]== 'S' ){

            second += 8;
             
        }
        else if (what[i] == 'T' || what[i] == 'U' || what[i] == 'V' ){

            second += 9;
             
        }
        else if (what[i] == 'W' || what[i] == 'X' || what[i] == 'Y' || what[i] == 'Z'){

            second += 10;
             
        }
        

    }
    

    cout << second;

    return 0;
}