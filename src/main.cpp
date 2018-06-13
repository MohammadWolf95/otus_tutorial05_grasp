#include <iostream>
#include "uinterface.h"
#include "model.h"
#include <memory>

using namespace std;

int main(int argc, char *argv[])
{
    Model model;
    View view(&model);
    UInterface uinterf(&model, &view);
    //model.createDoc("new");
    //model.createDoc("new1");
    //model.createDoc("new2");

    uinterf.createFile("new");
    uinterf.createFile("new1");
    uinterf.createFile("new2");

    std::shared_ptr<Figure>figure(new Triangle(6,5));
    uinterf.addFigures("new1", figure.get());

    //auto doc = model.open("new1");
    //std::shared_ptr<Figure>figure(new Triangle(6,1));
    //doc->figures.emplace_back(figure);
    uinterf.onLoad("new1");
    model.deleteDoc("new");
    cout<<"Hello world";
}
