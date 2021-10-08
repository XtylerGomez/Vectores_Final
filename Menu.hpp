#ifndef Menu_hpp
#define Menu_hpp

#include <string>
using namespace std;
class Menu{
    public:
    void ayuda();
    void norma(char *tokens, int size);
    void operacion2d(char *tokens, int size);
    void suma3d(char *tokens, int size);
    void productos(char *tokens, int size, bool flag);
    void multi(char *tokens, int size);
    
    void cruz(char *tokens, int size);
};

#endif