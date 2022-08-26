#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxy_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxy_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXY_P ; out .
mNumCol = 77ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 1 ; out . mJc [ 2 ] = 1 ; out . mJc [ 3 ] = 2 ; out . mJc [ 4 ] = 2 ; out
. mJc [ 5 ] = 2 ; out . mJc [ 6 ] = 2 ; out . mJc [ 7 ] = 2 ; out . mJc [ 8 ]
= 2 ; out . mJc [ 9 ] = 2 ; out . mJc [ 10 ] = 2 ; out . mJc [ 11 ] = 2 ; out
. mJc [ 12 ] = 2 ; out . mJc [ 13 ] = 2 ; out . mJc [ 14 ] = 2 ; out . mJc [
15 ] = 2 ; out . mJc [ 16 ] = 2 ; out . mJc [ 17 ] = 2 ; out . mJc [ 18 ] = 3
; out . mJc [ 19 ] = 3 ; out . mJc [ 20 ] = 3 ; out . mJc [ 21 ] = 3 ; out .
mJc [ 22 ] = 3 ; out . mJc [ 23 ] = 3 ; out . mJc [ 24 ] = 3 ; out . mJc [ 25
] = 3 ; out . mJc [ 26 ] = 3 ; out . mJc [ 27 ] = 3 ; out . mJc [ 28 ] = 3 ;
out . mJc [ 29 ] = 3 ; out . mJc [ 30 ] = 3 ; out . mJc [ 31 ] = 3 ; out .
mJc [ 32 ] = 3 ; out . mJc [ 33 ] = 3 ; out . mJc [ 34 ] = 3 ; out . mJc [ 35
] = 4 ; out . mJc [ 36 ] = 5 ; out . mJc [ 37 ] = 6 ; out . mJc [ 38 ] = 7 ;
out . mJc [ 39 ] = 8 ; out . mJc [ 40 ] = 8 ; out . mJc [ 41 ] = 8 ; out .
mJc [ 42 ] = 8 ; out . mJc [ 43 ] = 8 ; out . mJc [ 44 ] = 8 ; out . mJc [ 45
] = 8 ; out . mJc [ 46 ] = 8 ; out . mJc [ 47 ] = 8 ; out . mJc [ 48 ] = 8 ;
out . mJc [ 49 ] = 8 ; out . mJc [ 50 ] = 8 ; out . mJc [ 51 ] = 8 ; out .
mJc [ 52 ] = 8 ; out . mJc [ 53 ] = 8 ; out . mJc [ 54 ] = 8 ; out . mJc [ 55
] = 8 ; out . mJc [ 56 ] = 8 ; out . mJc [ 57 ] = 8 ; out . mJc [ 58 ] = 8 ;
out . mJc [ 59 ] = 8 ; out . mJc [ 60 ] = 9 ; out . mJc [ 61 ] = 10 ; out .
mJc [ 62 ] = 11 ; out . mJc [ 63 ] = 13 ; out . mJc [ 64 ] = 13 ; out . mJc [
65 ] = 13 ; out . mJc [ 66 ] = 13 ; out . mJc [ 67 ] = 13 ; out . mJc [ 68 ]
= 13 ; out . mJc [ 69 ] = 13 ; out . mJc [ 70 ] = 13 ; out . mJc [ 71 ] = 13
; out . mJc [ 72 ] = 13 ; out . mJc [ 73 ] = 13 ; out . mJc [ 74 ] = 13 ; out
. mJc [ 75 ] = 13 ; out . mJc [ 76 ] = 13 ; out . mJc [ 77 ] = 13 ; out . mIr
[ 0 ] = 1 ; out . mIr [ 1 ] = 1 ; out . mIr [ 2 ] = 1 ; out . mIr [ 3 ] = 1 ;
out . mIr [ 4 ] = 1 ; out . mIr [ 5 ] = 1 ; out . mIr [ 6 ] = 1 ; out . mIr [
7 ] = 1 ; out . mIr [ 8 ] = 1 ; out . mIr [ 9 ] = 1 ; out . mIr [ 10 ] = 1 ;
out . mIr [ 11 ] = 0 ; out . mIr [ 12 ] = 1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; }
