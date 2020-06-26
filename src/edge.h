#pragma once

class Vertex;

class Edge {
     private:
          Vertex& origin;
          Vertex& destination;

     private:
     public:
          Edge(Vertex& _origin, Vertex& _destination);
          virtual ~Edge();

          inline Vertex& get_origin() const {
               return this->origin;
          }

          inline Vertex& get_destination() {
               return this->destination;
          }



};