#include<iostream>
#include<stdio.h>

using namespace std;

template<class T>
class Arithematic{
    private:
    T a;
    T b;

    public:
    Arithematic();
    Arithematic(T,T);
    T add();
    T sub();
};

template<class T>
Arithematic<T>::Arithematic(){
    a=0;
    b=0;
}

template<class T>
Arithematic<T>::Arithematic(T num1, T num2){
    a=num1;
    b=num2;
}

template<class T>
T Arithematic<T>::add(){
    return a+b;
}

template<class T>
T Arithematic<T>::sub(){
    return a-b;
}

int main(){
    Arithematic <int> a(10,5);

    cout << "Add: " << a.add() << endl;
    cout << "Sub: " << a.sub() << endl;

    cout << endl;

    Arithematic <float> a1(10.1,5.2);

    cout << "Add: " << a1.add() << endl;
    cout << "Sub: " << a1.sub() << endl;

    return 0;
}