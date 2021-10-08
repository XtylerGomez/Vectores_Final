#include "Token.hpp"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int Token::getSize(string x){
  
  int size = x.length();
  return size;
}

char* Token::vectores(string x){

  string vec= x;
  char tokens[getSize(x)+1];

  return strcpy(tokens, vec.c_str());
}

bool Token::checkResta(string x){
  string vec= x;

  if (vec[5]=='-'){
    return true;
  } else{
    return false;
  }
}

bool Token::check2D(string x){
  string vec= x;
  if (vec[5]=='+'){
    return true;
  }else{
    return false;
  }
}

bool Token::checkPunto(string x){
  if(x=="-p"||x=="p"||x=="punto"){
    return true;
  }else if(x=="-c"||x=="c"||x=="cruz"){
    return false;
  }
}
