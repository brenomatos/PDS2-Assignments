#include <string>
#include "forma2d.h"


using namespace std;

class Quadrado: public Forma2D {
private:
  int lado;
  string nome;
  string cor;
public:
  Quadrado(string, int);
   double get_area();
   double get_perimetro();
   string get_cor();
   string get_nome();
};

