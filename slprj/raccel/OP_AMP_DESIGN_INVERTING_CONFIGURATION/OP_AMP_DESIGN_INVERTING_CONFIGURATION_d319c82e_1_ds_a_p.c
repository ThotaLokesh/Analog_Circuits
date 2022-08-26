#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_a_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_a_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { static int32_T _cg_const_2 [ 333 ] = { 4 , 16 , 37 , 51 , 55 , 57 , 59
, 72 , 75 , 0 , 55 , 57 , 59 , 1 , 16 , 51 , 55 , 57 , 59 , 72 , 75 , 21 , 35
, 37 , 52 , 54 , 55 , 2 , 35 , 37 , 3 , 37 , 5 , 39 , 6 , 57 , 60 , 62 , 7 ,
41 , 8 , 60 , 63 , 65 , 9 , 43 , 10 , 63 , 66 , 68 , 11 , 45 , 12 , 66 , 69 ,
71 , 13 , 47 , 14 , 69 , 72 , 74 , 15 , 49 , 16 , 72 , 75 , 17 , 51 , 18 , 52
, 54 , 19 , 54 , 20 , 55 , 22 , 57 , 23 , 59 , 24 , 60 , 25 , 62 , 26 , 63 ,
27 , 65 , 28 , 66 , 29 , 68 , 30 , 69 , 31 , 71 , 32 , 72 , 33 , 74 , 5 , 16
, 37 , 39 , 51 , 55 , 57 , 59 , 72 , 75 , 3 , 4 , 16 , 35 , 37 , 39 , 51 , 55
, 57 , 59 , 72 , 75 , 4 , 16 , 37 , 39 , 51 , 55 , 57 , 59 , 72 , 75 , 0 , 16
, 23 , 51 , 55 , 57 , 59 , 72 , 75 , 1 , 3 , 16 , 35 , 37 , 51 , 55 , 57 , 59
, 72 , 75 , 0 , 1 , 20 , 21 , 23 , 35 , 37 , 52 , 54 , 55 , 57 , 59 , 19 , 21
, 35 , 37 , 52 , 54 , 55 , 2 , 19 , 35 , 37 , 52 , 54 , 2 , 3 , 7 , 41 , 57 ,
60 , 62 , 6 , 25 , 41 , 57 , 60 , 62 , 6 , 41 , 57 , 60 , 62 , 9 , 43 , 60 ,
63 , 65 , 8 , 27 , 43 , 60 , 63 , 65 , 8 , 43 , 60 , 63 , 65 , 11 , 45 , 63 ,
66 , 68 , 10 , 29 , 45 , 63 , 66 , 68 , 10 , 45 , 63 , 66 , 68 , 13 , 47 , 66
, 69 , 71 , 12 , 31 , 47 , 66 , 69 , 71 , 12 , 47 , 66 , 69 , 71 , 15 , 49 ,
69 , 72 , 74 , 14 , 33 , 49 , 69 , 72 , 74 , 14 , 49 , 69 , 72 , 74 , 17 , 51
, 72 , 75 , 16 , 51 , 72 , 75 , 16 , 32 , 33 , 51 , 72 , 74 , 75 , 16 , 51 ,
72 , 75 , 76 , 18 , 52 , 54 , 18 , 19 , 20 , 21 , 22 , 23 , 25 , 57 , 59 , 60
, 62 , 22 , 23 , 24 , 25 , 27 , 60 , 62 , 63 , 65 , 24 , 25 , 26 , 27 , 29 ,
63 , 65 , 66 , 68 , 26 , 27 , 28 , 29 , 31 , 66 , 68 , 69 , 71 , 28 , 29 , 30
, 31 , 33 , 69 , 71 , 72 , 74 , 30 , 31 , 32 , 33 } ; PmSparsityPattern out ;
int32_T b ; ( void ) t1 ; out = t2 -> mA_P ; out . mNumCol = 77ULL ; out .
mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 9 ; out . mJc [ 2 ]
= 13 ; out . mJc [ 3 ] = 21 ; out . mJc [ 4 ] = 27 ; out . mJc [ 5 ] = 30 ;
out . mJc [ 6 ] = 32 ; out . mJc [ 7 ] = 34 ; out . mJc [ 8 ] = 38 ; out .
mJc [ 9 ] = 40 ; out . mJc [ 10 ] = 44 ; out . mJc [ 11 ] = 46 ; out . mJc [
12 ] = 50 ; out . mJc [ 13 ] = 52 ; out . mJc [ 14 ] = 56 ; out . mJc [ 15 ]
= 58 ; out . mJc [ 16 ] = 62 ; out . mJc [ 17 ] = 64 ; out . mJc [ 18 ] = 67
; out . mJc [ 19 ] = 69 ; out . mJc [ 20 ] = 72 ; out . mJc [ 21 ] = 74 ; out
. mJc [ 22 ] = 76 ; out . mJc [ 23 ] = 78 ; out . mJc [ 24 ] = 80 ; out . mJc
[ 25 ] = 82 ; out . mJc [ 26 ] = 84 ; out . mJc [ 27 ] = 86 ; out . mJc [ 28
] = 88 ; out . mJc [ 29 ] = 90 ; out . mJc [ 30 ] = 92 ; out . mJc [ 31 ] =
94 ; out . mJc [ 32 ] = 96 ; out . mJc [ 33 ] = 98 ; out . mJc [ 34 ] = 100 ;
out . mJc [ 35 ] = 110 ; out . mJc [ 36 ] = 122 ; out . mJc [ 37 ] = 132 ;
out . mJc [ 38 ] = 141 ; out . mJc [ 39 ] = 152 ; out . mJc [ 40 ] = 154 ;
out . mJc [ 41 ] = 164 ; out . mJc [ 42 ] = 171 ; out . mJc [ 43 ] = 177 ;
out . mJc [ 44 ] = 179 ; out . mJc [ 45 ] = 184 ; out . mJc [ 46 ] = 190 ;
out . mJc [ 47 ] = 195 ; out . mJc [ 48 ] = 200 ; out . mJc [ 49 ] = 206 ;
out . mJc [ 50 ] = 211 ; out . mJc [ 51 ] = 216 ; out . mJc [ 52 ] = 222 ;
out . mJc [ 53 ] = 227 ; out . mJc [ 54 ] = 232 ; out . mJc [ 55 ] = 238 ;
out . mJc [ 56 ] = 243 ; out . mJc [ 57 ] = 248 ; out . mJc [ 58 ] = 254 ;
out . mJc [ 59 ] = 259 ; out . mJc [ 60 ] = 263 ; out . mJc [ 61 ] = 267 ;
out . mJc [ 62 ] = 274 ; out . mJc [ 63 ] = 279 ; out . mJc [ 64 ] = 282 ;
out . mJc [ 65 ] = 284 ; out . mJc [ 66 ] = 286 ; out . mJc [ 67 ] = 293 ;
out . mJc [ 68 ] = 295 ; out . mJc [ 69 ] = 302 ; out . mJc [ 70 ] = 304 ;
out . mJc [ 71 ] = 311 ; out . mJc [ 72 ] = 313 ; out . mJc [ 73 ] = 320 ;
out . mJc [ 74 ] = 322 ; out . mJc [ 75 ] = 329 ; out . mJc [ 76 ] = 331 ;
out . mJc [ 77 ] = 333 ; for ( b = 0 ; b < 333 ; b ++ ) { out . mIr [ b ] =
_cg_const_2 [ b ] ; } ( void ) sys ; ( void ) t2 ; return 0 ; }
