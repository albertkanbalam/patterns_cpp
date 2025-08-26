#ifndef _BUILDER_
#define _BUILDER_

#include <iostream>
#include <cstring>
using namespace std;


/*
  Constructor abstracto
*/
class Builder {
public:
  virtual int bTok( int token, string name )= 0;
};


/*
  Constructor concreto TBuilder
  Crea una representación en texto.
*/
class TBuilder : public Builder {
public:
  virtual int bTok( int token, string name );
};


/*
  Constructor concreto FBuilder
  Crea un flujo de tokens para bison
*/
class FBuilder : public Builder {
public:
  virtual int bTok( int token, string name );
};


#endif
