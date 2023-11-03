#include <iostream>

using namespace std;
int main(){

    int N, M;

    int dlq;
    int fur;

    cin >> N >> M ;
    int god[101][101];
    int duf[101][101];

    for (int i =0; i < N; i++){
        for (int j=0; j<M; j++) { 
            cin >> dlq;

            god[i][j] = dlq;
            
            
        }
    }

    for (int i =0; i < N; i++){
        for (int j=0; j<M; j++) {
            
             cin >> fur;
            
            duf[i][j] = fur;

            
        }
    }

    for (int i =0; i < N; i++){
        for (int j=0; j<M; j++) {
     
        cout << god[i][j] + duf[i][j] << ' ';
            
        }
        cout << "\n";
    }


    return 0;
}