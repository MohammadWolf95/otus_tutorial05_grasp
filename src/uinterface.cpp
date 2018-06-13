#include "uinterface.h"
#include "model.h"
#include <memory>

UInterface::UInterface()
{
    int*b = new int(10);
}

void UInterface::onLoad(string name){
    view->render(name);
}

void UInterface::addFigures(string name, Figure*figure){
    auto doc = model->open(name);
    doc->figures.emplace_back(figure);
}
