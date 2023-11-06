#include <iostream>
#include <algorithm>

using namespace std;
int main () {

    int N;
    int leepo[5];
    int yehpo[5];
    int leepoint = 0;
    int yehpoint = 0;

    int anpo[5] = {0};
    int hoanpo[5]= {0};

    int coin;

    cin >> N;
    for(int i =0; i<N; i++){
        
        cin >> leepo[i];
        
        cin >> yehpo[i];

    }   

    sort(leepo, leepo+N);
    sort(yehpo, yehpo+N);

    for(int i=0; i<N; i++){
    cout << leepo[i] << ' ' << yehpo[i] << ' '; 
        
        


    } 


    return 0;
}