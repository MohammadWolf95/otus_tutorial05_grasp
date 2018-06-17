#ifndef FIGURES_H
#define FIGURES_H
#include <iostream>
#include <memory>

using namespace std;

class Figure
{
public:
    Figure();
    virtual int area() = 0;
    virtual void data()=0;
    unique_ptr<char>name;
};

class Rectangle:public Figure{
public:
    Rectangle(int a, int b):
        width(a), height(b){
    }
    int area() override{
        return width*height;
    }
    void data()override{
        cout<<"Rectangle: width = "<<width<<
              ", height = "<<height<<endl;
    }

private:
    int width, height;
};

class Triangle:public Figure{
public:
    Triangle(int a, int b):
        width(a), height(b){
    }
    int area() override{
        return width*height/2;
    }
    void data()override{
        cout<<"Triangle: width = "<<width<<
              ", height = "<<height<<endl;
    }
private:
    int width, height;
};

class Square:public Figure{
public:
    Square(int a):
        width(a){
    }
    int area() override{
        return width*width;
    }
    void data()override{
        cout<<"Square: width = "<<width<<endl;
    }
private:
    int width;
};

class Circle:public Figure{
public:
    Circle(int a):
        radius(a){
    }
    int area() override{
        return 2*3.14*radius*radius;
    }
    void data()override{
        cout<<"Circle: radius = "<<radius<<endl;
    }
private:
    int radius;
};

#endif // FIGURES_H
