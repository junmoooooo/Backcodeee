#include <iostream>
#include <string>
using namespace std;
int main() {

    string s;
    int ans[26]={-1};                   
    cin >> s;
    for(int i=0;i<26;i++){
        ans[i]=-1;                      // 배열 ans[]를 -1로 
    }
    
    //cout << ans;

 //if(W[i]>='a')
 
    for (int i =0; i< s.length(); i++){
        
         if (s[i] >= 'a' && s[i]<='z'){             


            ans[s[i]-'a'] = s.find(s[i],0);         
                //s[i] -'a' = 원하는 숫자를 얻기위함
                //s[i] = 알파벳이니까 숫자를 얻기 위해서 -a를 해줌 
                //결국에는  ans[s에들어가는 알파벳으니 번째가 필요한거니]                                
            
        }
        
    }
    for(int i=0;i<26;i++){
       
        cout << ans[i] << ' ';
    }
    /*
     if (W[i] >= 'a'  && W[i]<='z'){
            
            
        }
    */

    return 0;
}