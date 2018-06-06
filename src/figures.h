#ifndef FIGURES_H
#define FIGURES_H
#include <iostream>

using namespace std;

class Figures
{
public:
    Figures();
    virtual int area() = 0;
};

class Rectangle:public Figures{
public:
    Rectangle(int a, int b):
        width(a), height(b){
        cout<<"Rectangle was created"<<endl;
    }
    int area() override{
        return width*height;
    }

private:
    int width, height;
};

class Triangle:public Figures{
public:
    Triangle(int a, int b):
        width(a), height(b){
        cout<<"Triangle was created"<<endl;
    }
    int area() override{
        return width*height/2;
    }
private:
    int width, height;
};

class Square:public Figures{
public:
    Square(int a):
        width(a){
        cout<<"Square was created"<<endl;
    }
    int area() override{
        return width*width;
    }
private:
    int width;
};

class Circle:public Figures{
public:
    Circle(int a):
        radius(a){
        cout<<"Circle was created"<<endl;
    }
    int area() override{
        return 2*3.14*radius*radius;
    }
private:
    int radius;
};

#endif // FIGURES_H
