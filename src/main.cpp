#include <iostream>
#include <vector>

#include "flowSheet.h"
#include "vertex.h"


static void run_iter_test() {
     std::vector<int> v = {1,4,6,2,7};
     for (auto i=v.cbegin(); i!=v.cend(); i++) 
          std::cout << *i << std::endl;

     for (auto i: v) 
          std::cout << i << std::endl;
}

static void vertex() {
     FlowSheet f;
     f.create_vertex();
     f.create_vertex();
     f.create_vertex();

     f.connect_vertices(f.get_vertex(0), f.get_vertex(0));
     f.connect_vertices(f.get_vertex(0), f.get_vertex(1));
     f.connect_vertices(f.get_vertex(2), f.get_vertex(1));
     

}

int main(int argc, char* argv[]){
     std::cout << "Main file is working!" << std::endl;
     
     vertex();

}