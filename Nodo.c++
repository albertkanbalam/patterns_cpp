#ifndef _NODOC_
#define _NODOC_

#include "Nodo.h++"
#include "Visitor.h++"


void IntNodo::accept( Visitor &v )
{
  v.visit( this );
}


void StringNodo::accept( Visitor &v )
{
  v.visit( this );
}



void PlusNodo::accept( Visitor &v ) 
{
  v.visit( this );
}



void ExprStmtNodo::accept( Visitor &v )
{
  v.visit( this );
}



void PrintStmtNodo::accept( Visitor &v )
{
  v.visit( this );
}


void ExprNodo::accept( Visitor &v )
{
  v.visit( this );
}


void StmtNodo::accept( Visitor &v )
{
  v.visit( this );
}


/*
void StmtListNodo::accept( Visitor &v )
{
  v.visit( this );
}
*/

#endif
