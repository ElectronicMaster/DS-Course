// OBJECT ORIENTED PROGRAMMING //

#include<iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle();
    Rectangle(int l,int b);
    int area();
    int perimmeter();
};

Rectangle::Rectangle(){     // Default Constructor
    this->length=0;
    this->breadth=0;
}

Rectangle::Rectangle(int l,int b){      // Parameterized Constructor
    this->length = l;
    this->breadth = b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimmeter(){
    return 2*(length+breadth);
}

int main(){
    Rectangle r{10,5};
    
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimmeter() << endl;

    return 0;
}