#pragma once

#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <stdexcept>

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
          inline Vertex& create_vertex() {
               this->vertices.emplace_back(std::make_unique<Vertex>());
               return *this->vertices.back();
          };

          //Get vertex by index value
          inline Vertex& get_vertex(unsigned int _idx) const {
               return *(this->vertices.at(_idx));
          }

          //Get the index for a specific vertex
          inline unsigned int get_idx(const Vertex& _v) const {
               for (unsigned int i=0; i<this->vertices.size(); i++) {
                    if (this->vertices.at(i).get() == &_v) {
                         return i;
                    }  
               }
               throw std::invalid_argument(std::string("Vertex is not found."));
          }

          Vertex* [] get_ingoing_edges(const Vertex& _v);


         
          
          



};