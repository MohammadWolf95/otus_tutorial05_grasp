#ifndef EDITOR_H
#define EDITOR_H

#include <string>
#include <vector>
#include "figures.h"

using namespace std;

class Document
{
public:
    Document();
    string name;
    vector<Figures*>figures;
};

#endif // EDITOR_H
