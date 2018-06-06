#ifndef UINTERFACE_H
#define UINTERFACE_H

#include <string>
#include "document.h"

using namespace std;

class UInterface
{
public:
    UInterface();
    void open(const string &name);
    void close(const string &name);
private:
    Document*open_document = nullptr;
};

#endif // UINTERFACE_H
