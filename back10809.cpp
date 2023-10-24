#include <iostream>

using namespace std;
int main() {

    char W[101];

    cin >> W;

    //cout << W[0];


 
    for (int i =97; i< 123; i++){
        
        if (W[i] != i  ){
            
            cout << -1;
            
        }
        if (W[i] == i) {
            cout << i << ' ';    
        }

        cout << i << ' ';
    }

    return 0;
}