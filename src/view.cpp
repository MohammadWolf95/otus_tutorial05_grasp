#include "view.h"

View::View()
{
}

void View::render(const string&name){
    auto doc = model->open(name);
    for(auto i:doc->figures){
        i->data();
    }
}
