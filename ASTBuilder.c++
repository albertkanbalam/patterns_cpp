#ifndef _ASTBUILDERC_
#define _ASTBUILDERC_

#include <iostream>
#include <list>
#include "ASTBuilder.h++"


Nodo * MASTBuilder::join(Nodo * n, Nodo * m)
{
  (n->chlds)++;
  (n->listChlds).push_back( m );
  return n;
}


Nodo * MASTBuilder::buildInt( int z )
{
  Nodo * r = new IntNodo();
  r->chlds = 0;
  r->val = z;

  return r;
}


Nodo * MASTBuilder::buildString( string s )
{
  Nodo * r = new StringNodo();
  r->chlds = 0;
  r->valStr = s;

  return r;  
}


Nodo * MASTBuilder::buildPlus( Nodo * n, Nodo * m )
{
  Nodo * r = new PlusNodo();
  r->chlds = 2;
  (r->listChlds).push_back( n );
  (r->listChlds).push_back( m );

  return r;
}


Nodo * MASTBuilder::buildExpr( Nodo * n )
{
  Nodo * r = new ExprNodo();
  (r->listChlds).push_back( n );
  r->chlds = 1;

  return r;
}


Nodo * MASTBuilder::buildExprStmt( Nodo * n )
{
  Nodo * r = new ExprStmtNodo();
  (r->listChlds).push_back( n );
  r->chlds = 1;

  return r;
}


Nodo * MASTBuilder::buildPrintStmt( Nodo * n )
{
  Nodo * r = new PrintStmtNodo();
  (r->listChlds).push_back( n );
  r->chlds = 1;

  return r;
}


Nodo * MASTBuilder::buildStmt( Nodo * n )
{
  Nodo * r = new StmtNodo();
  (r->listChlds).push_back( n );
  r->chlds = 1;

  return r;
}

/*
Nodo * MASTBuilder::buildFile( Nodo * n );
{
  Nodo * r = new FileNodo();
  (r->listChlds).push_back( n );
  r->chlds = 1;

  return 1;
}
*/

#endif
