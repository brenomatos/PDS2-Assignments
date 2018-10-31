#include "forma.h"
#include <string>
#ifndef odeiovpl3d
#define odeiovpl3d

class Forma3D: public Forma {
public:
  virtual double get_volume() = 0;
};

#endif
