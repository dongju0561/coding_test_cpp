/*
정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소의 평균값을 return하도록 solution 함수를 완성해주세요.

0 ≤ numbers의 원소 ≤ 1,000
1 ≤ numbers의 길이 ≤ 100
정답의 소수 부분이 .0 또는 .5인 경우만 입력으로 주어집니다.
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;
    double answer = 0;
    
    for(auto num : numbers){
        sum += num;
    }
    answer = (double)sum / (double)numbers.size();
    
    return answer;
}
int main(){
    vector<int> v = {89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99Z};
    cout << solution(v) << endl;
}