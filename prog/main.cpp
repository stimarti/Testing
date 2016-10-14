#include <iostream>
#include "Atom.hpp"

int main(){
  
  double       pos [3] = { 0.0, 0.5, 4.245 };
  double       mass    = 12.0107;
  std::string  atname("C");

  Atom a = Atom( atname, mass, pos );

  std::cout << "Position of atom 1: " << a.getPosition()[0] << " " << a.getPosition()[1] 
                                      << " " << a.getPosition()[2] << std::endl;

  return 0;
}

