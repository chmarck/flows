#include <iostream>
#include <vector>

#include "bi_graph.h"
#include "vertex.h"


static void run_iter_test() {
     std::vector<char> v = {'a','r','f','q'};
     
     char target = 'b';
     auto lambda = [target](char _v){return target==_v;};

     auto it = std::find_if(v.begin(), v.end(), lambda);
     std::cout << (it != v.end()) << std::endl;

}

static void vertex() {
     BiGraph f;
     f.create_vertex(std::string("A"));
     f.create_vertex(std::string("B"));
     f.create_vertex(std::string("C"));

}

int main(int argc, char* argv[]){
     std::cout << "Main file is working!" << std::endl;
     

}