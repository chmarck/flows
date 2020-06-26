#include "bi_graph.h"

BiGraph::BiGraph() {

}

void BiGraph::connect_vertices(Vertex& _origin, Vertex& _destination) {
     _origin.connect(_destination);

}

unsigned int BiGraph::get_idx(const Vertex& _v) const {
     for (unsigned int i=0; i<this->vertices.size(); i++) {
          if (&this->vertices.at(i) == &_v) {
               return i;
          }  
     }
     throw std::invalid_argument(std::string("Vertex is not found."));
}