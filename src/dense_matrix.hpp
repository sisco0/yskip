/*******************************************
 * Copyright (C) 2017 Yahoo! JAPAN Research
 *******************************************/
#pragma once
#include <stdio.h>
#include <stdlib.h> //
#include <numeric>  // accumulate
#include <iostream>
#include <unordered_set>
#include <cassert>
#include "util.hpp"


namespace yskip {


class DenseMatrix {
 public:
  DenseMatrix();
  DenseMatrix(const DenseMatrix& other);
  DenseMatrix(const int row_num, const int col_num, const real_t val=0.0);
  ~DenseMatrix();
  DenseMatrix& operator=(const DenseMatrix& other);
  const real_t* operator[](const int row) const;
  real_t* operator[](const int row);
  void reduce(const std::unordered_set<int>& reserved_rows);
  int row_num() const;
  int col_num() const;
  int load(FILE* is);
  int save(FILE* os) const;
  
  
 private:
  int     row_num_;
  int     col_num_;
  real_t* data_;
};

}
