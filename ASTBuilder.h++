#ifndef _ASTBUILDER_
#define _ASTBUILDER_

#include <iostream>
#include <cstring>
#include "Nodo.h++"
using namespace std;


class ASTBuilder
{
public:
  virtual Nodo * join( Nodo * n, Nodo * m ) = 0;
  virtual Nodo * buildInt( int z ) = 0;
  virtual Nodo * buildString( string s ) = 0;
  virtual Nodo * buildPlus( Nodo * n, Nodo * m ) = 0;
  virtual Nodo * buildExpr( Nodo * n ) = 0;
  virtual Nodo * buildExprStmt( Nodo * n ) = 0;
  virtual Nodo * buildPrintStmt( Nodo * n ) = 0;
  virtual Nodo * buildStmt( Nodo * n ) = 0;
};


class MASTBuilder : public ASTBuilder
{
public:
  virtual Nodo * join( Nodo * n, Nodo * m );
  virtual Nodo * buildInt( int z );
  virtual Nodo * buildString( string s );
  virtual Nodo * buildPlus( Nodo * n, Nodo * m );
  virtual Nodo * buildExpr( Nodo * n );
  virtual Nodo * buildExprStmt( Nodo * n );
  virtual Nodo * buildPrintStmt( Nodo * n );
  virtual Nodo * buildStmt( Nodo * n );
};

#endif
