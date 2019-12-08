/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:58:12 GMT-08:00
 */

#ifndef J_U_RIGHTFOOTHEIGHT_LEFTSTANCE_HH
#define J_U_RIGHTFOOTHEIGHT_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStance
{

  void J_u_rightFootHeight_LeftStance_raw(double *p_output1, const double *var1);

  inline void J_u_rightFootHeight_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_u_rightFootHeight_LeftStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_U_RIGHTFOOTHEIGHT_LEFTSTANCE_HH
