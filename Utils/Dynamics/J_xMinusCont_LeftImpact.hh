/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:58:24 GMT-08:00
 */

#ifndef J_XMINUSCONT_LEFTIMPACT_HH
#define J_XMINUSCONT_LEFTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftImpact
{

  void J_xMinusCont_LeftImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_xMinusCont_LeftImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_xMinusCont_LeftImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_XMINUSCONT_LEFTIMPACT_HH