#include <string>
#include "forma3d.h"
class Cubo: public Forma3D {
private:
  int lado;
  string cor;
  string nome;
public:
  Cubo(string cor, int lado);
  string get_cor();
  string get_nome();
  double get_volume();
};
