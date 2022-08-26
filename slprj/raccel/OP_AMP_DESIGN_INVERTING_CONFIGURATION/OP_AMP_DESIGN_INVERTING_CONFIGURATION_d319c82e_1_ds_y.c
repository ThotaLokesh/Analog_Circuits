#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_y.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_y ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t3 , NeDsMethodOutput *
t4 ) { PmRealVector out ; real_T X_idx_0 ; real_T X_idx_17 ; real_T X_idx_2 ;
real_T X_idx_34 ; real_T X_idx_35 ; real_T X_idx_36 ; real_T X_idx_37 ;
real_T X_idx_38 ; real_T X_idx_59 ; real_T X_idx_60 ; real_T X_idx_61 ;
real_T X_idx_62 ; X_idx_0 = t3 -> mX . mX [ 0 ] ; X_idx_2 = t3 -> mX . mX [ 2
] ; X_idx_17 = t3 -> mX . mX [ 17 ] ; X_idx_34 = t3 -> mX . mX [ 34 ] ;
X_idx_35 = t3 -> mX . mX [ 35 ] ; X_idx_36 = t3 -> mX . mX [ 36 ] ; X_idx_37
= t3 -> mX . mX [ 37 ] ; X_idx_38 = t3 -> mX . mX [ 38 ] ; X_idx_59 = t3 ->
mX . mX [ 59 ] ; X_idx_60 = t3 -> mX . mX [ 60 ] ; X_idx_61 = t3 -> mX . mX [
61 ] ; X_idx_62 = t3 -> mX . mX [ 62 ] ; out = t4 -> mY ; out . mX [ 0 ] =
X_idx_62 ; out . mX [ 1 ] = ( ( ( ( ( ( ( ( ( ( ( X_idx_2 * - 1.1E-5 +
X_idx_0 * 1.1E-5 ) + - X_idx_17 ) + X_idx_37 * 0.011000010999999999 ) +
X_idx_38 * 0.0110000121 ) + X_idx_34 * 1.1E-8 ) + X_idx_35 * -
1.2099999999999998E-7 ) + X_idx_36 * 1.1E-8 ) + X_idx_59 * - 0.001 ) +
X_idx_60 * - 0.001 ) + X_idx_61 * - 0.011 ) + X_idx_62 * 1.1E-5 ) + -
0.000165 ; ( void ) sys ; ( void ) t4 ; return 0 ; }
