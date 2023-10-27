#include <iostream>
#include <string>

using namespace std;
int main() {

    string W = "sdfsdf sdfas";

    int count =0;
    getline(cin, W);

   // cout << W << "\n";

    for (int i = 1; i< W.length() ; i++){

        if (W[i] == ' '){
             count += 1;
        }

        //cout << W[i];
    } 
    

    if (W[W.length()-1] == ' '){
        count = count -1;
    }

    cout << count +1;

    return 0;
}