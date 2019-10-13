#pragma once
#include "University.h"

class Keeper : public University
{
public:
  Keeper();
  Keeper( const Keeper & );
  ~Keeper();

  void show();
};