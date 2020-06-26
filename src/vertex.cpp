#include "vertex.h"

#include <string>
#include <algorithm>

Vertex::Vertex() {}

Vertex::~Vertex() {}

Vertex::Vertex(const std::string& _name) :
     name(_name) {}

bool Vertex::is_connected(const Vertex& _destination) const {
     auto lambda = [](const Vertex v)-> {return &v == &_destination;};
     //auto found = std::find_if(this->outbound_edges.begin(), this->outbound_edges.end(), lambda);

     return false;
}

void Vertex::connect(Vertex& _destination) {
     
     Edge new_edge = Edge(*this, _destination);
     this->outbound_edges.push_back(new_edge);
     _destination.add_inbound(new_edge);
}

# if 0
void Vertex::disconnect(Vertex& _destination) {
     

     auto lambda = [&_destination](Edge& e) {return true;};
     auto found = std::find_if(outbound.begin(), outbound.end(), lambda);

}

#endif