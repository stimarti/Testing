#include <string>

class Atom {

  private:
    std::string _element;
    double      _mass;
    double      _pos[3]; 

  public:
    Atom( std::string&, double&, double* );
    ~Atom(){};

    double getMass();
    double* getPosition();
    std::string getElement();

};

Atom::Atom(  std::string& element, double& mass, double* pos ) { 
  this->_element = element;
  this->_mass    = mass;
  for( int i=0; i<3; ++i ){
    this->_pos[i] = pos[i];
  }
};

double Atom::getMass(){
  return this->_mass;
};

double* Atom::getPosition(){
  return this->_pos;
};

std::string Atom::getElement(){
  return this->_element;
};

