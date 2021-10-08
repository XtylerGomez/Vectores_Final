#ifndef Token_hpp
#define Token_hpp
#include <string>

using namespace std;
class Token{
  
  public:
    char* vectores(string x);
    int getSize(string x);
    bool checkResta(string x);
    bool check2D(string x);
    bool checkPunto(string x);
    };
#endif