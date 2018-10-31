#include "forma.h"
#include <string>
#ifndef odeiovpl
#define odeiovpl

class Forma2D: public Forma {
public:
  virtual double get_area() = 0;
  virtual double get_perimetro() = 0;
};

#endif
