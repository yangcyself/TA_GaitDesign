/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:58:28 GMT-08:00
 */

#ifndef XPLUSCONT_LEFTIMPACT_HH
#define XPLUSCONT_LEFTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftImpact
{

  void xPlusCont_LeftImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void xPlusCont_LeftImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    xPlusCont_LeftImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XPLUSCONT_LEFTIMPACT_HH
