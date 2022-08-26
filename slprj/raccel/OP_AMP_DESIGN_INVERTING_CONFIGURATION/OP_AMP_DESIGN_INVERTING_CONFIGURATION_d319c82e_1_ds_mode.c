#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_mode.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_mode ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmIntVector out ; real_T N_Channel_MOSFET1_mos_vds ; real_T
N_Channel_MOSFET2_mos_vds ; real_T N_Channel_MOSFET3_mos_vds ; real_T
N_Channel_MOSFET4_mos_vds ; real_T N_Channel_MOSFET5_mos_vds ; real_T
N_Channel_MOSFET6_mos_vds ; real_T N_Channel_MOSFET7_mos_vds ; real_T
N_Channel_MOSFET8_mos_vds ; real_T N_Channel_MOSFET_mos_vds ; real_T X_idx_0
; real_T X_idx_1 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T X_idx_12 ;
real_T X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ; real_T X_idx_16 ;
real_T X_idx_17 ; real_T X_idx_18 ; real_T X_idx_19 ; real_T X_idx_2 ; real_T
X_idx_20 ; real_T X_idx_21 ; real_T X_idx_22 ; real_T X_idx_23 ; real_T
X_idx_24 ; real_T X_idx_25 ; real_T X_idx_26 ; real_T X_idx_27 ; real_T
X_idx_28 ; real_T X_idx_29 ; real_T X_idx_3 ; real_T X_idx_30 ; real_T
X_idx_31 ; real_T X_idx_32 ; real_T X_idx_33 ; real_T X_idx_4 ; real_T
X_idx_5 ; real_T X_idx_6 ; real_T X_idx_7 ; real_T X_idx_8 ; real_T X_idx_9 ;
real_T intrm_sf_mf_102 ; real_T intrm_sf_mf_106 ; real_T intrm_sf_mf_109 ;
real_T intrm_sf_mf_11 ; real_T intrm_sf_mf_18 ; real_T intrm_sf_mf_25 ;
real_T intrm_sf_mf_32 ; real_T intrm_sf_mf_39 ; real_T intrm_sf_mf_4 ; real_T
intrm_sf_mf_46 ; real_T intrm_sf_mf_53 ; real_T intrm_sf_mf_60 ; real_T
intrm_sf_mf_99 ; X_idx_0 = t1 -> mX . mX [ 0 ] ; X_idx_1 = t1 -> mX . mX [ 1
] ; X_idx_2 = t1 -> mX . mX [ 2 ] ; X_idx_3 = t1 -> mX . mX [ 3 ] ; X_idx_4 =
t1 -> mX . mX [ 4 ] ; X_idx_5 = t1 -> mX . mX [ 5 ] ; X_idx_6 = t1 -> mX . mX
[ 6 ] ; X_idx_7 = t1 -> mX . mX [ 7 ] ; X_idx_8 = t1 -> mX . mX [ 8 ] ;
X_idx_9 = t1 -> mX . mX [ 9 ] ; X_idx_10 = t1 -> mX . mX [ 10 ] ; X_idx_11 =
t1 -> mX . mX [ 11 ] ; X_idx_12 = t1 -> mX . mX [ 12 ] ; X_idx_13 = t1 -> mX
. mX [ 13 ] ; X_idx_14 = t1 -> mX . mX [ 14 ] ; X_idx_15 = t1 -> mX . mX [ 15
] ; X_idx_16 = t1 -> mX . mX [ 16 ] ; X_idx_17 = t1 -> mX . mX [ 17 ] ;
X_idx_18 = t1 -> mX . mX [ 18 ] ; X_idx_19 = t1 -> mX . mX [ 19 ] ; X_idx_20
= t1 -> mX . mX [ 20 ] ; X_idx_21 = t1 -> mX . mX [ 21 ] ; X_idx_22 = t1 ->
mX . mX [ 22 ] ; X_idx_23 = t1 -> mX . mX [ 23 ] ; X_idx_24 = t1 -> mX . mX [
24 ] ; X_idx_25 = t1 -> mX . mX [ 25 ] ; X_idx_26 = t1 -> mX . mX [ 26 ] ;
X_idx_27 = t1 -> mX . mX [ 27 ] ; X_idx_28 = t1 -> mX . mX [ 28 ] ; X_idx_29
= t1 -> mX . mX [ 29 ] ; X_idx_30 = t1 -> mX . mX [ 30 ] ; X_idx_31 = t1 ->
mX . mX [ 31 ] ; X_idx_32 = t1 -> mX . mX [ 32 ] ; X_idx_33 = t1 -> mX . mX [
33 ] ; out = t2 -> mMODE ; N_Channel_MOSFET_mos_vds = - X_idx_1 + X_idx_2 ;
N_Channel_MOSFET1_mos_vds = - X_idx_4 + X_idx_5 ; N_Channel_MOSFET2_mos_vds =
- X_idx_0 + X_idx_6 ; N_Channel_MOSFET3_mos_vds = - X_idx_7 + X_idx_8 ;
N_Channel_MOSFET4_mos_vds = - X_idx_9 + X_idx_10 ; N_Channel_MOSFET5_mos_vds
= - X_idx_11 + X_idx_12 ; N_Channel_MOSFET6_mos_vds = - X_idx_13 + X_idx_14 ;
N_Channel_MOSFET7_mos_vds = - X_idx_15 + X_idx_16 ; N_Channel_MOSFET8_mos_vds
= - X_idx_17 + X_idx_18 ; intrm_sf_mf_99 = - ( - X_idx_28 + X_idx_29 ) ;
intrm_sf_mf_102 = - X_idx_29 - ( - ( - X_idx_28 + X_idx_29 ) ) ;
intrm_sf_mf_106 = - ( - X_idx_30 + X_idx_31 ) ; intrm_sf_mf_109 = - X_idx_31
- intrm_sf_mf_106 ; intrm_sf_mf_11 = X_idx_5 - N_Channel_MOSFET1_mos_vds ;
X_idx_30 = - ( - X_idx_32 + X_idx_33 ) ; X_idx_32 = - X_idx_33 - X_idx_30 ;
intrm_sf_mf_18 = X_idx_6 - N_Channel_MOSFET2_mos_vds ; intrm_sf_mf_25 =
X_idx_8 - N_Channel_MOSFET3_mos_vds ; intrm_sf_mf_32 = X_idx_10 -
N_Channel_MOSFET4_mos_vds ; intrm_sf_mf_39 = X_idx_12 -
N_Channel_MOSFET5_mos_vds ; intrm_sf_mf_4 = X_idx_2 -
N_Channel_MOSFET_mos_vds ; intrm_sf_mf_46 = X_idx_14 -
N_Channel_MOSFET6_mos_vds ; intrm_sf_mf_53 = X_idx_16 -
N_Channel_MOSFET7_mos_vds ; intrm_sf_mf_60 = X_idx_18 -
N_Channel_MOSFET8_mos_vds ; X_idx_17 = - ( - X_idx_19 + X_idx_20 ) ; X_idx_28
= - X_idx_20 - X_idx_17 ; X_idx_13 = - ( - X_idx_21 + X_idx_3 ) ; X_idx_15 =
- X_idx_3 - X_idx_13 ; X_idx_9 = - ( - X_idx_22 + X_idx_23 ) ; X_idx_11 = -
X_idx_23 - X_idx_9 ; X_idx_0 = - ( - X_idx_24 + X_idx_25 ) ; X_idx_7 = -
X_idx_25 - X_idx_0 ; X_idx_1 = - ( - X_idx_26 + X_idx_27 ) ; X_idx_4 = -
X_idx_27 - X_idx_1 ; out . mX [ 0 ] = ( int32_T ) ( N_Channel_MOSFET_mos_vds
>= 0.0 ) ; out . mX [ 1 ] = ( int32_T ) ( X_idx_2 - 1.0 <= 0.0 ) ; out . mX [
2 ] = ( int32_T ) ( N_Channel_MOSFET2_mos_vds >= 0.0 ) ; out . mX [ 3 ] = (
int32_T ) ( X_idx_6 - 2.0 <= 0.0 ) ; out . mX [ 4 ] = ( int32_T ) ( X_idx_6 -
2.0 > N_Channel_MOSFET2_mos_vds ) ; out . mX [ 5 ] = ( int32_T ) (
intrm_sf_mf_18 - 2.0 <= 0.0 ) ; out . mX [ 6 ] = ( int32_T ) ( intrm_sf_mf_18
- 2.0 > - N_Channel_MOSFET2_mos_vds ) ; out . mX [ 7 ] = ( int32_T ) (
N_Channel_MOSFET3_mos_vds >= 0.0 ) ; out . mX [ 8 ] = ( int32_T ) ( X_idx_8 -
1.0 <= 0.0 ) ; out . mX [ 9 ] = ( int32_T ) ( X_idx_8 - 1.0 >
N_Channel_MOSFET3_mos_vds ) ; out . mX [ 10 ] = ( int32_T ) ( intrm_sf_mf_25
- 1.0 <= 0.0 ) ; out . mX [ 11 ] = ( int32_T ) ( intrm_sf_mf_25 - 1.0 > -
N_Channel_MOSFET3_mos_vds ) ; out . mX [ 12 ] = ( int32_T ) ( X_idx_2 - 1.0 >
N_Channel_MOSFET_mos_vds ) ; out . mX [ 13 ] = ( int32_T ) (
N_Channel_MOSFET4_mos_vds >= 0.0 ) ; out . mX [ 14 ] = ( int32_T ) ( X_idx_10
- 1.0 <= 0.0 ) ; out . mX [ 15 ] = ( int32_T ) ( X_idx_10 - 1.0 >
N_Channel_MOSFET4_mos_vds ) ; out . mX [ 16 ] = ( int32_T ) ( intrm_sf_mf_32
- 1.0 <= 0.0 ) ; out . mX [ 17 ] = ( int32_T ) ( intrm_sf_mf_32 - 1.0 > -
N_Channel_MOSFET4_mos_vds ) ; out . mX [ 18 ] = ( int32_T ) (
N_Channel_MOSFET5_mos_vds >= 0.0 ) ; out . mX [ 19 ] = ( int32_T ) ( X_idx_12
- 1.0 <= 0.0 ) ; out . mX [ 20 ] = ( int32_T ) ( X_idx_12 - 1.0 >
N_Channel_MOSFET5_mos_vds ) ; out . mX [ 21 ] = ( int32_T ) ( intrm_sf_mf_39
- 1.0 <= 0.0 ) ; out . mX [ 22 ] = ( int32_T ) ( intrm_sf_mf_39 - 1.0 > -
N_Channel_MOSFET5_mos_vds ) ; out . mX [ 23 ] = ( int32_T ) ( intrm_sf_mf_4 -
1.0 <= 0.0 ) ; out . mX [ 24 ] = ( int32_T ) ( N_Channel_MOSFET6_mos_vds >=
0.0 ) ; out . mX [ 25 ] = ( int32_T ) ( X_idx_14 - 1.0 <= 0.0 ) ; out . mX [
26 ] = ( int32_T ) ( X_idx_14 - 1.0 > N_Channel_MOSFET6_mos_vds ) ; out . mX
[ 27 ] = ( int32_T ) ( intrm_sf_mf_46 - 1.0 <= 0.0 ) ; out . mX [ 28 ] = (
int32_T ) ( intrm_sf_mf_46 - 1.0 > - N_Channel_MOSFET6_mos_vds ) ; out . mX [
29 ] = ( int32_T ) ( N_Channel_MOSFET7_mos_vds >= 0.0 ) ; out . mX [ 30 ] = (
int32_T ) ( X_idx_16 - 1.0 <= 0.0 ) ; out . mX [ 31 ] = ( int32_T ) (
X_idx_16 - 1.0 > N_Channel_MOSFET7_mos_vds ) ; out . mX [ 32 ] = ( int32_T )
( intrm_sf_mf_53 - 1.0 <= 0.0 ) ; out . mX [ 33 ] = ( int32_T ) (
intrm_sf_mf_53 - 1.0 > - N_Channel_MOSFET7_mos_vds ) ; out . mX [ 34 ] = (
int32_T ) ( intrm_sf_mf_4 - 1.0 > - N_Channel_MOSFET_mos_vds ) ; out . mX [
35 ] = ( int32_T ) ( N_Channel_MOSFET8_mos_vds >= 0.0 ) ; out . mX [ 36 ] = (
int32_T ) ( X_idx_18 - 1.0 <= 0.0 ) ; out . mX [ 37 ] = ( int32_T ) (
X_idx_18 - 1.0 > N_Channel_MOSFET8_mos_vds ) ; out . mX [ 38 ] = ( int32_T )
( intrm_sf_mf_60 - 1.0 <= 0.0 ) ; out . mX [ 39 ] = ( int32_T ) (
intrm_sf_mf_60 - 1.0 > - N_Channel_MOSFET8_mos_vds ) ; out . mX [ 40 ] = (
int32_T ) ( X_idx_17 >= 0.0 ) ; out . mX [ 41 ] = ( int32_T ) ( - X_idx_20 -
1.0 <= 0.0 ) ; out . mX [ 42 ] = ( int32_T ) ( - X_idx_20 - 1.0 > X_idx_17 )
; out . mX [ 43 ] = ( int32_T ) ( X_idx_28 - 1.0 <= 0.0 ) ; out . mX [ 44 ] =
( int32_T ) ( X_idx_28 - 1.0 > - X_idx_17 ) ; out . mX [ 45 ] = ( int32_T ) (
N_Channel_MOSFET1_mos_vds >= 0.0 ) ; out . mX [ 46 ] = ( int32_T ) ( X_idx_13
>= 0.0 ) ; out . mX [ 47 ] = ( int32_T ) ( - X_idx_3 - 1.0 <= 0.0 ) ; out .
mX [ 48 ] = ( int32_T ) ( - X_idx_3 - 1.0 > X_idx_13 ) ; out . mX [ 49 ] = (
int32_T ) ( X_idx_15 - 1.0 <= 0.0 ) ; out . mX [ 50 ] = ( int32_T ) (
X_idx_15 - 1.0 > - X_idx_13 ) ; out . mX [ 51 ] = ( int32_T ) ( X_idx_9 >=
0.0 ) ; out . mX [ 52 ] = ( int32_T ) ( - X_idx_23 - 1.0 <= 0.0 ) ; out . mX
[ 53 ] = ( int32_T ) ( - X_idx_23 - 1.0 > X_idx_9 ) ; out . mX [ 54 ] = (
int32_T ) ( X_idx_11 - 1.0 <= 0.0 ) ; out . mX [ 55 ] = ( int32_T ) (
X_idx_11 - 1.0 > - X_idx_9 ) ; out . mX [ 56 ] = ( int32_T ) ( X_idx_5 - 1.0
<= 0.0 ) ; out . mX [ 57 ] = ( int32_T ) ( X_idx_0 >= 0.0 ) ; out . mX [ 58 ]
= ( int32_T ) ( - X_idx_25 - 1.0 <= 0.0 ) ; out . mX [ 59 ] = ( int32_T ) ( -
X_idx_25 - 1.0 > X_idx_0 ) ; out . mX [ 60 ] = ( int32_T ) ( X_idx_7 - 1.0 <=
0.0 ) ; out . mX [ 61 ] = ( int32_T ) ( X_idx_7 - 1.0 > - X_idx_0 ) ; out .
mX [ 62 ] = ( int32_T ) ( X_idx_1 >= 0.0 ) ; out . mX [ 63 ] = ( int32_T ) (
- X_idx_27 - 1.0 <= 0.0 ) ; out . mX [ 64 ] = ( int32_T ) ( - X_idx_27 - 1.0
> X_idx_1 ) ; out . mX [ 65 ] = ( int32_T ) ( X_idx_4 - 1.0 <= 0.0 ) ; out .
mX [ 66 ] = ( int32_T ) ( X_idx_4 - 1.0 > - X_idx_1 ) ; out . mX [ 67 ] = (
int32_T ) ( X_idx_5 - 1.0 > N_Channel_MOSFET1_mos_vds ) ; out . mX [ 68 ] = (
int32_T ) ( intrm_sf_mf_99 >= 0.0 ) ; out . mX [ 69 ] = ( int32_T ) ( -
X_idx_29 - 1.0 <= 0.0 ) ; out . mX [ 70 ] = ( int32_T ) ( - X_idx_29 - 1.0 >
intrm_sf_mf_99 ) ; out . mX [ 71 ] = ( int32_T ) ( intrm_sf_mf_102 - 1.0 <=
0.0 ) ; out . mX [ 72 ] = ( int32_T ) ( intrm_sf_mf_102 - 1.0 > -
intrm_sf_mf_99 ) ; out . mX [ 73 ] = ( int32_T ) ( intrm_sf_mf_106 >= 0.0 ) ;
out . mX [ 74 ] = ( int32_T ) ( - X_idx_31 - 1.0 <= 0.0 ) ; out . mX [ 75 ] =
( int32_T ) ( - X_idx_31 - 1.0 > intrm_sf_mf_106 ) ; out . mX [ 76 ] = (
int32_T ) ( intrm_sf_mf_109 - 1.0 <= 0.0 ) ; out . mX [ 77 ] = ( int32_T ) (
intrm_sf_mf_109 - 1.0 > - intrm_sf_mf_106 ) ; out . mX [ 78 ] = ( int32_T ) (
intrm_sf_mf_11 - 1.0 <= 0.0 ) ; out . mX [ 79 ] = ( int32_T ) ( X_idx_30 >=
0.0 ) ; out . mX [ 80 ] = ( int32_T ) ( - X_idx_33 - 1.0 <= 0.0 ) ; out . mX
[ 81 ] = ( int32_T ) ( - X_idx_33 - 1.0 > X_idx_30 ) ; out . mX [ 82 ] = (
int32_T ) ( X_idx_32 - 1.0 <= 0.0 ) ; out . mX [ 83 ] = ( int32_T ) (
X_idx_32 - 1.0 > - X_idx_30 ) ; out . mX [ 84 ] = ( int32_T ) (
intrm_sf_mf_11 - 1.0 > - N_Channel_MOSFET1_mos_vds ) ; ( void ) sys ; ( void
) t2 ; return 0 ; }
