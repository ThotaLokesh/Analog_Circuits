#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_il.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_il ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { static boolean_T _cg_const_1 [ 675 ] = { true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , false , true , true , true , true , false , true , true
, true , true , true , true , true , false , true , true , true , true , true
, false , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , false , true , true
, true , true , false , true , true , true , true , true , true , true ,
false , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , false , true , true , true , true , true , true , true ,
false , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , false , true , true , true , true , true , true , true ,
false , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , false , true , true , true , true , true , true , true ,
false , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , false , true , true , true , true , true , true , true ,
false , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , false , true , true , true , true , true , true , true ,
false , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , false , true , true , true , true , true , true , true ,
false , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , false , true , true , true , true , true , true , true ,
false , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true } ; PmBoolVector
out ; int32_T b ; boolean_T t0 [ 675 ] ; ( void ) t1 ; out = t2 -> mOBS_IL ;
for ( b = 0 ; b < 675 ; b ++ ) { t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0
; b < 675 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t2
; return 0 ; }
