#include <string>
#include <vector>

using namespace std;

#define KING 5
#define FIGHTER 3
#define SLAVE 1

int solution(int hp) {
    int answer = 0;
    int hp_cur = hp;
    answer += hp_cur / KING;
    hp_cur = hp_cur % KING;

    answer += hp_cur / FIGHTER;
    hp_cur = hp_cur % FIGHTER;

    answer += hp_cur / SLAVE;

    return answer;
}