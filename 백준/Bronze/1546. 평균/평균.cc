#include <iostream>
using namespace std;
 
int main() {
	int n, M = 0;
	double score[1000], sum = 0;
	cin >> n;
	
	// 점수 리스트와 최고점 구하기
	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (score[i] > M) {
			M = score[i];
		}
	}
 
	//새로운 점수의 합 구하기
	for (int i = 0; i < n; i++) {
		score[i] = score[i] / M * 100;
		sum += score[i];
	}
	cout << sum / n;
 
	return 0;
}