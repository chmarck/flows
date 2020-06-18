#pragma once

#include <string>
#include <memory>
#include <vector>

#include "edge.h"

class Vertex {
     private:
          std::vector<std::unique_ptr<Edge>> edges;
          std::string name;
     public:
     private:
     public:
          Vertex();
          virtual ~Vertex();

          //Print the destination of outgoing edges
          void print_edges();

          inline void set_name(const std::string& _name) {
               this->name = _name;
          }

          inline const std::string& get_name() const {
               return this->name;
          }
          
          //Create new edge to connect this vertex to existing, succesive vertex 
          inline void connect_to(const Vertex& _destination) {
               this->edges.emplace_back(std::make_unique<Edge>(_destination));
          }


};