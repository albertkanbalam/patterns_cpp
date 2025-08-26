#ifndef _BUILDERTEXT_
#define _BUILDERTEXT_

#include "Builder.h++"
#include "pyParser.h++"



int TBuilder::bTok( int token, string  name )
{
  cout << name;
  return CERO;
}


int FBuilder::bTok( int token, string  name )
{
  return token;
}


#endif
