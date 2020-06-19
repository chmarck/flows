#include "flowsheet.h"

FlowSheet::FlowSheet() {

}

void FlowSheet::connect_vertices(Vertex& _origin, const Vertex& _destination) {
     _origin.connect_to(_destination);

}
