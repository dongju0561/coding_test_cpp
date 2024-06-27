/*
머쓱이는 선생님이 몇 년도에 태어났는지 궁금해졌습니다. 2022년 기준 선생님의 나이 age가 주어질 때, 선생님의 출생 연도를 return 하는 solution 함수를 완성해주세요

0 < age ≤ 120
나이는 태어난 연도에 1살이며 매년 1월 1일마다 1살씩 증가합니다.
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define YEAR 2022

int solution(int age) {
    int year = age - 1;
    int answer = 0;

    answer = YEAR - year;
    return answer;
}

int main(){
    cout << solution(40) << endl;
    cout << solution(23) << endl;

}