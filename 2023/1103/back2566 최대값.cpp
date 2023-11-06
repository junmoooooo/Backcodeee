#include <iostream>

using namespace std;

int main () {

    int num;

    int max[101][101];

    int M = 0;

    for (int i = 0; i < 9; i++){

        for (int j = 0; j< 9; j++){

            cin >> num;
            max[i][j] = num;

            if (max[i][j] > M){
                M = max[i][j];
            }

        }
    }

    


    for (int i = 0; i < 9; i++){

        for (int j = 0; j< 9; j++){

            if (max[i][j] == M){
            
                cout << M << '\n' << i+ 1<< ' ' << j +1;
                return 0;
                break;
            }else 
                continue;

        }
    }




    
}