/*******************************************
 * Copyright (C) 2017 Yahoo! JAPAN Research
 *******************************************/
#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath> // std::exp
#include "util.hpp"


namespace yskip {


class FastSigmoid {
 public:
  FastSigmoid();
  ~FastSigmoid() {};
  real_t operator()(const real_t x) const;

 private:
  real_t              max_x_;
  real_t              bin_size_;
  int                 table_size_;
  std::vector<real_t> table_;
  DISALLOW_COPY_AND_ASSIGN(FastSigmoid);
};

real_t sigmoid(const real_t x, const bool exact=false);
}
