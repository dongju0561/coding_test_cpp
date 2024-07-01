#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;
    int num_of_even = 0;
    int num_of_odd = 0;

    for (auto num : num_list)
    {
        if (num % 2 == 0)
        {
            num_of_even++;
        }
        else{
            num_of_odd ++;
        }
    }
    answer.push_back(num_of_even);
    answer.push_back(num_of_odd);
    
    return answer;
}