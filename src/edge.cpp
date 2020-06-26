#include "edge.h"

#include "vertex.h"

Edge::Edge(Vertex& _origin, Vertex& _destination) :
     origin(_origin),
     destination(_destination) {}

Edge::~Edge() {
     this->destination.remove_inbound(*this);
    }
