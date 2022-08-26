#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxf_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXF_P ; out .
mNumCol = 77ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out
. mJc [ 5 ] = 5 ; out . mJc [ 6 ] = 6 ; out . mJc [ 7 ] = 7 ; out . mJc [ 8 ]
= 8 ; out . mJc [ 9 ] = 9 ; out . mJc [ 10 ] = 10 ; out . mJc [ 11 ] = 11 ;
out . mJc [ 12 ] = 12 ; out . mJc [ 13 ] = 13 ; out . mJc [ 14 ] = 14 ; out .
mJc [ 15 ] = 15 ; out . mJc [ 16 ] = 16 ; out . mJc [ 17 ] = 17 ; out . mJc [
18 ] = 18 ; out . mJc [ 19 ] = 19 ; out . mJc [ 20 ] = 20 ; out . mJc [ 21 ]
= 21 ; out . mJc [ 22 ] = 22 ; out . mJc [ 23 ] = 23 ; out . mJc [ 24 ] = 24
; out . mJc [ 25 ] = 25 ; out . mJc [ 26 ] = 26 ; out . mJc [ 27 ] = 27 ; out
. mJc [ 28 ] = 28 ; out . mJc [ 29 ] = 29 ; out . mJc [ 30 ] = 30 ; out . mJc
[ 31 ] = 31 ; out . mJc [ 32 ] = 32 ; out . mJc [ 33 ] = 33 ; out . mJc [ 34
] = 34 ; out . mJc [ 35 ] = 34 ; out . mJc [ 36 ] = 34 ; out . mJc [ 37 ] =
35 ; out . mJc [ 38 ] = 35 ; out . mJc [ 39 ] = 35 ; out . mJc [ 40 ] = 36 ;
out . mJc [ 41 ] = 36 ; out . mJc [ 42 ] = 36 ; out . mJc [ 43 ] = 36 ; out .
mJc [ 44 ] = 37 ; out . mJc [ 45 ] = 37 ; out . mJc [ 46 ] = 37 ; out . mJc [
47 ] = 38 ; out . mJc [ 48 ] = 38 ; out . mJc [ 49 ] = 38 ; out . mJc [ 50 ]
= 39 ; out . mJc [ 51 ] = 39 ; out . mJc [ 52 ] = 39 ; out . mJc [ 53 ] = 40
; out . mJc [ 54 ] = 40 ; out . mJc [ 55 ] = 40 ; out . mJc [ 56 ] = 41 ; out
. mJc [ 57 ] = 41 ; out . mJc [ 58 ] = 41 ; out . mJc [ 59 ] = 42 ; out . mJc
[ 60 ] = 42 ; out . mJc [ 61 ] = 43 ; out . mJc [ 62 ] = 43 ; out . mJc [ 63
] = 43 ; out . mJc [ 64 ] = 43 ; out . mJc [ 65 ] = 44 ; out . mJc [ 66 ] =
45 ; out . mJc [ 67 ] = 45 ; out . mJc [ 68 ] = 46 ; out . mJc [ 69 ] = 46 ;
out . mJc [ 70 ] = 47 ; out . mJc [ 71 ] = 47 ; out . mJc [ 72 ] = 48 ; out .
mJc [ 73 ] = 48 ; out . mJc [ 74 ] = 49 ; out . mJc [ 75 ] = 49 ; out . mJc [
76 ] = 50 ; out . mJc [ 77 ] = 51 ; out . mIr [ 0 ] = 38 ; out . mIr [ 1 ] =
34 ; out . mIr [ 2 ] = 34 ; out . mIr [ 3 ] = 56 ; out . mIr [ 4 ] = 36 ; out
. mIr [ 5 ] = 36 ; out . mIr [ 6 ] = 38 ; out . mIr [ 7 ] = 40 ; out . mIr [
8 ] = 40 ; out . mIr [ 9 ] = 42 ; out . mIr [ 10 ] = 42 ; out . mIr [ 11 ] =
44 ; out . mIr [ 12 ] = 44 ; out . mIr [ 13 ] = 46 ; out . mIr [ 14 ] = 46 ;
out . mIr [ 15 ] = 48 ; out . mIr [ 16 ] = 48 ; out . mIr [ 17 ] = 50 ; out .
mIr [ 18 ] = 50 ; out . mIr [ 19 ] = 53 ; out . mIr [ 20 ] = 53 ; out . mIr [
21 ] = 56 ; out . mIr [ 22 ] = 58 ; out . mIr [ 23 ] = 58 ; out . mIr [ 24 ]
= 61 ; out . mIr [ 25 ] = 61 ; out . mIr [ 26 ] = 64 ; out . mIr [ 27 ] = 64
; out . mIr [ 28 ] = 67 ; out . mIr [ 29 ] = 67 ; out . mIr [ 30 ] = 70 ; out
. mIr [ 31 ] = 70 ; out . mIr [ 32 ] = 73 ; out . mIr [ 33 ] = 73 ; out . mIr
[ 34 ] = 38 ; out . mIr [ 35 ] = 34 ; out . mIr [ 36 ] = 36 ; out . mIr [ 37
] = 40 ; out . mIr [ 38 ] = 42 ; out . mIr [ 39 ] = 44 ; out . mIr [ 40 ] =
46 ; out . mIr [ 41 ] = 48 ; out . mIr [ 42 ] = 50 ; out . mIr [ 43 ] = 53 ;
out . mIr [ 44 ] = 56 ; out . mIr [ 45 ] = 58 ; out . mIr [ 46 ] = 61 ; out .
mIr [ 47 ] = 64 ; out . mIr [ 48 ] = 67 ; out . mIr [ 49 ] = 70 ; out . mIr [
50 ] = 73 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
