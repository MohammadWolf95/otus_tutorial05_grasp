#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <vector>
#include "figures.h"
#include <memory>
#include <map>

using namespace std;

/*struct ltstr
{
  bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) ;
  }
};*/

class Document
{
public:
    Document(string name);
    string _name;
    map<const char*, shared_ptr<Figure>>figures;
};

#endif // DOCUMENT_H
