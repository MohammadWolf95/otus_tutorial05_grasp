#include "src/model.h"
#include <memory>
#include <utility>

Model::Model(){
    //doc.reset(new Document(""));
}

void Model::createDoc(const char* name){
    //std::unique_ptr<Document>doc(new Document(name));
    //Document*doc = new Document(name);
    doc.reset(new Document(name));
    map_docs.insert(make_pair(name, doc));
}

void Model::deleteDoc(const char* name){
    try{
        auto it = map_docs.find(name);
        if(it==map_docs.end())
            throw name;
        map_docs.erase(it);
    }
    catch(const char*error_name){
        cout<<"In model not find document with name"
           <<error_name<<endl;
    }
}
