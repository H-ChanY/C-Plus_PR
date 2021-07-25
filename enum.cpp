#include <iostream>
using namespace std;

int main(){
    //열거체(enum)
    //기호 상수를 만나는 것에 대한 또 다른 방법
    // 초기화 하지 않은 열거자들은 마지막 열거자에서 +1을 해준다. 
    enum spectrum{ red, orange, yellow, green,
        blue, violet, indigo, ultraviorlet
    };
    /*
    1. spectrum을 새로운 데이터형 이름으로 만듦.
    2. red, orange,yellow .. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듦.
    */

   spectrum a =orange ;
   cout << a <<endl;

    // 자료형에 따라 열거자를 숫자로 표현 가능 
   int b;
   b= blue;
   b=blue+3;
   cout << b <<endl;
   return 0;
}