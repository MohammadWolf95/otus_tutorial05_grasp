#include "uinterface.h"
#include "model.h"
#include <memory>
#include <utility>
#include <string.h>

UInterface::UInterface()
{
    int*b = new int(10);
}

void UInterface::onLoad(const char*name){
    view->render(name);
}

void UInterface::addFigures(const char* nameDoc, const char*nameFigure, shared_ptr<Figure>figure){
    auto doc = model->open(nameDoc);
    try{
        auto it = doc->figures.find(nameFigure);
        if(it!=doc->figures.end()){
            throw nameFigure;
        }
        doc->figures.emplace(map<const char*, shared_ptr<Figure>, ltstr>::value_type(nameFigure, figure));
    }
    catch(string name_error){
        cout<<"Figure with name "<<name_error<<
              " already exists in the document"<<
              nameDoc<<endl;
    }
}

void UInterface::removeFigure(const char *nameDoc, const char *nameFigure){
    auto doc = model->open(nameDoc);
    try{
        auto it = doc->figures.find(nameFigure);
        if(it==doc->figures.end()){
            throw nameFigure;
        }
        doc->figures.erase(it);
    }
    catch(const char*name_error){
        cout<<"Figure with name "<<name_error<<
              " doesn’t exist in the document "<<
              nameDoc<<endl;
    }
}
