#include <iostream>
using namespace std;

int main() {
        int x;
        cin>>x;
        int answer = 0;
       while(x!=0){
           int digit = x % 10;
           if((answer > __INT32_MAX__/10) || (answer < __WINT_MIN__ / 10))
            {
           return 0;
            }
           answer = (answer * 10) + digit;
           x = x /10;

       }
       cout<<answer;
       return answer;
    }
