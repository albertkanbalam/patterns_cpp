#ifndef _VISITOR_
#define _VISITOR_

#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "Nodo.h++"

class Visitor
{
public:
  virtual void visit( IntNodo *n ) = 0;
  virtual void visit( PlusNodo *n ) = 0;
  virtual void visit( ExprStmtNodo *n ) = 0;
  virtual void visit( StringNodo *n ) = 0;
  virtual void visit( StmtNodo *n ) = 0;
  virtual void visit( PrintStmtNodo *n ) = 0;
  virtual void visit( ExprNodo *n ) = 0;
  /*  virtual void vidit( StmtListNodo *n) = 0;*/
};

class PrintVisitor: public Visitor
{
public:  
  void visit( IntNodo *n );
  void visit( PlusNodo *n);
  void visit( ExprStmtNodo *n);
  void visit( StringNodo *n );
  void visit( StmtNodo *n );
  void visit( PrintStmtNodo *n );
  void visit( ExprNodo *n );
private:
  void operat( string op, Nodo * n );
  /*void visit( StmtListNodo *n)*/
};


#endif
