#include "Menu.hpp"
#include "Token.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


int main(int argc, char* argv[]){
  //argc cuenta los imputs del programa
  //argc = inputs - 1
  //argv almacena las opciones y variables
 
  Menu m;
  Token v;
  if(argc == 1){
    cout<<"Utiliza -a para ver los comandos."<<endl;
  }else
  {
    //Se convierte un array de apuntadores por uno de strings
    vector<string> argList;
    for(int i=1;i<argc;i++){
      argList.push_back(argv[i]);
    }
    if(argList[0]=="-a"||argList[0]=="a"||argList[0]=="ayuda") {  
    m.ayuda();
      return 0;
    }
    
    if(argList[0]=="-n"||argList[0]=="n"||argList[0]=="norma") {  
    if(argc == 2){ 
        cout << "Formato de Vectores no Aceptado" << endl;
      }else{
        m.norma(v.vectores(argList[1]), v.getSize(v.vectores(argList[1])));
      }
    }
    
    if(argList[0]=="-s"||argList[0]=="s"||argList[0]=="suma") {  
      if(argc == 2){ 
        cout << "Formato de Vectores no Aceptado" << endl;
      }else if((v.checkResta(argList[1]) == true)){
        cout<< "No se esta efectuando una suma !"<<endl;
      }else if ((v.check2D(argList[1])==true))
        {
        m.operacion2d(v.vectores(argList[1]), v.getSize(v.vectores(argList[1])));
      }else if ((v.check2D(argList[1])==false)){
        m.suma3d(v.vectores(argList[1]), v.getSize(v.vectores(argList[1])));
      }
    }

    if(argList[0]=="-r"||argList[0]=="r"||argList[0]=="resta") {  
      if(argc == 2){ 
        cout << "Formato de Vectores no Aceptado" << endl;
      }else if((v.checkResta(argList[1]) == true)){
        m.operacion2d(v.vectores(argList[1]), v.getSize(v.vectores(argList[1])));
      }else{
        cout<< "No se esta efectuando una resta !"<<endl;
      }
    }

    if(argList[0]=="-m"||argList[0]=="m"||argList[0]=="multi") {  
    if(argc == 2){ 
        cout << "Formato de Vectores no Aceptado" << endl;
      }else{
        m.multi(v.vectores(argList[1]), v.getSize(v.vectores(argList[1])));
      }
    }
    if(argList[0]=="-p"||argList[0]=="p"||argList[0]=="punto") {  
    if(argc == 2){ 
        cout << "Formato de Vectores no Aceptado" << endl;
      }else{
        m.productos(v.vectores(argList[1]), v.getSize(v.vectores(argList[1])),v.checkPunto(argList[0]));
      }
    }
    if(argList[0]=="-c"||argList[0]=="c"||argList[0]=="cruz") {  
    if(argc == 2){ 
        cout << "Formato de Vectores no Aceptado" << endl;
      }else{
        m.productos(v.vectores(argList[1]), v.getSize(v.vectores(argList[1])),v.checkPunto(argList[0]));
      }
    }
  }
  return 0;
}