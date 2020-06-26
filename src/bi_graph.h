#pragma once

#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <stdexcept>

#include "vertex.h"
#include "edge.h"

class BiGraph {
     private:
          std::vector<Vertex> vertices;
     private:
          
     public:
          BiGraph();

          //Connect to vertices by creating a new edge
          void connect_vertices(Vertex& _origin, Vertex& _destination);

          //Get the index for a specific vertex
          unsigned int get_idx(const Vertex& _v) const;
          
          //Create a new vertex 
          inline Vertex& create_vertex() {
               this->vertices.emplace_back();
               return this->vertices.back();
          };

          inline Vertex& create_vertex(const std::string& _name) {
               this->vertices.emplace_back(_name);
               return this->vertices.back();
          };

          //Get vertex by index value
          inline Vertex& get_vertex(unsigned int _idx) {
               return this->vertices.at(_idx);
          }

          

          


         
          
          



};