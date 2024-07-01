#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";

    for(auto ch : my_string){
        if (letter[0] == ch)
        {
            continue;
        }
        answer.push_back(ch);
    }
    
    return answer;
}