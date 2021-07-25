#include <iostream>
using namespace std;

int main(){
      
      union MyUnion{
          int intVal;
          long longVal;
          float floatVal;
      };
    // 공용체는 한번에 한가지만 저장이 된다. 메모리 절약은 가능함. 운영체제나 하드웨어 체제에 사용됨.
    MyUnion test;
    test.intVal=3;
    cout << test.intVal << endl;
    test.longVal=33;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    test.floatVal=3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl;

}