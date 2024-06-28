#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int difference = (int)'a' - (int)'A';
    char changed_ch;

    for(auto ch : my_string){
        //대문자일때
        if (ch < (int)'a')
        {
            //소문자로 변환
            changed_ch = (char)((int)ch + difference);
        }
        //소문자일때
        else
        {
            //대문자로 변환
            changed_ch = (char)((int)ch - difference);
        }
        answer += changed_ch;
    }
    
    return answer;
}