/*
자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.

n은 10,000,000,000이하인 자연수입니다.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void get_num_vector(vector<int> *v, long long num){
    if(num == 0){
        return;
    }
    v->push_back(num % 10);
    get_num_vector(v, num / 10);
}
vector<int> solution(long long n) {
    vector<int> answer;
    get_num_vector(&answer, n);

    return answer;
}

int main(){
    for(auto it : solution(10000000000)){
        cout << it << " ";
    }
}

// #include <iostream>
// #include <vector>

// using namespace std;

// // Helper function to get the digits of a number in reverse order
// void get_num_vector(vector<int>& v, long long num) {
//     while (num > 0) {
//         v.push_back(num % 10);
//         num /= 10;
//     }
// }

// vector<int> solution(long long n) {
//     vector<int> answer;
    
//     // If the number is 0, we should return a vector with a single 0
//     if (n == 0) {
//         answer.push_back(0);
//         return answer;
//     }
    
//     // Get the digits in reverse order
//     get_num_vector(answer, n);
    
//     return answer;
// }

// int main() {
//     long long num = 12345;  // Example input
//     vector<int> result = solution(num);
    
//     // Print the result
//     for (int digit : result) {
//         cout << digit << " ";
//     }
    
//     return 0;
// }
