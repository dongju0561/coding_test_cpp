#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = my_string;

    answer.at(num1) = my_string.at(num2);
    answer.at(num2) = my_string.at(num1);

    return answer;
}