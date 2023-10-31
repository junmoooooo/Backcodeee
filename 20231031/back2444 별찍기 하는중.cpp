#include <iostream>
#include <string>

using namespace std;
int main() {

    // int N;
    // string star;


    // cin >> N;

    // for( int i = 0; i< 2*N- 1; i++){
    //     for( int j = 0; j< 2*N- 1; j++){

    //         if (i==0){
    //             star= "    *";
    //         }
    //         if (i==1){
    //             star= "   ***";
    //         }
    //         if (i==2){
    //             star= "  *****";
    //         }


    //     }
    //         cout << star << "\n";



// 정답
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++) {                       //첫번째 줄에는
		for(int k = 0; k < n - i; k++)                  //공백먼저 출력하고
			cout << ' ';
		for(int k = 0; k < i + (i - 1); k++)            // 별을 출력하라..
			cout << '*';

		cout << '\n';	
	}

	for(int i = n - 1; i > 0; i--) {                    //피라미드 별을 뒤집기함..
		for(int k = 0; k < n - i; k++)
			cout << ' ';
		for(int k = 0; k < i + (i - 1); k++)
			cout << '*';

		cout << '\n';	
	}

// 해설
// 필자의 생각으로는 별 찍기 문제는 해설을 듣는 거보다는, 혼자 깨닫는 게 더 좋은 것 같다.

// 입력받은 수를 n이라고 할 때
// 별은 피라미드 형식으로 n * 2 - 1줄에 걸쳐 출력하면 되는 문제이다.

// 먼저 for문을 줄을 의미하는 1부터 n번까지 돌린다.

// 1번째 줄은 (n - 1)개의 공백 후 별을,
// 2번째 줄은 (n - 2)개의 공백 후 별을 하는데 

// i번째 줄 -> (n - i)개의 공백 후 별을 출력하는 규칙이 있다.

// 별의 개수는 i번째 줄 -> i + (i - 1) = 2i - 1개의 별을 출력하면 된다.

 

// 위의 공식을 이용하여 1 ~ n번 줄까지 출력한 후,
// 피라미드 이므로 반대로 (n - 1)번 ~ 1번 줄까지 출력하면 된다.

// 	return 0;

            

    // }



    return 0;
}