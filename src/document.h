#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <vector>
#include "figures.h"
#include <memory>

using namespace std;

class Document
{
public:
    Document(string name);
    string _name;
    vector<shared_ptr<Figure>>figures;
};

#endif // DOCUMENT_H
