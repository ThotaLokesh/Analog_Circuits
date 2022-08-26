#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_m.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_m ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mM ; out . mX [ 0 ] = -
8.0E-11 ; out . mX [ 1 ] = - 8.0E-11 ; out . mX [ 2 ] = - 2.7E-10 ; out . mX
[ 3 ] = - 1.58E-10 ; out . mX [ 4 ] = - 8.0E-11 ; out . mX [ 5 ] = - 2.7E-10
; out . mX [ 6 ] = - 2.7E-10 ; out . mX [ 7 ] = - 8.0E-11 ; out . mX [ 8 ] =
- 2.7E-10 ; out . mX [ 9 ] = - 8.0E-11 ; out . mX [ 10 ] = - 2.7E-10 ; out .
mX [ 11 ] = - 8.0E-11 ; out . mX [ 12 ] = - 2.7E-10 ; out . mX [ 13 ] = -
8.0E-11 ; out . mX [ 14 ] = - 2.7E-10 ; out . mX [ 15 ] = - 8.0E-11 ; out .
mX [ 16 ] = - 2.7E-10 ; out . mX [ 17 ] = - 8.0E-11 ; out . mX [ 18 ] = -
2.7E-10 ; out . mX [ 19 ] = - 2.4E-11 ; out . mX [ 20 ] = - 1.58E-10 ; out .
mX [ 21 ] = - 2.4E-11 ; out . mX [ 22 ] = - 2.4E-11 ; out . mX [ 23 ] = -
1.58E-10 ; out . mX [ 24 ] = - 2.4E-11 ; out . mX [ 25 ] = - 1.58E-10 ; out .
mX [ 26 ] = - 2.4E-11 ; out . mX [ 27 ] = - 1.58E-10 ; out . mX [ 28 ] = -
2.4E-11 ; out . mX [ 29 ] = - 1.58E-10 ; out . mX [ 30 ] = - 2.4E-11 ; out .
mX [ 31 ] = - 1.58E-10 ; out . mX [ 32 ] = - 2.4E-11 ; out . mX [ 33 ] = -
1.58E-10 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
