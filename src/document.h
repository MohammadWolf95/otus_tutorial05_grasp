#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string.h>
#include <vector>
#include "figures.h"
#include <memory>
#include <map>

using namespace std;

struct ltstr
{
  bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) != 0;
  }
};

class Document
{
public:
    Document(string name);
    string _name;
    map<const char*, shared_ptr<Figure>, ltstr>figures;
};

#endif // DOCUMENT_H
