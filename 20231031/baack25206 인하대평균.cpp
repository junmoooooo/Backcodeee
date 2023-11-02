#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {
    
    double N = 20;
    string subject;
    double P;
    string G;
    double sum=0;
    double Psum =0;

    map<string, double> podouble_sub;

    podouble_sub.insert({"A+", 4.5});
    podouble_sub.insert({"A0", 4.0});
    podouble_sub.insert({"B+", 3.5});
    podouble_sub.insert({"B0", 3.0});
    podouble_sub.insert({"C+", 2.5});
    podouble_sub.insert({"C0", 2.0});
    podouble_sub.insert({"D+", 1.5});
    podouble_sub.insert({"D0", 1.0});
    podouble_sub.insert({"F", 0.0});
  
    for(double i =0; i<N; i++){
        cin >> subject >> P >> G;    
    
        if (G != "P"){
            Psum += P;
            sum += P * podouble_sub[G];
        }
        
    }   

    cout.precision(6);
	cout << fixed;
    cout << sum/Psum;

    return 0;
}