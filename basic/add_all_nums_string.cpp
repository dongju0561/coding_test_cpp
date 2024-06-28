#include<iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    char one = '1';
    char nine = '9';
    for(auto ch : my_string){
        if((int)one <= ch && (int)nine >= ch){
            answer += (int)ch - '0';
        }
    }
    return answer;
}

int main(){
    cout << solution("1ooo2");
}