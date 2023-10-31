#include <iostream>
#include <algorithm>  //sort를 쓰기 위해

using namespace std;
int main() {
	/*
	세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 
	일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

	예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.

	세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.
	*/

	cout.tie(0);

	int N;				// 시험 본 과목 개수
	double sum = 0;		// 과목 합산
	cin >> N;

	double arr[5];	//배열은 넉넉하게 잡아도 되나봐.... 
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);		// 배열 오름차순 정렬

	// 가장 큰 점수는 가장 마지막 인덱스에 위치하게 됨
	for (int i = 0; i < N; i++) {
		sum = sum + (arr[i] / arr[N - 1]) * 100;	// (조작 된 성적 = (과목 / 최고 성적) * 100) 의 누적 합
	}

	
	
	cout << fixed << sum / N;	// 성적 평균
	return 0;


}