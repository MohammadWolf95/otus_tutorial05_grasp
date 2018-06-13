#ifndef VIEW_H
#define VIEW_H
#include "model.h"

class View
{
public:
    View();
    View(Model*model){
        setModel(model);
    }
    void setModel(Model*model){
        this->model = model;
    }
    void render(const string&name);
private:
    Model *model;
};

#endif // VIEW_H
