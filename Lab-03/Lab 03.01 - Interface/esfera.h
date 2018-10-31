#include <string>
#include "forma3d.h"
#ifndef inferno
#define inferno
using namespace std;
class Esfera: public Forma3D {
private:
  int raio;
  string cor;
  string nome;
public:
  Esfera (string cor, int raio);
  string get_cor();
  string get_nome();
  double get_volume();
};

#endif
