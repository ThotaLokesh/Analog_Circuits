#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_zc.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_zc ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t69 , NeDsMethodOutput *
t70 ) { PmRealVector out ; real_T N_Channel_MOSFET1_mos_vds ; real_T
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
real_T intrm_sf_mf_106 ; real_T intrm_sf_mf_109 ; real_T intrm_sf_mf_113 ;
real_T intrm_sf_mf_64 ; real_T intrm_sf_mf_71 ; real_T intrm_sf_mf_78 ;
real_T intrm_sf_mf_85 ; real_T intrm_sf_mf_92 ; real_T intrm_sf_mf_99 ;
real_T t0 ; real_T t1 ; real_T t10 ; real_T t11 ; real_T t12 ; real_T t13 ;
real_T t14 ; real_T t15 ; real_T t16 ; real_T t17 ; real_T t18 ; real_T t19 ;
real_T t2 ; real_T t20 ; real_T t21 ; real_T t22 ; real_T t23 ; real_T t24 ;
real_T t25 ; real_T t26 ; real_T t27 ; real_T t28 ; real_T t29 ; real_T t3 ;
real_T t30 ; real_T t31 ; real_T t32 ; real_T t35 ; real_T t36 ; real_T t4 ;
real_T t40 ; real_T t44 ; real_T t48 ; real_T t5 ; real_T t52 ; real_T t56 ;
real_T t6 ; real_T t60 ; real_T t7 ; real_T t8 ; real_T t9 ; int32_T M_idx_0
; int32_T M_idx_1 ; int32_T M_idx_10 ; int32_T M_idx_13 ; int32_T M_idx_14 ;
int32_T M_idx_16 ; int32_T M_idx_18 ; int32_T M_idx_19 ; int32_T M_idx_2 ;
int32_T M_idx_21 ; int32_T M_idx_23 ; int32_T M_idx_24 ; int32_T M_idx_25 ;
int32_T M_idx_27 ; int32_T M_idx_29 ; int32_T M_idx_3 ; int32_T M_idx_30 ;
int32_T M_idx_32 ; int32_T M_idx_35 ; int32_T M_idx_36 ; int32_T M_idx_38 ;
int32_T M_idx_40 ; int32_T M_idx_41 ; int32_T M_idx_43 ; int32_T M_idx_45 ;
int32_T M_idx_46 ; int32_T M_idx_47 ; int32_T M_idx_49 ; int32_T M_idx_5 ;
int32_T M_idx_51 ; int32_T M_idx_52 ; int32_T M_idx_54 ; int32_T M_idx_56 ;
int32_T M_idx_57 ; int32_T M_idx_58 ; int32_T M_idx_60 ; int32_T M_idx_62 ;
int32_T M_idx_63 ; int32_T M_idx_65 ; int32_T M_idx_68 ; int32_T M_idx_69 ;
int32_T M_idx_7 ; int32_T M_idx_71 ; int32_T M_idx_73 ; int32_T M_idx_74 ;
int32_T M_idx_76 ; int32_T M_idx_78 ; int32_T M_idx_79 ; int32_T M_idx_8 ;
int32_T M_idx_80 ; int32_T M_idx_82 ; M_idx_0 = t69 -> mM . mX [ 0 ] ;
M_idx_1 = t69 -> mM . mX [ 1 ] ; M_idx_2 = t69 -> mM . mX [ 2 ] ; M_idx_3 =
t69 -> mM . mX [ 3 ] ; M_idx_5 = t69 -> mM . mX [ 5 ] ; M_idx_7 = t69 -> mM .
mX [ 7 ] ; M_idx_8 = t69 -> mM . mX [ 8 ] ; M_idx_10 = t69 -> mM . mX [ 10 ]
; M_idx_13 = t69 -> mM . mX [ 13 ] ; M_idx_14 = t69 -> mM . mX [ 14 ] ;
M_idx_16 = t69 -> mM . mX [ 16 ] ; M_idx_18 = t69 -> mM . mX [ 18 ] ;
M_idx_19 = t69 -> mM . mX [ 19 ] ; M_idx_21 = t69 -> mM . mX [ 21 ] ;
M_idx_23 = t69 -> mM . mX [ 23 ] ; M_idx_24 = t69 -> mM . mX [ 24 ] ;
M_idx_25 = t69 -> mM . mX [ 25 ] ; M_idx_27 = t69 -> mM . mX [ 27 ] ;
M_idx_29 = t69 -> mM . mX [ 29 ] ; M_idx_30 = t69 -> mM . mX [ 30 ] ;
M_idx_32 = t69 -> mM . mX [ 32 ] ; M_idx_35 = t69 -> mM . mX [ 35 ] ;
M_idx_36 = t69 -> mM . mX [ 36 ] ; M_idx_38 = t69 -> mM . mX [ 38 ] ;
M_idx_40 = t69 -> mM . mX [ 40 ] ; M_idx_41 = t69 -> mM . mX [ 41 ] ;
M_idx_43 = t69 -> mM . mX [ 43 ] ; M_idx_45 = t69 -> mM . mX [ 45 ] ;
M_idx_46 = t69 -> mM . mX [ 46 ] ; M_idx_47 = t69 -> mM . mX [ 47 ] ;
M_idx_49 = t69 -> mM . mX [ 49 ] ; M_idx_51 = t69 -> mM . mX [ 51 ] ;
M_idx_52 = t69 -> mM . mX [ 52 ] ; M_idx_54 = t69 -> mM . mX [ 54 ] ;
M_idx_56 = t69 -> mM . mX [ 56 ] ; M_idx_57 = t69 -> mM . mX [ 57 ] ;
M_idx_58 = t69 -> mM . mX [ 58 ] ; M_idx_60 = t69 -> mM . mX [ 60 ] ;
M_idx_62 = t69 -> mM . mX [ 62 ] ; M_idx_63 = t69 -> mM . mX [ 63 ] ;
M_idx_65 = t69 -> mM . mX [ 65 ] ; M_idx_68 = t69 -> mM . mX [ 68 ] ;
M_idx_69 = t69 -> mM . mX [ 69 ] ; M_idx_71 = t69 -> mM . mX [ 71 ] ;
M_idx_73 = t69 -> mM . mX [ 73 ] ; M_idx_74 = t69 -> mM . mX [ 74 ] ;
M_idx_76 = t69 -> mM . mX [ 76 ] ; M_idx_78 = t69 -> mM . mX [ 78 ] ;
M_idx_79 = t69 -> mM . mX [ 79 ] ; M_idx_80 = t69 -> mM . mX [ 80 ] ;
M_idx_82 = t69 -> mM . mX [ 82 ] ; X_idx_0 = t69 -> mX . mX [ 0 ] ; X_idx_1 =
t69 -> mX . mX [ 1 ] ; X_idx_2 = t69 -> mX . mX [ 2 ] ; X_idx_3 = t69 -> mX .
mX [ 3 ] ; X_idx_4 = t69 -> mX . mX [ 4 ] ; X_idx_5 = t69 -> mX . mX [ 5 ] ;
X_idx_6 = t69 -> mX . mX [ 6 ] ; X_idx_7 = t69 -> mX . mX [ 7 ] ; X_idx_8 =
t69 -> mX . mX [ 8 ] ; X_idx_9 = t69 -> mX . mX [ 9 ] ; X_idx_10 = t69 -> mX
. mX [ 10 ] ; X_idx_11 = t69 -> mX . mX [ 11 ] ; X_idx_12 = t69 -> mX . mX [
12 ] ; X_idx_13 = t69 -> mX . mX [ 13 ] ; X_idx_14 = t69 -> mX . mX [ 14 ] ;
X_idx_15 = t69 -> mX . mX [ 15 ] ; X_idx_16 = t69 -> mX . mX [ 16 ] ;
X_idx_17 = t69 -> mX . mX [ 17 ] ; X_idx_18 = t69 -> mX . mX [ 18 ] ;
X_idx_19 = t69 -> mX . mX [ 19 ] ; X_idx_20 = t69 -> mX . mX [ 20 ] ;
X_idx_21 = t69 -> mX . mX [ 21 ] ; X_idx_22 = t69 -> mX . mX [ 22 ] ;
X_idx_23 = t69 -> mX . mX [ 23 ] ; X_idx_24 = t69 -> mX . mX [ 24 ] ;
X_idx_25 = t69 -> mX . mX [ 25 ] ; X_idx_26 = t69 -> mX . mX [ 26 ] ;
X_idx_27 = t69 -> mX . mX [ 27 ] ; X_idx_28 = t69 -> mX . mX [ 28 ] ;
X_idx_29 = t69 -> mX . mX [ 29 ] ; X_idx_30 = t69 -> mX . mX [ 30 ] ;
X_idx_31 = t69 -> mX . mX [ 31 ] ; X_idx_32 = t69 -> mX . mX [ 32 ] ;
X_idx_33 = t69 -> mX . mX [ 33 ] ; out = t70 -> mZC ;
N_Channel_MOSFET_mos_vds = - X_idx_1 + X_idx_2 ; N_Channel_MOSFET1_mos_vds =
- X_idx_4 + X_idx_5 ; N_Channel_MOSFET2_mos_vds = - X_idx_0 + X_idx_6 ;
N_Channel_MOSFET3_mos_vds = - X_idx_7 + X_idx_8 ; N_Channel_MOSFET4_mos_vds =
- X_idx_9 + X_idx_10 ; N_Channel_MOSFET5_mos_vds = - X_idx_11 + X_idx_12 ;
N_Channel_MOSFET6_mos_vds = - X_idx_13 + X_idx_14 ; N_Channel_MOSFET7_mos_vds
= - X_idx_15 + X_idx_16 ; N_Channel_MOSFET8_mos_vds = - X_idx_17 + X_idx_18 ;
intrm_sf_mf_99 = - ( - X_idx_28 + X_idx_29 ) ; t60 = - X_idx_29 - ( - ( -
X_idx_28 + X_idx_29 ) ) ; intrm_sf_mf_106 = - ( - X_idx_30 + X_idx_31 ) ;
intrm_sf_mf_109 = - X_idx_31 - intrm_sf_mf_106 ; t8 = X_idx_5 -
N_Channel_MOSFET1_mos_vds ; intrm_sf_mf_113 = - ( - X_idx_32 + X_idx_33 ) ;
X_idx_1 = - X_idx_33 - intrm_sf_mf_113 ; t13 = X_idx_6 -
N_Channel_MOSFET2_mos_vds ; t16 = X_idx_8 - N_Channel_MOSFET3_mos_vds ; t20 =
X_idx_10 - N_Channel_MOSFET4_mos_vds ; t24 = X_idx_12 -
N_Channel_MOSFET5_mos_vds ; t4 = X_idx_2 - N_Channel_MOSFET_mos_vds ; t28 =
X_idx_14 - N_Channel_MOSFET6_mos_vds ; t32 = X_idx_16 -
N_Channel_MOSFET7_mos_vds ; t36 = X_idx_18 - N_Channel_MOSFET8_mos_vds ;
intrm_sf_mf_64 = - ( - X_idx_19 + X_idx_20 ) ; t40 = - X_idx_20 -
intrm_sf_mf_64 ; intrm_sf_mf_71 = - ( - X_idx_21 + X_idx_3 ) ; t44 = -
X_idx_3 - intrm_sf_mf_71 ; intrm_sf_mf_78 = - ( - X_idx_22 + X_idx_23 ) ; t48
= - X_idx_23 - intrm_sf_mf_78 ; intrm_sf_mf_85 = - ( - X_idx_24 + X_idx_25 )
; t52 = - X_idx_25 - intrm_sf_mf_85 ; intrm_sf_mf_92 = - ( - X_idx_26 +
X_idx_27 ) ; t56 = - X_idx_27 - intrm_sf_mf_92 ; if ( M_idx_0 != 0 ) { t0 = -
( X_idx_2 - 1.0 ) ; } else { t0 = 0.0 ; } if ( ( M_idx_1 == 0 ) && ( M_idx_0
!= 0 ) ) { t1 = ( X_idx_2 - 1.0 ) - N_Channel_MOSFET_mos_vds ; } else { t1 =
0.0 ; } if ( M_idx_0 == 0 ) { t2 = - ( t4 - 1.0 ) ; } else { t2 = 0.0 ; } if
( ( M_idx_0 == 0 ) && ( M_idx_23 == 0 ) ) { t3 = ( t4 - 1.0 ) - ( -
N_Channel_MOSFET_mos_vds ) ; } else { t3 = 0.0 ; } if ( M_idx_45 != 0 ) { t4
= - ( X_idx_5 - 1.0 ) ; } else { t4 = 0.0 ; } if ( ( M_idx_56 == 0 ) && (
M_idx_45 != 0 ) ) { t5 = ( X_idx_5 - 1.0 ) - N_Channel_MOSFET1_mos_vds ; }
else { t5 = 0.0 ; } if ( M_idx_45 == 0 ) { t6 = - ( t8 - 1.0 ) ; } else { t6
= 0.0 ; } if ( ( M_idx_45 == 0 ) && ( M_idx_78 == 0 ) ) { t7 = ( t8 - 1.0 ) -
( - N_Channel_MOSFET1_mos_vds ) ; } else { t7 = 0.0 ; } if ( M_idx_2 != 0 ) {
t8 = - ( X_idx_6 - 2.0 ) ; } else { t8 = 0.0 ; } if ( ( M_idx_3 == 0 ) && (
M_idx_2 != 0 ) ) { t9 = ( X_idx_6 - 2.0 ) - N_Channel_MOSFET2_mos_vds ; }
else { t9 = 0.0 ; } if ( M_idx_2 == 0 ) { t10 = - ( t13 - 2.0 ) ; } else {
t10 = 0.0 ; } if ( ( M_idx_2 == 0 ) && ( M_idx_5 == 0 ) ) { t11 = ( t13 - 2.0
) - ( - N_Channel_MOSFET2_mos_vds ) ; } else { t11 = 0.0 ; } if ( M_idx_7 !=
0 ) { t12 = - ( X_idx_8 - 1.0 ) ; } else { t12 = 0.0 ; } if ( ( M_idx_8 == 0
) && ( M_idx_7 != 0 ) ) { t13 = ( X_idx_8 - 1.0 ) - N_Channel_MOSFET3_mos_vds
; } else { t13 = 0.0 ; } if ( M_idx_7 == 0 ) { t14 = - ( t16 - 1.0 ) ; } else
{ t14 = 0.0 ; } if ( ( M_idx_7 == 0 ) && ( M_idx_10 == 0 ) ) { t15 = ( t16 -
1.0 ) - ( - N_Channel_MOSFET3_mos_vds ) ; } else { t15 = 0.0 ; } if (
M_idx_13 != 0 ) { t16 = - ( X_idx_10 - 1.0 ) ; } else { t16 = 0.0 ; } if ( (
M_idx_14 == 0 ) && ( M_idx_13 != 0 ) ) { t17 = ( X_idx_10 - 1.0 ) -
N_Channel_MOSFET4_mos_vds ; } else { t17 = 0.0 ; } if ( M_idx_13 == 0 ) { t18
= - ( t20 - 1.0 ) ; } else { t18 = 0.0 ; } if ( ( M_idx_13 == 0 ) && (
M_idx_16 == 0 ) ) { t19 = ( t20 - 1.0 ) - ( - N_Channel_MOSFET4_mos_vds ) ; }
else { t19 = 0.0 ; } if ( M_idx_18 != 0 ) { t20 = - ( X_idx_12 - 1.0 ) ; }
else { t20 = 0.0 ; } if ( ( M_idx_19 == 0 ) && ( M_idx_18 != 0 ) ) { t21 = (
X_idx_12 - 1.0 ) - N_Channel_MOSFET5_mos_vds ; } else { t21 = 0.0 ; } if (
M_idx_18 == 0 ) { t22 = - ( t24 - 1.0 ) ; } else { t22 = 0.0 ; } if ( (
M_idx_18 == 0 ) && ( M_idx_21 == 0 ) ) { t23 = ( t24 - 1.0 ) - ( -
N_Channel_MOSFET5_mos_vds ) ; } else { t23 = 0.0 ; } if ( M_idx_24 != 0 ) {
t24 = - ( X_idx_14 - 1.0 ) ; } else { t24 = 0.0 ; } if ( ( M_idx_25 == 0 ) &&
( M_idx_24 != 0 ) ) { t25 = ( X_idx_14 - 1.0 ) - N_Channel_MOSFET6_mos_vds ;
} else { t25 = 0.0 ; } if ( M_idx_24 == 0 ) { t26 = - ( t28 - 1.0 ) ; } else
{ t26 = 0.0 ; } if ( ( M_idx_24 == 0 ) && ( M_idx_27 == 0 ) ) { t27 = ( t28 -
1.0 ) - ( - N_Channel_MOSFET6_mos_vds ) ; } else { t27 = 0.0 ; } if (
M_idx_29 != 0 ) { t28 = - ( X_idx_16 - 1.0 ) ; } else { t28 = 0.0 ; } if ( (
M_idx_30 == 0 ) && ( M_idx_29 != 0 ) ) { t29 = ( X_idx_16 - 1.0 ) -
N_Channel_MOSFET7_mos_vds ; } else { t29 = 0.0 ; } if ( M_idx_29 == 0 ) { t30
= - ( t32 - 1.0 ) ; } else { t30 = 0.0 ; } if ( ( M_idx_29 == 0 ) && (
M_idx_32 == 0 ) ) { t31 = ( t32 - 1.0 ) - ( - N_Channel_MOSFET7_mos_vds ) ; }
else { t31 = 0.0 ; } if ( M_idx_35 != 0 ) { t32 = - ( X_idx_18 - 1.0 ) ; }
else { t32 = 0.0 ; } if ( ( M_idx_36 == 0 ) && ( M_idx_35 != 0 ) ) { X_idx_16
= ( X_idx_18 - 1.0 ) - N_Channel_MOSFET8_mos_vds ; } else { X_idx_16 = 0.0 ;
} if ( M_idx_35 == 0 ) { X_idx_18 = - ( t36 - 1.0 ) ; } else { X_idx_18 = 0.0
; } if ( ( M_idx_35 == 0 ) && ( M_idx_38 == 0 ) ) { t35 = ( t36 - 1.0 ) - ( -
N_Channel_MOSFET8_mos_vds ) ; } else { t35 = 0.0 ; } if ( M_idx_40 != 0 ) {
t36 = - ( - X_idx_20 - 1.0 ) ; } else { t36 = 0.0 ; } if ( ( M_idx_41 == 0 )
&& ( M_idx_40 != 0 ) ) { X_idx_10 = ( - X_idx_20 - 1.0 ) - intrm_sf_mf_64 ; }
else { X_idx_10 = 0.0 ; } if ( M_idx_40 == 0 ) { X_idx_12 = - ( t40 - 1.0 ) ;
} else { X_idx_12 = 0.0 ; } if ( ( M_idx_40 == 0 ) && ( M_idx_43 == 0 ) ) {
X_idx_14 = ( t40 - 1.0 ) - ( - intrm_sf_mf_64 ) ; } else { X_idx_14 = 0.0 ; }
if ( M_idx_46 != 0 ) { t40 = - ( - X_idx_3 - 1.0 ) ; } else { t40 = 0.0 ; }
if ( ( M_idx_47 == 0 ) && ( M_idx_46 != 0 ) ) { X_idx_5 = ( - X_idx_3 - 1.0 )
- intrm_sf_mf_71 ; } else { X_idx_5 = 0.0 ; } if ( M_idx_46 == 0 ) { X_idx_6
= - ( t44 - 1.0 ) ; } else { X_idx_6 = 0.0 ; } if ( ( M_idx_46 == 0 ) && (
M_idx_49 == 0 ) ) { X_idx_8 = ( t44 - 1.0 ) - ( - intrm_sf_mf_71 ) ; } else {
X_idx_8 = 0.0 ; } if ( M_idx_51 != 0 ) { t44 = - ( - X_idx_23 - 1.0 ) ; }
else { t44 = 0.0 ; } if ( ( M_idx_52 == 0 ) && ( M_idx_51 != 0 ) ) { X_idx_24
= ( - X_idx_23 - 1.0 ) - intrm_sf_mf_78 ; } else { X_idx_24 = 0.0 ; } if (
M_idx_51 == 0 ) { X_idx_26 = - ( t48 - 1.0 ) ; } else { X_idx_26 = 0.0 ; } if
( ( M_idx_51 == 0 ) && ( M_idx_54 == 0 ) ) { X_idx_2 = ( t48 - 1.0 ) - ( -
intrm_sf_mf_78 ) ; } else { X_idx_2 = 0.0 ; } if ( M_idx_57 != 0 ) { t48 = -
( - X_idx_25 - 1.0 ) ; } else { t48 = 0.0 ; } if ( ( M_idx_58 == 0 ) && (
M_idx_57 != 0 ) ) { X_idx_19 = ( - X_idx_25 - 1.0 ) - intrm_sf_mf_85 ; } else
{ X_idx_19 = 0.0 ; } if ( M_idx_57 == 0 ) { X_idx_21 = - ( t52 - 1.0 ) ; }
else { X_idx_21 = 0.0 ; } if ( ( M_idx_57 == 0 ) && ( M_idx_60 == 0 ) ) {
X_idx_22 = ( t52 - 1.0 ) - ( - intrm_sf_mf_85 ) ; } else { X_idx_22 = 0.0 ; }
if ( M_idx_62 != 0 ) { t52 = - ( - X_idx_27 - 1.0 ) ; } else { t52 = 0.0 ; }
if ( ( M_idx_63 == 0 ) && ( M_idx_62 != 0 ) ) { X_idx_28 = ( - X_idx_27 - 1.0
) - intrm_sf_mf_92 ; } else { X_idx_28 = 0.0 ; } if ( M_idx_62 == 0 ) {
X_idx_30 = - ( t56 - 1.0 ) ; } else { X_idx_30 = 0.0 ; } if ( ( M_idx_62 == 0
) && ( M_idx_65 == 0 ) ) { X_idx_32 = ( t56 - 1.0 ) - ( - intrm_sf_mf_92 ) ;
} else { X_idx_32 = 0.0 ; } if ( M_idx_68 != 0 ) { t56 = - ( - X_idx_29 - 1.0
) ; } else { t56 = 0.0 ; } if ( ( M_idx_69 == 0 ) && ( M_idx_68 != 0 ) ) {
X_idx_13 = ( - X_idx_29 - 1.0 ) - intrm_sf_mf_99 ; } else { X_idx_13 = 0.0 ;
} if ( M_idx_68 == 0 ) { X_idx_15 = - ( t60 - 1.0 ) ; } else { X_idx_15 = 0.0
; } if ( ( M_idx_68 == 0 ) && ( M_idx_71 == 0 ) ) { X_idx_17 = ( t60 - 1.0 )
- ( - intrm_sf_mf_99 ) ; } else { X_idx_17 = 0.0 ; } if ( M_idx_73 != 0 ) {
t60 = - ( - X_idx_31 - 1.0 ) ; } else { t60 = 0.0 ; } if ( ( M_idx_74 == 0 )
&& ( M_idx_73 != 0 ) ) { X_idx_7 = ( - X_idx_31 - 1.0 ) - intrm_sf_mf_106 ; }
else { X_idx_7 = 0.0 ; } if ( M_idx_73 == 0 ) { X_idx_9 = - ( intrm_sf_mf_109
- 1.0 ) ; } else { X_idx_9 = 0.0 ; } if ( ( M_idx_73 == 0 ) && ( M_idx_76 ==
0 ) ) { X_idx_11 = ( intrm_sf_mf_109 - 1.0 ) - ( - intrm_sf_mf_106 ) ; } else
{ X_idx_11 = 0.0 ; } if ( M_idx_79 != 0 ) { intrm_sf_mf_109 = - ( - X_idx_33
- 1.0 ) ; } else { intrm_sf_mf_109 = 0.0 ; } if ( ( M_idx_80 == 0 ) && (
M_idx_79 != 0 ) ) { X_idx_4 = ( - X_idx_33 - 1.0 ) - intrm_sf_mf_113 ; } else
{ X_idx_4 = 0.0 ; } if ( M_idx_79 == 0 ) { X_idx_0 = - ( X_idx_1 - 1.0 ) ; }
else { X_idx_0 = 0.0 ; } if ( ( M_idx_79 == 0 ) && ( M_idx_82 == 0 ) ) {
X_idx_1 = ( X_idx_1 - 1.0 ) - ( - intrm_sf_mf_113 ) ; } else { X_idx_1 = 0.0
; } out . mX [ 0 ] = N_Channel_MOSFET_mos_vds ; out . mX [ 1 ] = t0 ; out .
mX [ 2 ] = t1 ; out . mX [ 3 ] = t2 ; out . mX [ 4 ] = t3 ; out . mX [ 5 ] =
N_Channel_MOSFET1_mos_vds ; out . mX [ 6 ] = t4 ; out . mX [ 7 ] = t5 ; out .
mX [ 8 ] = t6 ; out . mX [ 9 ] = t7 ; out . mX [ 10 ] =
N_Channel_MOSFET2_mos_vds ; out . mX [ 11 ] = t8 ; out . mX [ 12 ] = t9 ; out
. mX [ 13 ] = t10 ; out . mX [ 14 ] = t11 ; out . mX [ 15 ] =
N_Channel_MOSFET3_mos_vds ; out . mX [ 16 ] = t12 ; out . mX [ 17 ] = t13 ;
out . mX [ 18 ] = t14 ; out . mX [ 19 ] = t15 ; out . mX [ 20 ] =
N_Channel_MOSFET4_mos_vds ; out . mX [ 21 ] = t16 ; out . mX [ 22 ] = t17 ;
out . mX [ 23 ] = t18 ; out . mX [ 24 ] = t19 ; out . mX [ 25 ] =
N_Channel_MOSFET5_mos_vds ; out . mX [ 26 ] = t20 ; out . mX [ 27 ] = t21 ;
out . mX [ 28 ] = t22 ; out . mX [ 29 ] = t23 ; out . mX [ 30 ] =
N_Channel_MOSFET6_mos_vds ; out . mX [ 31 ] = t24 ; out . mX [ 32 ] = t25 ;
out . mX [ 33 ] = t26 ; out . mX [ 34 ] = t27 ; out . mX [ 35 ] =
N_Channel_MOSFET7_mos_vds ; out . mX [ 36 ] = t28 ; out . mX [ 37 ] = t29 ;
out . mX [ 38 ] = t30 ; out . mX [ 39 ] = t31 ; out . mX [ 40 ] =
N_Channel_MOSFET8_mos_vds ; out . mX [ 41 ] = t32 ; out . mX [ 42 ] =
X_idx_16 ; out . mX [ 43 ] = X_idx_18 ; out . mX [ 44 ] = t35 ; out . mX [ 45
] = intrm_sf_mf_64 ; out . mX [ 46 ] = t36 ; out . mX [ 47 ] = X_idx_10 ; out
. mX [ 48 ] = X_idx_12 ; out . mX [ 49 ] = X_idx_14 ; out . mX [ 50 ] =
intrm_sf_mf_71 ; out . mX [ 51 ] = t40 ; out . mX [ 52 ] = X_idx_5 ; out . mX
[ 53 ] = X_idx_6 ; out . mX [ 54 ] = X_idx_8 ; out . mX [ 55 ] =
intrm_sf_mf_78 ; out . mX [ 56 ] = t44 ; out . mX [ 57 ] = X_idx_24 ; out .
mX [ 58 ] = X_idx_26 ; out . mX [ 59 ] = X_idx_2 ; out . mX [ 60 ] =
intrm_sf_mf_85 ; out . mX [ 61 ] = t48 ; out . mX [ 62 ] = X_idx_19 ; out .
mX [ 63 ] = X_idx_21 ; out . mX [ 64 ] = X_idx_22 ; out . mX [ 65 ] =
intrm_sf_mf_92 ; out . mX [ 66 ] = t52 ; out . mX [ 67 ] = X_idx_28 ; out .
mX [ 68 ] = X_idx_30 ; out . mX [ 69 ] = X_idx_32 ; out . mX [ 70 ] =
intrm_sf_mf_99 ; out . mX [ 71 ] = t56 ; out . mX [ 72 ] = X_idx_13 ; out .
mX [ 73 ] = X_idx_15 ; out . mX [ 74 ] = X_idx_17 ; out . mX [ 75 ] =
intrm_sf_mf_106 ; out . mX [ 76 ] = t60 ; out . mX [ 77 ] = X_idx_7 ; out .
mX [ 78 ] = X_idx_9 ; out . mX [ 79 ] = X_idx_11 ; out . mX [ 80 ] =
intrm_sf_mf_113 ; out . mX [ 81 ] = intrm_sf_mf_109 ; out . mX [ 82 ] =
X_idx_4 ; out . mX [ 83 ] = X_idx_0 ; out . mX [ 84 ] = X_idx_1 ; ( void )
sys ; ( void ) t70 ; return 0 ; }
