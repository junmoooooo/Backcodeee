#include <iostream>
#include <string>

using namespace std;
// int main() {

//     int N =2;

//     string word;
//     string imsi;
//     string finish;
    

//     for(int i = 0; i< N; i++){
//         getline(cin, word);
//     }


//     for(int j = 0; j< N; j++){

//         for(int i=0; i<N; i++ ){

//             imsi= imsi + word[j];

//         }
//             finish = finish + imsi;
//     }

//     cout << imsi << ' ' << finish;

//     return 0;
// }


int main() {
    string word[5];
    for(int i = 0; i < 5; ++i){         //5줄 입력
        cin >> word[i];                    // word를
    }
    for (int i = 0; i < 15; ++i)        //더해야지
    {
        for (int j = 0; j < 5; ++j) {   //
            
            if (word[j].length() > i) {
                cout << word[j][i];     //바꿔야지
            } 
        }
    }

    return 0;
}
