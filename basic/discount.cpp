#include <typeinfo>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int price) {
    int answer = 0;
    double discount = 0;
    
    if(price >= 500000)
    {
        discount = 0.8;
        answer = price * discount;
    }
    else if(price >= 300000)
    {
        discount = 0.9;
        answer = price * discount;
    }
    else if(price >= 100000)
    {
        discount = 0.95;
        answer = price * discount;
    }
    else
    {
        answer = price;
    }
    return trunc(answer);
}

int main(){
    cout << solution(9000);
    return 0;
}