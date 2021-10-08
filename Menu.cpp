#include "Menu.hpp"
#include "Token.hpp"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

Token v;
void Menu::norma(char *tokens, int size){
  float norma=0;
  if(size==5){
    int x=(tokens[1]-48);
    int y=(tokens[3]-48);
    norma=sqrt((x*x)+(y*y));
    
  }else if(size==7){
    int x=(tokens[1]-48);
    int y=(tokens[3]-48);
    int z=(tokens[5]-48);
    norma=sqrt((x*x)+(y*y)+(z*z));
  }
  cout<<"Respuesta : "<<norma<<endl;
}

void Menu::operacion2d(char *tokens, int size){

  int opx=0, opy=0;
  if(tokens[5]=='+'){
  for(int i=1; i<size;i=i+6){
    opx= opx+(tokens[i]- 48);
  }
  for(int i=3; i<size; i=i+6){
    opy= opy+(tokens[i]- 48);
  }
  cout<<"Respuesta : ("<<opx<<","<<opy<<")"<<endl;
  }
  
  if(tokens[5]=='-'){
    for(int i=1; i<size;i=i+6){
    if(i==1){
      opx=(tokens[i]- 48);
    }else{
      opx= opx-(tokens[i]- 48);
    }
  }
  for(int i=3; i<size; i=i+6){
    if(i==3){
      opy=(tokens[i]- 48);
    }else{
      opy= opy-(tokens[i]- 48);
    }
  }
  cout<<"Respuesta : ("<<opx<<","<<opy<<")"<<endl;
  }
}

void Menu::suma3d(char *tokens, int size){
  
  int opx=0, opy=0, opz=0;
  
  for(int i=1; i<size;i=i+8){
    opx= opx+(tokens[i]- 48);
  }
  for(int i=3; i<size; i=i+8){
    opy= opy+(tokens[i]- 48);
  }
  for(int i=5; i<size; i=i+8){
    opz= opz+(tokens[i]- 48);
  }
  cout<<"Respuesta : ("<<opx<<","<<opy<<","<<opz<<")"<<endl;
  
  
}

void Menu::multi(char *tokens, int size){
  int esc=(tokens[0]-48);
  int x=(tokens[2]-48)*esc;
  int y=(tokens[4]-48)*esc;

  cout<<"Respuesta : ("<<x<<","<<y<<")"<<endl;
}

void Menu::productos(char *tokens, int size, bool flag){
 
  int opx=0, opy=0,opz=0;
  if (flag==true){
    opx=1; opy=1; opz=1;
  for(int i=1; i<size;i=i+8){
    opx= opx*(tokens[i]- 48);
  }
  for(int i=3; i<size; i=i+8){
    opy= opy*(tokens[i]- 48);
  }
  for(int i=5; i<size; i=i+8){
    opz= opz*(tokens[i]- 48);
  }
  int punto=opx+opy+opz;
  cout<<"Respuesta : ("<<punto<<")"<<endl;
  }else
  if(flag==false){
    
    opx=((tokens[3]-48)*(tokens[13]-48))-((tokens[5]-48)*(tokens[11]-48));
    opy=((tokens[1]-48)*(tokens[13]-48))-((tokens[5]-48)*(tokens[9]-48));
    opz=((tokens[1]-48)*(tokens[11]-48))-((tokens[3]-48)*(tokens[9]-48));
    cout<<"Respuesta : ("<<opx<<","<<opy<<","<<opz<<")"<<endl;
  }
}

void Menu::ayuda(){
    cout << "-a | a | ayuda  Muestra el mensaje de Ayuda" << endl;
    cout << "-n | n | norma  Calcular la normal de un vector. FORMATO '(x,y)' o '(x,y,<)'" << endl;
    cout << "-s | s | suma  Suma de dos vectores. FORMATO '(x1,y1)+(x2,y2)' o '(x1,y1,z1)+(x2+y2+z2)'. " << endl;
    cout << "-r | r | resta  Resta de dos vectores. FORMATO '(x1,y1)+(x2,y2)'" << endl;
    cout << "-m | m | multi Multiplicacion de un escalar por un vector. FORMATO 'escalar(x,y)'" << endl;
    cout << "-p | p | punto Producto Punto de dos vectores R3. FORMATO '(x1,y1,z1)*(x2+y2+z2)'" << endl;
    cout << "-c | c | cruz Producto Cruz de dos vectores R3. FORMATO '(x1,y1,z1)*(x2+y2+z2)'" << endl;
}