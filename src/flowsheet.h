#pragma once

#include <vector>
#include <string>
#include <memory>
#include <algorithm>

#include "vertex.h"
#include "edge.h"

class FlowSheet {
     private:
          std::vector<std::unique_ptr<Vertex>> vertices;

     private:
          
          
     public:
          FlowSheet();

          //Connect to vertices by creating a new edge
          void connect_vertices(Vertex& _origin, const Vertex& _destination);
          
          //Create a new vertex
          inline void create_vertex() {
               this->vertices.emplace_back(std::make_unique<Vertex>());
          };

          //Get vertex by index value
          inline Vertex& get_vertex(unsigned int _idx) const {
               return *(vertices.at(_idx));
          }

          //Get the index for a specific vertex
          inline unsigned int get_idx(const Vertex&) const {
               auto criterion = 8;
          }



         
          
          



};