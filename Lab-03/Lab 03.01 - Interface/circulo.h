#include <string>
#include "forma2d.h"


using namespace std;
class Circulo: public Forma2D {
private:
  int raio;
  string cor;
  string nome;
public:
  Circulo(string cor, int raio);
  double get_area();
  double get_perimetro();
  string get_cor();
  string get_nome();
};
