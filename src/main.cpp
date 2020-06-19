#include <iostream>
#include <vector>

#include "flowsheet.h"
#include "vertex.h"


static void run_iter_test() {
     std::vector<char> v = {'a','r','f','q'};
     for (auto i=v.cbegin(); i!=v.cend(); i++) 
          std::cout << *i << std::endl;

     std::cout << *v.rend();
}

static void vertex() {
     FlowSheet f;
     FlowSheet v;

     v.create_vertex();
     

     int x = v.get_idx(v.get_vertex(0));


     

}

int main(int argc, char* argv[]){
     std::cout << "Main file is working!" << std::endl;
     
     run_iter_test();
     vertex();

}