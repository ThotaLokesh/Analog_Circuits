#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_tdxf_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_tdxf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { static int32_T _cg_const_2 [ 384 ] = { 4 , 16 , 37 , 38 , 51 , 55 , 57
, 59 , 72 , 75 , 0 , 34 , 55 , 57 , 59 , 1 , 16 , 34 , 51 , 55 , 57 , 59 , 72
, 75 , 21 , 35 , 37 , 52 , 54 , 55 , 56 , 2 , 35 , 36 , 37 , 3 , 36 , 37 , 5
, 38 , 39 , 6 , 40 , 57 , 60 , 62 , 7 , 40 , 41 , 8 , 42 , 60 , 63 , 65 , 9 ,
42 , 43 , 10 , 44 , 63 , 66 , 68 , 11 , 44 , 45 , 12 , 46 , 66 , 69 , 71 , 13
, 46 , 47 , 14 , 48 , 69 , 72 , 74 , 15 , 48 , 49 , 16 , 50 , 72 , 75 , 17 ,
50 , 51 , 18 , 52 , 53 , 54 , 19 , 53 , 54 , 20 , 55 , 56 , 22 , 57 , 58 , 23
, 58 , 59 , 24 , 60 , 61 , 25 , 61 , 62 , 26 , 63 , 64 , 27 , 64 , 65 , 28 ,
66 , 67 , 29 , 67 , 68 , 30 , 69 , 70 , 31 , 70 , 71 , 32 , 72 , 73 , 33 , 73
, 74 , 5 , 16 , 37 , 39 , 51 , 55 , 57 , 59 , 72 , 75 , 3 , 4 , 16 , 35 , 37
, 39 , 51 , 55 , 57 , 59 , 72 , 75 , 4 , 16 , 37 , 38 , 39 , 51 , 55 , 57 ,
59 , 72 , 75 , 0 , 16 , 23 , 51 , 55 , 57 , 59 , 72 , 75 , 1 , 3 , 16 , 35 ,
37 , 51 , 55 , 57 , 59 , 72 , 75 , 0 , 1 , 34 , 20 , 21 , 23 , 35 , 37 , 52 ,
54 , 55 , 57 , 59 , 19 , 21 , 35 , 37 , 52 , 54 , 55 , 2 , 19 , 35 , 37 , 52
, 54 , 2 , 3 , 36 , 7 , 41 , 57 , 60 , 62 , 6 , 25 , 41 , 57 , 60 , 62 , 6 ,
40 , 41 , 57 , 60 , 62 , 9 , 43 , 60 , 63 , 65 , 8 , 27 , 43 , 60 , 63 , 65 ,
8 , 42 , 43 , 60 , 63 , 65 , 11 , 45 , 63 , 66 , 68 , 10 , 29 , 45 , 63 , 66
, 68 , 10 , 44 , 45 , 63 , 66 , 68 , 13 , 47 , 66 , 69 , 71 , 12 , 31 , 47 ,
66 , 69 , 71 , 12 , 46 , 47 , 66 , 69 , 71 , 15 , 49 , 69 , 72 , 74 , 14 , 33
, 49 , 69 , 72 , 74 , 14 , 48 , 49 , 69 , 72 , 74 , 17 , 51 , 72 , 75 , 16 ,
50 , 51 , 72 , 75 , 16 , 32 , 33 , 51 , 72 , 74 , 75 , 16 , 51 , 72 , 75 , 76
, 18 , 52 , 54 , 18 , 19 , 53 , 20 , 21 , 56 , 22 , 23 , 25 , 57 , 59 , 60 ,
62 , 22 , 23 , 58 , 24 , 25 , 27 , 60 , 62 , 63 , 65 , 24 , 25 , 61 , 26 , 27
, 29 , 63 , 65 , 66 , 68 , 26 , 27 , 64 , 28 , 29 , 31 , 66 , 68 , 69 , 71 ,
28 , 29 , 67 , 30 , 31 , 33 , 69 , 71 , 72 , 74 , 30 , 31 , 70 , 32 , 33 , 73
} ; PmSparsityPattern out ; int32_T b ; ( void ) t1 ; out = t2 -> mTDXF_P ;
out . mNumCol = 77ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 10 ; out . mJc [ 2 ] = 15 ; out . mJc [ 3 ] = 24 ; out . mJc [ 4
] = 31 ; out . mJc [ 5 ] = 35 ; out . mJc [ 6 ] = 38 ; out . mJc [ 7 ] = 41 ;
out . mJc [ 8 ] = 46 ; out . mJc [ 9 ] = 49 ; out . mJc [ 10 ] = 54 ; out .
mJc [ 11 ] = 57 ; out . mJc [ 12 ] = 62 ; out . mJc [ 13 ] = 65 ; out . mJc [
14 ] = 70 ; out . mJc [ 15 ] = 73 ; out . mJc [ 16 ] = 78 ; out . mJc [ 17 ]
= 81 ; out . mJc [ 18 ] = 85 ; out . mJc [ 19 ] = 88 ; out . mJc [ 20 ] = 92
; out . mJc [ 21 ] = 95 ; out . mJc [ 22 ] = 98 ; out . mJc [ 23 ] = 101 ;
out . mJc [ 24 ] = 104 ; out . mJc [ 25 ] = 107 ; out . mJc [ 26 ] = 110 ;
out . mJc [ 27 ] = 113 ; out . mJc [ 28 ] = 116 ; out . mJc [ 29 ] = 119 ;
out . mJc [ 30 ] = 122 ; out . mJc [ 31 ] = 125 ; out . mJc [ 32 ] = 128 ;
out . mJc [ 33 ] = 131 ; out . mJc [ 34 ] = 134 ; out . mJc [ 35 ] = 144 ;
out . mJc [ 36 ] = 156 ; out . mJc [ 37 ] = 167 ; out . mJc [ 38 ] = 176 ;
out . mJc [ 39 ] = 187 ; out . mJc [ 40 ] = 190 ; out . mJc [ 41 ] = 200 ;
out . mJc [ 42 ] = 207 ; out . mJc [ 43 ] = 213 ; out . mJc [ 44 ] = 216 ;
out . mJc [ 45 ] = 221 ; out . mJc [ 46 ] = 227 ; out . mJc [ 47 ] = 233 ;
out . mJc [ 48 ] = 238 ; out . mJc [ 49 ] = 244 ; out . mJc [ 50 ] = 250 ;
out . mJc [ 51 ] = 255 ; out . mJc [ 52 ] = 261 ; out . mJc [ 53 ] = 267 ;
out . mJc [ 54 ] = 272 ; out . mJc [ 55 ] = 278 ; out . mJc [ 56 ] = 284 ;
out . mJc [ 57 ] = 289 ; out . mJc [ 58 ] = 295 ; out . mJc [ 59 ] = 301 ;
out . mJc [ 60 ] = 305 ; out . mJc [ 61 ] = 310 ; out . mJc [ 62 ] = 317 ;
out . mJc [ 63 ] = 322 ; out . mJc [ 64 ] = 325 ; out . mJc [ 65 ] = 328 ;
out . mJc [ 66 ] = 331 ; out . mJc [ 67 ] = 338 ; out . mJc [ 68 ] = 341 ;
out . mJc [ 69 ] = 348 ; out . mJc [ 70 ] = 351 ; out . mJc [ 71 ] = 358 ;
out . mJc [ 72 ] = 361 ; out . mJc [ 73 ] = 368 ; out . mJc [ 74 ] = 371 ;
out . mJc [ 75 ] = 378 ; out . mJc [ 76 ] = 381 ; out . mJc [ 77 ] = 384 ;
for ( b = 0 ; b < 384 ; b ++ ) { out . mIr [ b ] = _cg_const_2 [ b ] ; } (
void ) sys ; ( void ) t2 ; return 0 ; }
