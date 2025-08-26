#ifndef _NODO_
#define _NODO_

#include <iostream>
#include <string>
#include <list>
using namespace std;


/**
   Clase Nodo, de la que heredan todos los nodos
*/
class Nodo 
{
public:
  string valStr;
  int val;
  int chlds;
  
  /* Mantiene una lista con sus hijos */
  list<class Nodo *> listChlds;

  /* Método accept para recibir un objeto Visitor */
  virtual void accept( class Visitor &v) = 0;
};


/**
   Clase IntNodo
   para los no-terminales atom-NUMBER de la gramática.
*/
class IntNodo: public Nodo
{
public:
  virtual void accept( Visitor &v );   
};


/**
   Clase StringNodo
   para los no-terminales atom-STRING de la gramática.
*/
class StringNodo: public Nodo
{
public:
  virtual void accept( Visitor &v );   
};


/**
   Clase ExprNodo
   para los no-terminales expr de la gramática.
*/
class ExprNodo: public Nodo
{
public:
  virtual void accept( Visitor &v );   
};



/**
   Clase PlusNodo
   para el no-terminal arith_expr de la gramática.
*/
class PlusNodo: public Nodo
{
public:
  virtual void accept( Visitor &v );
};


/**
   Clase ExprStmtNodo
   para el no-terminal expr_stmt de la gramática.
*/
class ExprStmtNodo: public Nodo
{
public:
  virtual void accept( Visitor &v );
};


/**
   Clase PrintStmtNodo
   para el no-terminal print_stmt de la gramática.
*/
class PrintStmtNodo: public Nodo
{
public:
  virtual void accept( Visitor &v );
};



/**
   Clase StmtNodo
   para el no-terminal stmt de la gramática.
*/
class StmtNodo: public Nodo
{
public:
  virtual void accept( Visitor &v );
};




/*
class StmtListNodo: public Nodo
{
public:
  virtual void accept( Visitor &v );
  };*/









  
/*
int main ( void ) 
{
  
  Nodo * nodo = new IntNodo();
  Nodo * nodo1 = new ExprStmtNodo();
  PrintVisitor visitor;

  nodo->accept(visitor);

  cout << "chlds: " << nodo->chlds;

  return 0;
}
*/

#endif
