#ifndef UINTERFACE_H
#define UINTERFACE_H

#include <string>
#include "model.h"
#include <vector>
#include "view.h"
#include "figures.h"

using namespace std;

class UInterface
{
public:
    UInterface();
    UInterface(Model*model, View*view){
        setModel(model);
        setView(view);
    }
    void setView(View*view){
        this->view = view;
    }
    void setModel(Model*model){
        this->model = model;
    }
    void onLoad(const char*name);
    void createFile(const char* name){
        model->createDoc(name);
    }
    void addFigures(const char *nameDoc, const char *nameFigure, shared_ptr<Figure> figure);
    void removeFigure(const char *nameDoc, const char *nameFigure);
private:
    View *view;
    Model *model;
};

#endif // UINTERFACE_H
