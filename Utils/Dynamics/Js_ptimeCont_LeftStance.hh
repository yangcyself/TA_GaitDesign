/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:54:57 GMT-08:00
 */

#ifndef JS_PTIMECONT_LEFTSTANCE_HH
#define JS_PTIMECONT_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStance
{

  void Js_ptimeCont_LeftStance_raw(double *p_output1, const double *var1);

  inline void Js_ptimeCont_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_ptimeCont_LeftStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_PTIMECONT_LEFTSTANCE_HH
