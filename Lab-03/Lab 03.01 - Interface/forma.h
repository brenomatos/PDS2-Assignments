#include <string>
#ifndef desgraca
#define desgraca
using namespace std;
class Forma{
public:
  string cor;
  string nome;
  virtual string get_cor() = 0;
  virtual string get_nome() = 0;
};
#endif
