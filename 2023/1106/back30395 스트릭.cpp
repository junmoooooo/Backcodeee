#include <iostream>

using namespace std;
int main() {

    int N;
    int P[1001] = {0};

    int count = 0;
    int max= 0;
    int final =0 ;

    cin >> N;

    for (int i=0;  i < N; i++ ){

        cin >> P[i];

    }

    for (int i=0;  i < N; i++ ){

        if (P[i]  > 0){
            count = count +1;
            max = count;
        }else if( P[i] ==0){
            
            if(P[i-1] ==0){
                count = 0;
            }else{
                count = count;
            }
            
        }
        if(final < max){
        final = max;
        }
        // cout << count << ' ';
    }

     cout << final;
    

    return 0;
}
