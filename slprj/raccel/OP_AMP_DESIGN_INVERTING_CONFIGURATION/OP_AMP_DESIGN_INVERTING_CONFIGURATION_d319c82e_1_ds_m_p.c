#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_m_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_m_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mM_P ; out . mNumCol
= 77ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ;
out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [
5 ] = 5 ; out . mJc [ 6 ] = 6 ; out . mJc [ 7 ] = 7 ; out . mJc [ 8 ] = 8 ;
out . mJc [ 9 ] = 9 ; out . mJc [ 10 ] = 10 ; out . mJc [ 11 ] = 11 ; out .
mJc [ 12 ] = 12 ; out . mJc [ 13 ] = 13 ; out . mJc [ 14 ] = 14 ; out . mJc [
15 ] = 15 ; out . mJc [ 16 ] = 16 ; out . mJc [ 17 ] = 17 ; out . mJc [ 18 ]
= 18 ; out . mJc [ 19 ] = 19 ; out . mJc [ 20 ] = 20 ; out . mJc [ 21 ] = 21
; out . mJc [ 22 ] = 22 ; out . mJc [ 23 ] = 23 ; out . mJc [ 24 ] = 24 ; out
. mJc [ 25 ] = 25 ; out . mJc [ 26 ] = 26 ; out . mJc [ 27 ] = 27 ; out . mJc
[ 28 ] = 28 ; out . mJc [ 29 ] = 29 ; out . mJc [ 30 ] = 30 ; out . mJc [ 31
] = 31 ; out . mJc [ 32 ] = 32 ; out . mJc [ 33 ] = 33 ; out . mJc [ 34 ] =
34 ; out . mJc [ 35 ] = 34 ; out . mJc [ 36 ] = 34 ; out . mJc [ 37 ] = 34 ;
out . mJc [ 38 ] = 34 ; out . mJc [ 39 ] = 34 ; out . mJc [ 40 ] = 34 ; out .
mJc [ 41 ] = 34 ; out . mJc [ 42 ] = 34 ; out . mJc [ 43 ] = 34 ; out . mJc [
44 ] = 34 ; out . mJc [ 45 ] = 34 ; out . mJc [ 46 ] = 34 ; out . mJc [ 47 ]
= 34 ; out . mJc [ 48 ] = 34 ; out . mJc [ 49 ] = 34 ; out . mJc [ 50 ] = 34
; out . mJc [ 51 ] = 34 ; out . mJc [ 52 ] = 34 ; out . mJc [ 53 ] = 34 ; out
. mJc [ 54 ] = 34 ; out . mJc [ 55 ] = 34 ; out . mJc [ 56 ] = 34 ; out . mJc
[ 57 ] = 34 ; out . mJc [ 58 ] = 34 ; out . mJc [ 59 ] = 34 ; out . mJc [ 60
] = 34 ; out . mJc [ 61 ] = 34 ; out . mJc [ 62 ] = 34 ; out . mJc [ 63 ] =
34 ; out . mJc [ 64 ] = 34 ; out . mJc [ 65 ] = 34 ; out . mJc [ 66 ] = 34 ;
out . mJc [ 67 ] = 34 ; out . mJc [ 68 ] = 34 ; out . mJc [ 69 ] = 34 ; out .
mJc [ 70 ] = 34 ; out . mJc [ 71 ] = 34 ; out . mJc [ 72 ] = 34 ; out . mJc [
73 ] = 34 ; out . mJc [ 74 ] = 34 ; out . mJc [ 75 ] = 34 ; out . mJc [ 76 ]
= 34 ; out . mJc [ 77 ] = 34 ; out . mIr [ 0 ] = 4 ; out . mIr [ 1 ] = 0 ;
out . mIr [ 2 ] = 1 ; out . mIr [ 3 ] = 21 ; out . mIr [ 4 ] = 2 ; out . mIr
[ 5 ] = 3 ; out . mIr [ 6 ] = 5 ; out . mIr [ 7 ] = 6 ; out . mIr [ 8 ] = 7 ;
out . mIr [ 9 ] = 8 ; out . mIr [ 10 ] = 9 ; out . mIr [ 11 ] = 10 ; out .
mIr [ 12 ] = 11 ; out . mIr [ 13 ] = 12 ; out . mIr [ 14 ] = 13 ; out . mIr [
15 ] = 14 ; out . mIr [ 16 ] = 15 ; out . mIr [ 17 ] = 16 ; out . mIr [ 18 ]
= 17 ; out . mIr [ 19 ] = 18 ; out . mIr [ 20 ] = 19 ; out . mIr [ 21 ] = 20
; out . mIr [ 22 ] = 22 ; out . mIr [ 23 ] = 23 ; out . mIr [ 24 ] = 24 ; out
. mIr [ 25 ] = 25 ; out . mIr [ 26 ] = 26 ; out . mIr [ 27 ] = 27 ; out . mIr
[ 28 ] = 28 ; out . mIr [ 29 ] = 29 ; out . mIr [ 30 ] = 30 ; out . mIr [ 31
] = 31 ; out . mIr [ 32 ] = 32 ; out . mIr [ 33 ] = 33 ; ( void ) sys ; (
void ) t2 ; return 0 ; }
