#include <iostream>
#include "uinterface.h"
#include "model.h"
#include <memory>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    Model model;
    View view(&model);
    UInterface uinterf(&model, &view);

    uinterf.createFile("new");
    uinterf.createFile("new1");
    uinterf.createFile("new2");

    std::shared_ptr<Figure>triangle(new Triangle(6,5));
    std::shared_ptr<Figure>circle(new Circle(6));

    uinterf.addFigures("new1", "triangle", triangle);
    uinterf.addFigures("new1", "circle", circle);
    uinterf.removeFigure("new1","circl");

    model.deleteDoc("new");
    uinterf.onLoad("new1");
}
