#ifndef _VISITORC_
#define _VISITORC_

#include <list>
#include "Visitor.h++"
#include "Nodo.h++"

void PrintVisitor::visit( IntNodo *n )
{
  cout << "(" << n->val << ")";
}
  

void PrintVisitor::visit( PlusNodo *n ) 
{    
  operat( "PlusNodo", n );
}
  

void PrintVisitor::visit( ExprStmtNodo *n )
{
  operat( "ExprStmtNodo", n );
}


void PrintVisitor::visit( StringNodo *n )
{
  operat( "StringNodo", n );
}


void PrintVisitor::visit( PrintStmtNodo *n )
{
  operat( "PrintStmtNodo", n );
}


void PrintVisitor::visit( StmtNodo *n )
{
  operat( "StmtNodo", n );
}


void PrintVisitor::visit( ExprNodo *n )
{
  operat( "ExprNodo", n );
}


void PrintVisitor::operat( string op, Nodo * n )
{
  cout << "(" << op;
  list<class Nodo *>::iterator i = n->listChlds.begin();
  while ( i != n->listChlds.end() )
    (*i++)->accept( *this );
  
  cout << ")";
  delete *i;
}

/*  
    void PrintVisitor::visit( StmtListNodo *n)
    {
    cout << "StmtListNodo\t";
    }
*/

#endif
