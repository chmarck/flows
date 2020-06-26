#pragma once

#include <string>
#include <vector>
#include <functional>

#include "edge.h"

class Vertex {
     private:
          std::vector<Edge> outbound_edges;
          std::vector<Edge*> inbound_edges;
          std::string name;
     public:
     private:
     public:
          Vertex();
          Vertex(const std::string& _name);
          virtual ~Vertex();

          //Print the destination of outgoing edges
          void print_edges();

          std::vector<Edge*> get_inbound_edges();
          std::vector<Edge*> get_outbound_edges();

          //Check whether vertex is (one-way) connected to another.
          bool is_connected(const Vertex& _destination) const;

          //Create new edge to connect this vertex to existing, succesive vertex 
          void connect(Vertex& _destination);
          void disconnect(Vertex& _destination);

          inline void set_name(const std::string& _name) {
               this->name = _name;
          }

          //Get the vertex name
          inline const std::string& get_name() const {
               return this->name;
          }
          
          //Add existing edge as outgoing from this vertex. DO NOT DIRECTLY INVOKE THIS FUNCTION! 
          inline void add_inbound(Edge& _e) {
               this->inbound_edges.push_back(&_e);
          }

          //Remove inbound edge from vertex. DO NOT DIRECTLY INVOKE THIS FUNCTION!
          inline void remove_inbound(Edge& _e) {
          }


};