#include <iostream>
#include <string>

using namespace std;
int main() {
    /*
    string S;
    string Word;
    int T;                      //반복횟수
    int R;
    cin >> T;
    
    string imsi;
    for (int i = 0; i < T; i++){
        
        cin >> R >> S;

    
    }
    /*
        for(int j=0; j < R; j++){
            imsi += S[0];
        } 
        
        for(int j=0; j < R; j++){
            imsi += S[1];
        }

        for(int j=0; j < R; j++){
            imsi += S[2];
        }
    */   //aaabbbccc 는 나오는데,,,

    /*
        for(int j=0; j < R; j++){
           for (int i= 0; i< S.length(); i++){

            imsi += S[i];
           }
        }
    */
    /*   for (int i= 0; i< S.length(); i++){
            for(int j=0; j < R; j++){
                cout << S[i];
            }
        }
    

    return 0;
    */

   int t;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        int r;
        string p;
        cin >> r;
        cin >> p;
 
        for(int j = 0;j < p.length();j++)
        {
            for(int k = 0;k < r;k++)
            {
                cout << p[j];
            }
        }
        cout << endl;
    }
    return 0;
}
