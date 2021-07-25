#include <iostream>
using namespace std;

int main(){
    //new 연산자
    /*
    어떤 데이터형을 원하는지 new 연산자에게 알려주면,
    new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고
    그에 알맞은 크기의 메모리 블록을 찾아내고 
    그 블록의 주소를 리터한다.
    */
   int a; 
   int* b= &a;
   int* pointer = new int;// int형 데이터를 지정할 수 있는 새로운 메모리가 필요하다고 알려줌.
   // pointer가 데이터의 객체를 가르키고 있다.

   // delete 연산자
   /*
    사용한 메모리를 다시 메모리 폴로 환수
    환수된 메모리는 프로그램의 다른 부분이 다시 사용
    */


   int* ps = new int;
   // 메모리 사용
   delete ps;
   // new사용시 delete사용 해야함. 

   /*
   1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
   2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
   3. new[]로 메모리를 대입할 경우 delete[]로 해제한다.
   4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야한다.
   */
}