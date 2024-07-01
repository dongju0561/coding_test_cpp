#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;

    int result = sqrt(n);
    
    answer = pow(result,2) == n ? 1 : 2;
    return answer;
}

int main(){
    cout << solution(144);
}