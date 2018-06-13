#include "src/model.h"
#include <memory>
#include <utility>

Model::Model(){
    //doc.reset(new Document(""));
}

void Model::createDoc(string name){
    //std::unique_ptr<Document>doc(new Document(name));
    //Document*doc = new Document(name);
    doc.reset(new Document(name));
    map_docs.insert(make_pair(name, doc));
}

void Model::deleteDoc(string name){
    auto it = map_docs.find(name);
    map_docs.erase(it);
}
