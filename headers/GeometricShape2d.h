#pragma once

#include "point.h"

using namespace Shapes2d;

class shape
{
   public :

   virtual void Drawing()=0;

   shape()
   {}
 

   protected :
     
     Point mandatory;

};