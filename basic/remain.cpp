/*
정수 num1, num2가 매개변수로 주어질 때, num1를 num2로 나눈 나머지를 return 하도록 solution 함수를 완성해주세요.

0 < num1 ≤ 100
0 < num2 ≤ 100

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = -1;
    answer = num1 % num2;
    return answer;
}

int main(){
    cout << solution(10,5) << endl;
    return 0;
}