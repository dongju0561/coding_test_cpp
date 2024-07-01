#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 2;
    vector<int> sorted_sides = sides;

    sort(sorted_sides.begin(), sorted_sides.end());

    if (sorted_sides[2] < sorted_sides[0] + sorted_sides[1])
    {
        answer = 1;
    }
    
    return answer;
}