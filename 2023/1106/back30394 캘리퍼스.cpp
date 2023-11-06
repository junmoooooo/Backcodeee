#include <iostream>
#include <map>
#include <utility>

using namespace std;
int main() {

    int N;
    
    int x;
    int y;

    double max = -1e9;
    double min = 1e9;

    cin >> N;

    for(int i =0; i< N; i++){

        cin >> x >> y;
        
        if (max < y){
            max = y;
        }
        if (min > y){
            min = y;
        }



    }    

    cout << max - min;

    return 0;



//답은 구햇으나 왜 10^9는 안되는지..
//찬우님 말로는 int_max와 int_min을 사용하면 된다고 하니..

}