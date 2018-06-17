#include "view.h"

View::View()
{
}

void View::render(const char*name){
    auto doc = model->open(name);
    for(auto i:doc->figures){
        i.second->data();
    }
}
