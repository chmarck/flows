#pragma once

class Vertex;

class Edge {
     private:
          const Vertex& destination;

     private:
     public:
          Edge(const Vertex& _destination);
          virtual ~Edge();

          inline const Vertex& get_destination() {
               return this->destination;
          }



};