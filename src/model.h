#ifndef EDITOR_H
#define EDITOR_H

#include <string>
#include <vector>
#include <map>
#include "figures.h"
#include "document.h"
#include <memory>

using namespace std;

class Model{
public:
    Model();
    void createDoc(const char *name);
    void deleteDoc(const char *name);
    auto &open(const char* name){
        try{
            auto it = map_docs.find(name);
            if(it==map_docs.end()){
                throw name;
            }
            return it->second;
        }
        catch(string name_error){
            cout<<"Can't find "<<name_error<<
                  " in container"<<endl;
        }
    }
private:
    map<const char*,shared_ptr<Document>>map_docs;
    std::shared_ptr<Document> doc;
};

#endif // EDITOR_H
