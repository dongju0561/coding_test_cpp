#include <string>
#include <vector>
#include <algorithm>

bool compare(int a, int b){
    return b < a;
}

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end(), compare);
    answer = numbers[0] * numbers[1];
    return answer;
}