#include <iomanip>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, int> diaboDoMeuOdio;
  string odeioVPL;
  string linha;
  int contador = 0;
  while (getline(cin, linha)) {
    std::istringstream linha_stream(linha);
    while (getline(linha_stream, odeioVPL, ' ')) {
      transform(odeioVPL.begin(), odeioVPL.end(), odeioVPL.begin(), ::tolower);
      contador++;
      if ( diaboDoMeuOdio.find(odeioVPL) == diaboDoMeuOdio.end() ) {
        diaboDoMeuOdio[odeioVPL] = 1;
        // diaboDoMeuOdio.insert(odeioVPL,0);
      } else {
        diaboDoMeuOdio[odeioVPL]++;
      }

      // cout << odeioVPL << endl;
    }
  }
  cout.precision(2);

  for(auto it = diaboDoMeuOdio.cbegin(); it != diaboDoMeuOdio.cend(); ++it)
{
    std::cout << it->first << " " << it->second << " " << (float)it->second/contador << endl;
}
  return 0;
}
