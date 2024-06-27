#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i = 1; i <=n; i += 2){
        answer.push_back(i);
    }
    return answer;
}

int main(){
    vector<int> v = solution(15);
    for(auto num : v){
        cout << num << " ";
    }
    return 0;
}