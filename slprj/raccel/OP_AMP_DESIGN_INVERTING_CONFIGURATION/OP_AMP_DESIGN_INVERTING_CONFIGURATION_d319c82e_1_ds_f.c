#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_f.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_f ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t19 , NeDsMethodOutput *
t20 ) { PmRealVector out ; real_T N_Channel_MOSFET6_mos_vds ; real_T
N_Channel_MOSFET7_mos_vds ; real_T N_Channel_MOSFET8_mos_vds ; real_T T_idx_0
; real_T X_idx_0 ; real_T X_idx_1 ; real_T X_idx_10 ; real_T X_idx_11 ;
real_T X_idx_12 ; real_T X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ;
real_T X_idx_16 ; real_T X_idx_17 ; real_T X_idx_18 ; real_T X_idx_19 ;
real_T X_idx_2 ; real_T X_idx_20 ; real_T X_idx_21 ; real_T X_idx_22 ; real_T
X_idx_23 ; real_T X_idx_24 ; real_T X_idx_25 ; real_T X_idx_26 ; real_T
X_idx_27 ; real_T X_idx_28 ; real_T X_idx_29 ; real_T X_idx_3 ; real_T
X_idx_30 ; real_T X_idx_31 ; real_T X_idx_32 ; real_T X_idx_33 ; real_T
X_idx_36 ; real_T X_idx_39 ; real_T X_idx_4 ; real_T X_idx_43 ; real_T
X_idx_46 ; real_T X_idx_49 ; real_T X_idx_5 ; real_T X_idx_52 ; real_T
X_idx_55 ; real_T X_idx_58 ; real_T X_idx_6 ; real_T X_idx_60 ; real_T
X_idx_64 ; real_T X_idx_65 ; real_T X_idx_67 ; real_T X_idx_69 ; real_T
X_idx_7 ; real_T X_idx_71 ; real_T X_idx_73 ; real_T X_idx_75 ; real_T
X_idx_76 ; real_T X_idx_8 ; real_T X_idx_9 ; real_T intrm_sf_mf_102 ; real_T
intrm_sf_mf_106 ; real_T intrm_sf_mf_109 ; real_T intrm_sf_mf_113 ; real_T
intrm_sf_mf_116 ; real_T intrm_sf_mf_119 ; real_T intrm_sf_mf_46 ; real_T
intrm_sf_mf_53 ; real_T intrm_sf_mf_60 ; real_T intrm_sf_mf_64 ; real_T
intrm_sf_mf_67 ; real_T intrm_sf_mf_71 ; real_T intrm_sf_mf_74 ; real_T
intrm_sf_mf_99 ; real_T t10 ; real_T t13 ; real_T t15 ; real_T t4 ; real_T t6
; real_T t8 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_10 ; int32_T
M_idx_11 ; int32_T M_idx_12 ; int32_T M_idx_13 ; int32_T M_idx_14 ; int32_T
M_idx_15 ; int32_T M_idx_16 ; int32_T M_idx_17 ; int32_T M_idx_18 ; int32_T
M_idx_19 ; int32_T M_idx_2 ; int32_T M_idx_20 ; int32_T M_idx_21 ; int32_T
M_idx_22 ; int32_T M_idx_23 ; int32_T M_idx_24 ; int32_T M_idx_25 ; int32_T
M_idx_26 ; int32_T M_idx_27 ; int32_T M_idx_28 ; int32_T M_idx_29 ; int32_T
M_idx_3 ; int32_T M_idx_30 ; int32_T M_idx_31 ; int32_T M_idx_32 ; int32_T
M_idx_33 ; int32_T M_idx_34 ; int32_T M_idx_35 ; int32_T M_idx_36 ; int32_T
M_idx_37 ; int32_T M_idx_38 ; int32_T M_idx_39 ; int32_T M_idx_4 ; int32_T
M_idx_40 ; int32_T M_idx_41 ; int32_T M_idx_42 ; int32_T M_idx_43 ; int32_T
M_idx_44 ; int32_T M_idx_45 ; int32_T M_idx_46 ; int32_T M_idx_47 ; int32_T
M_idx_48 ; int32_T M_idx_49 ; int32_T M_idx_5 ; int32_T M_idx_50 ; int32_T
M_idx_51 ; int32_T M_idx_52 ; int32_T M_idx_53 ; int32_T M_idx_54 ; int32_T
M_idx_55 ; int32_T M_idx_56 ; int32_T M_idx_57 ; int32_T M_idx_58 ; int32_T
M_idx_59 ; int32_T M_idx_6 ; int32_T M_idx_60 ; int32_T M_idx_61 ; int32_T
M_idx_62 ; int32_T M_idx_63 ; int32_T M_idx_64 ; int32_T M_idx_65 ; int32_T
M_idx_66 ; int32_T M_idx_67 ; int32_T M_idx_68 ; int32_T M_idx_69 ; int32_T
M_idx_7 ; int32_T M_idx_70 ; int32_T M_idx_71 ; int32_T M_idx_72 ; int32_T
M_idx_73 ; int32_T M_idx_74 ; int32_T M_idx_75 ; int32_T M_idx_76 ; int32_T
M_idx_77 ; int32_T M_idx_78 ; int32_T M_idx_79 ; int32_T M_idx_8 ; int32_T
M_idx_80 ; int32_T M_idx_81 ; int32_T M_idx_82 ; int32_T M_idx_83 ; int32_T
M_idx_84 ; int32_T M_idx_9 ; M_idx_0 = t19 -> mM . mX [ 0 ] ; M_idx_1 = t19
-> mM . mX [ 1 ] ; M_idx_2 = t19 -> mM . mX [ 2 ] ; M_idx_3 = t19 -> mM . mX
[ 3 ] ; M_idx_4 = t19 -> mM . mX [ 4 ] ; M_idx_5 = t19 -> mM . mX [ 5 ] ;
M_idx_6 = t19 -> mM . mX [ 6 ] ; M_idx_7 = t19 -> mM . mX [ 7 ] ; M_idx_8 =
t19 -> mM . mX [ 8 ] ; M_idx_9 = t19 -> mM . mX [ 9 ] ; M_idx_10 = t19 -> mM
. mX [ 10 ] ; M_idx_11 = t19 -> mM . mX [ 11 ] ; M_idx_12 = t19 -> mM . mX [
12 ] ; M_idx_13 = t19 -> mM . mX [ 13 ] ; M_idx_14 = t19 -> mM . mX [ 14 ] ;
M_idx_15 = t19 -> mM . mX [ 15 ] ; M_idx_16 = t19 -> mM . mX [ 16 ] ;
M_idx_17 = t19 -> mM . mX [ 17 ] ; M_idx_18 = t19 -> mM . mX [ 18 ] ;
M_idx_19 = t19 -> mM . mX [ 19 ] ; M_idx_20 = t19 -> mM . mX [ 20 ] ;
M_idx_21 = t19 -> mM . mX [ 21 ] ; M_idx_22 = t19 -> mM . mX [ 22 ] ;
M_idx_23 = t19 -> mM . mX [ 23 ] ; M_idx_24 = t19 -> mM . mX [ 24 ] ;
M_idx_25 = t19 -> mM . mX [ 25 ] ; M_idx_26 = t19 -> mM . mX [ 26 ] ;
M_idx_27 = t19 -> mM . mX [ 27 ] ; M_idx_28 = t19 -> mM . mX [ 28 ] ;
M_idx_29 = t19 -> mM . mX [ 29 ] ; M_idx_30 = t19 -> mM . mX [ 30 ] ;
M_idx_31 = t19 -> mM . mX [ 31 ] ; M_idx_32 = t19 -> mM . mX [ 32 ] ;
M_idx_33 = t19 -> mM . mX [ 33 ] ; M_idx_34 = t19 -> mM . mX [ 34 ] ;
M_idx_35 = t19 -> mM . mX [ 35 ] ; M_idx_36 = t19 -> mM . mX [ 36 ] ;
M_idx_37 = t19 -> mM . mX [ 37 ] ; M_idx_38 = t19 -> mM . mX [ 38 ] ;
M_idx_39 = t19 -> mM . mX [ 39 ] ; M_idx_40 = t19 -> mM . mX [ 40 ] ;
M_idx_41 = t19 -> mM . mX [ 41 ] ; M_idx_42 = t19 -> mM . mX [ 42 ] ;
M_idx_43 = t19 -> mM . mX [ 43 ] ; M_idx_44 = t19 -> mM . mX [ 44 ] ;
M_idx_45 = t19 -> mM . mX [ 45 ] ; M_idx_46 = t19 -> mM . mX [ 46 ] ;
M_idx_47 = t19 -> mM . mX [ 47 ] ; M_idx_48 = t19 -> mM . mX [ 48 ] ;
M_idx_49 = t19 -> mM . mX [ 49 ] ; M_idx_50 = t19 -> mM . mX [ 50 ] ;
M_idx_51 = t19 -> mM . mX [ 51 ] ; M_idx_52 = t19 -> mM . mX [ 52 ] ;
M_idx_53 = t19 -> mM . mX [ 53 ] ; M_idx_54 = t19 -> mM . mX [ 54 ] ;
M_idx_55 = t19 -> mM . mX [ 55 ] ; M_idx_56 = t19 -> mM . mX [ 56 ] ;
M_idx_57 = t19 -> mM . mX [ 57 ] ; M_idx_58 = t19 -> mM . mX [ 58 ] ;
M_idx_59 = t19 -> mM . mX [ 59 ] ; M_idx_60 = t19 -> mM . mX [ 60 ] ;
M_idx_61 = t19 -> mM . mX [ 61 ] ; M_idx_62 = t19 -> mM . mX [ 62 ] ;
M_idx_63 = t19 -> mM . mX [ 63 ] ; M_idx_64 = t19 -> mM . mX [ 64 ] ;
M_idx_65 = t19 -> mM . mX [ 65 ] ; M_idx_66 = t19 -> mM . mX [ 66 ] ;
M_idx_67 = t19 -> mM . mX [ 67 ] ; M_idx_68 = t19 -> mM . mX [ 68 ] ;
M_idx_69 = t19 -> mM . mX [ 69 ] ; M_idx_70 = t19 -> mM . mX [ 70 ] ;
M_idx_71 = t19 -> mM . mX [ 71 ] ; M_idx_72 = t19 -> mM . mX [ 72 ] ;
M_idx_73 = t19 -> mM . mX [ 73 ] ; M_idx_74 = t19 -> mM . mX [ 74 ] ;
M_idx_75 = t19 -> mM . mX [ 75 ] ; M_idx_76 = t19 -> mM . mX [ 76 ] ;
M_idx_77 = t19 -> mM . mX [ 77 ] ; M_idx_78 = t19 -> mM . mX [ 78 ] ;
M_idx_79 = t19 -> mM . mX [ 79 ] ; M_idx_80 = t19 -> mM . mX [ 80 ] ;
M_idx_81 = t19 -> mM . mX [ 81 ] ; M_idx_82 = t19 -> mM . mX [ 82 ] ;
M_idx_83 = t19 -> mM . mX [ 83 ] ; M_idx_84 = t19 -> mM . mX [ 84 ] ; T_idx_0
= t19 -> mT . mX [ 0 ] ; X_idx_0 = t19 -> mX . mX [ 0 ] ; X_idx_1 = t19 -> mX
. mX [ 1 ] ; X_idx_2 = t19 -> mX . mX [ 2 ] ; X_idx_3 = t19 -> mX . mX [ 3 ]
; X_idx_4 = t19 -> mX . mX [ 4 ] ; X_idx_5 = t19 -> mX . mX [ 5 ] ; X_idx_6 =
t19 -> mX . mX [ 6 ] ; X_idx_7 = t19 -> mX . mX [ 7 ] ; X_idx_8 = t19 -> mX .
mX [ 8 ] ; X_idx_9 = t19 -> mX . mX [ 9 ] ; X_idx_10 = t19 -> mX . mX [ 10 ]
; X_idx_11 = t19 -> mX . mX [ 11 ] ; X_idx_12 = t19 -> mX . mX [ 12 ] ;
X_idx_13 = t19 -> mX . mX [ 13 ] ; X_idx_14 = t19 -> mX . mX [ 14 ] ;
X_idx_15 = t19 -> mX . mX [ 15 ] ; X_idx_16 = t19 -> mX . mX [ 16 ] ;
X_idx_17 = t19 -> mX . mX [ 17 ] ; X_idx_18 = t19 -> mX . mX [ 18 ] ;
X_idx_19 = t19 -> mX . mX [ 19 ] ; X_idx_20 = t19 -> mX . mX [ 20 ] ;
X_idx_21 = t19 -> mX . mX [ 21 ] ; X_idx_22 = t19 -> mX . mX [ 22 ] ;
X_idx_23 = t19 -> mX . mX [ 23 ] ; X_idx_24 = t19 -> mX . mX [ 24 ] ;
X_idx_25 = t19 -> mX . mX [ 25 ] ; X_idx_26 = t19 -> mX . mX [ 26 ] ;
X_idx_27 = t19 -> mX . mX [ 27 ] ; X_idx_28 = t19 -> mX . mX [ 28 ] ;
X_idx_29 = t19 -> mX . mX [ 29 ] ; X_idx_30 = t19 -> mX . mX [ 30 ] ;
X_idx_31 = t19 -> mX . mX [ 31 ] ; X_idx_32 = t19 -> mX . mX [ 32 ] ;
X_idx_33 = t19 -> mX . mX [ 33 ] ; X_idx_36 = t19 -> mX . mX [ 36 ] ;
X_idx_39 = t19 -> mX . mX [ 39 ] ; X_idx_43 = t19 -> mX . mX [ 43 ] ;
X_idx_46 = t19 -> mX . mX [ 46 ] ; X_idx_49 = t19 -> mX . mX [ 49 ] ;
X_idx_52 = t19 -> mX . mX [ 52 ] ; X_idx_55 = t19 -> mX . mX [ 55 ] ;
X_idx_58 = t19 -> mX . mX [ 58 ] ; X_idx_60 = t19 -> mX . mX [ 60 ] ;
X_idx_64 = t19 -> mX . mX [ 64 ] ; X_idx_65 = t19 -> mX . mX [ 65 ] ;
X_idx_67 = t19 -> mX . mX [ 67 ] ; X_idx_69 = t19 -> mX . mX [ 69 ] ;
X_idx_71 = t19 -> mX . mX [ 71 ] ; X_idx_73 = t19 -> mX . mX [ 73 ] ;
X_idx_75 = t19 -> mX . mX [ 75 ] ; X_idx_76 = t19 -> mX . mX [ 76 ] ; out =
t20 -> mF ; t4 = - X_idx_1 + X_idx_2 ; t6 = - X_idx_4 + X_idx_5 ; t8 = -
X_idx_0 + X_idx_6 ; t10 = - X_idx_7 + X_idx_8 ; t13 = - X_idx_9 + X_idx_10 ;
t15 = - X_idx_11 + X_idx_12 ; N_Channel_MOSFET6_mos_vds = - X_idx_13 +
X_idx_14 ; N_Channel_MOSFET7_mos_vds = - X_idx_15 + X_idx_16 ;
N_Channel_MOSFET8_mos_vds = - X_idx_17 + X_idx_18 ; intrm_sf_mf_99 = - ( -
X_idx_28 + X_idx_29 ) ; intrm_sf_mf_102 = - X_idx_29 - ( - ( - X_idx_28 +
X_idx_29 ) ) ; intrm_sf_mf_106 = - ( - X_idx_30 + X_idx_31 ) ;
intrm_sf_mf_109 = - X_idx_31 - intrm_sf_mf_106 ; X_idx_0 = X_idx_5 - t6 ;
intrm_sf_mf_113 = - ( - X_idx_32 + X_idx_33 ) ; intrm_sf_mf_116 = - X_idx_33
- intrm_sf_mf_113 ; intrm_sf_mf_119 = sin ( T_idx_0 * 376.99111843077515 ) *
0.5 ; X_idx_4 = X_idx_6 - t8 ; X_idx_7 = X_idx_8 - t10 ; X_idx_9 = X_idx_10 -
t13 ; X_idx_11 = X_idx_12 - t15 ; X_idx_1 = X_idx_2 - t4 ; intrm_sf_mf_46 =
X_idx_14 - N_Channel_MOSFET6_mos_vds ; intrm_sf_mf_53 = X_idx_16 -
N_Channel_MOSFET7_mos_vds ; intrm_sf_mf_60 = X_idx_18 -
N_Channel_MOSFET8_mos_vds ; intrm_sf_mf_64 = - ( - X_idx_19 + X_idx_20 ) ;
intrm_sf_mf_67 = - X_idx_20 - intrm_sf_mf_64 ; intrm_sf_mf_71 = - ( -
X_idx_21 + X_idx_3 ) ; intrm_sf_mf_74 = - X_idx_3 - intrm_sf_mf_71 ; X_idx_32
= - ( - X_idx_22 + X_idx_23 ) ; T_idx_0 = - X_idx_23 - X_idx_32 ; X_idx_19 =
- ( - X_idx_24 + X_idx_25 ) ; X_idx_21 = - X_idx_25 - X_idx_19 ; X_idx_22 = -
( - X_idx_26 + X_idx_27 ) ; X_idx_24 = - X_idx_27 - X_idx_22 ; if ( M_idx_0
!= 0 ) { if ( M_idx_1 != 0 ) { X_idx_30 = X_idx_39 - t4 * 1.0E-12 ; } else if
( M_idx_12 != 0 ) { X_idx_30 = X_idx_39 - ( ( t4 * 0.01 + 1.0 ) * ( ( X_idx_2
- 1.0 ) - t4 * 0.5 ) * t4 * 0.005 + t4 * 1.0E-12 ) ; } else { X_idx_30 =
X_idx_39 - ( ( t4 * 0.01 + 1.0 ) * ( X_idx_2 - 1.0 ) * ( X_idx_2 - 1.0 ) *
0.005 * 0.5 + t4 * 1.0E-12 ) ; } } else if ( M_idx_23 != 0 ) { X_idx_30 =
X_idx_39 - t4 * 1.0E-12 ; } else if ( M_idx_34 != 0 ) { X_idx_30 = X_idx_39 -
( ( ( X_idx_1 - 1.0 ) + t4 * 0.5 ) * ( 1.0 - t4 * 0.01 ) * t4 * 0.005 + t4 *
1.0E-12 ) ; } else { X_idx_30 = X_idx_39 - ( ( 1.0 - t4 * 0.01 ) * ( X_idx_1
- 1.0 ) * ( X_idx_1 - 1.0 ) * 0.005 * - 0.5 + t4 * 1.0E-12 ) ; } if (
M_idx_45 != 0 ) { if ( M_idx_56 != 0 ) { X_idx_28 = X_idx_43 - t6 * 1.0E-12 ;
} else if ( M_idx_67 != 0 ) { X_idx_28 = X_idx_43 - ( ( t6 * 0.01 + 1.0 ) * (
( X_idx_5 - 1.0 ) - t6 * 0.5 ) * 0.005 * t6 + t6 * 1.0E-12 ) ; } else {
X_idx_28 = X_idx_43 - ( ( t6 * 0.01 + 1.0 ) * ( X_idx_5 - 1.0 ) * ( X_idx_5 -
1.0 ) * 0.005 * 0.5 + t6 * 1.0E-12 ) ; } } else if ( M_idx_78 != 0 ) {
X_idx_28 = X_idx_43 - t6 * 1.0E-12 ; } else if ( M_idx_84 != 0 ) { X_idx_28 =
X_idx_43 - ( ( ( X_idx_0 - 1.0 ) + t6 * 0.5 ) * ( 1.0 - t6 * 0.01 ) * 0.005 *
t6 + t6 * 1.0E-12 ) ; } else { X_idx_28 = X_idx_43 - ( ( 1.0 - t6 * 0.01 ) *
( X_idx_0 - 1.0 ) * ( X_idx_0 - 1.0 ) * 0.005 * - 0.5 + t6 * 1.0E-12 ) ; } if
( M_idx_2 != 0 ) { if ( M_idx_3 != 0 ) { X_idx_17 = X_idx_36 - t8 * 1.0E-12 ;
} else if ( M_idx_4 != 0 ) { X_idx_17 = X_idx_36 - ( ( t8 * 0.01 + 1.0 ) * (
( X_idx_6 - 2.0 ) - t8 * 0.5 ) * t8 * 0.0025 + t8 * 1.0E-12 ) ; } else {
X_idx_17 = X_idx_36 - ( ( t8 * 0.01 + 1.0 ) * ( X_idx_6 - 2.0 ) * ( X_idx_6 -
2.0 ) * 0.0025 * 0.5 + t8 * 1.0E-12 ) ; } } else if ( M_idx_5 != 0 ) {
X_idx_17 = X_idx_36 - t8 * 1.0E-12 ; } else if ( M_idx_6 != 0 ) { X_idx_17 =
X_idx_36 - ( ( ( X_idx_4 - 2.0 ) + t8 * 0.5 ) * ( 1.0 - t8 * 0.01 ) * t8 *
0.0025 + t8 * 1.0E-12 ) ; } else { X_idx_17 = X_idx_36 - ( ( 1.0 - t8 * 0.01
) * ( X_idx_4 - 2.0 ) * ( X_idx_4 - 2.0 ) * 0.0025 * - 0.5 + t8 * 1.0E-12 ) ;
} if ( M_idx_7 != 0 ) { if ( M_idx_8 != 0 ) { X_idx_15 = X_idx_46 - t10 *
1.0E-12 ; } else if ( M_idx_9 != 0 ) { X_idx_15 = X_idx_46 - ( ( t10 * 0.01 +
1.0 ) * ( ( X_idx_8 - 1.0 ) - t10 * 0.5 ) * 0.05 * t10 + t10 * 1.0E-12 ) ; }
else { X_idx_15 = X_idx_46 - ( ( t10 * 0.01 + 1.0 ) * ( X_idx_8 - 1.0 ) * (
X_idx_8 - 1.0 ) * 0.05 * 0.5 + t10 * 1.0E-12 ) ; } } else if ( M_idx_10 != 0
) { X_idx_15 = X_idx_46 - t10 * 1.0E-12 ; } else if ( M_idx_11 != 0 ) {
X_idx_15 = X_idx_46 - ( ( ( X_idx_7 - 1.0 ) + t10 * 0.5 ) * ( 1.0 - t10 *
0.01 ) * 0.05 * t10 + t10 * 1.0E-12 ) ; } else { X_idx_15 = X_idx_46 - ( (
1.0 - t10 * 0.01 ) * ( X_idx_7 - 1.0 ) * ( X_idx_7 - 1.0 ) * 0.05 * - 0.5 +
t10 * 1.0E-12 ) ; } if ( M_idx_13 != 0 ) { if ( M_idx_14 != 0 ) { t4 =
X_idx_49 - t13 * 1.0E-12 ; } else if ( M_idx_15 != 0 ) { t4 = X_idx_49 - ( (
t13 * 0.01 + 1.0 ) * ( ( X_idx_10 - 1.0 ) - t13 * 0.5 ) * 0.05 * t13 + t13 *
1.0E-12 ) ; } else { t4 = X_idx_49 - ( ( t13 * 0.01 + 1.0 ) * ( X_idx_10 -
1.0 ) * ( X_idx_10 - 1.0 ) * 0.05 * 0.5 + t13 * 1.0E-12 ) ; } } else if (
M_idx_16 != 0 ) { t4 = X_idx_49 - t13 * 1.0E-12 ; } else if ( M_idx_17 != 0 )
{ t4 = X_idx_49 - ( ( ( X_idx_9 - 1.0 ) + t13 * 0.5 ) * ( 1.0 - t13 * 0.01 )
* 0.05 * t13 + t13 * 1.0E-12 ) ; } else { t4 = X_idx_49 - ( ( 1.0 - t13 *
0.01 ) * ( X_idx_9 - 1.0 ) * ( X_idx_9 - 1.0 ) * 0.05 * - 0.5 + t13 * 1.0E-12
) ; } if ( M_idx_18 != 0 ) { if ( M_idx_19 != 0 ) { X_idx_13 = X_idx_52 - t15
* 1.0E-12 ; } else if ( M_idx_20 != 0 ) { X_idx_13 = X_idx_52 - ( ( t15 *
0.01 + 1.0 ) * ( ( X_idx_12 - 1.0 ) - t15 * 0.5 ) * 0.05 * t15 + t15 *
1.0E-12 ) ; } else { X_idx_13 = X_idx_52 - ( ( t15 * 0.01 + 1.0 ) * (
X_idx_12 - 1.0 ) * ( X_idx_12 - 1.0 ) * 0.05 * 0.5 + t15 * 1.0E-12 ) ; } }
else if ( M_idx_21 != 0 ) { X_idx_13 = X_idx_52 - t15 * 1.0E-12 ; } else if (
M_idx_22 != 0 ) { X_idx_13 = X_idx_52 - ( ( ( X_idx_11 - 1.0 ) + t15 * 0.5 )
* ( 1.0 - t15 * 0.01 ) * 0.05 * t15 + t15 * 1.0E-12 ) ; } else { X_idx_13 =
X_idx_52 - ( ( 1.0 - t15 * 0.01 ) * ( X_idx_11 - 1.0 ) * ( X_idx_11 - 1.0 ) *
0.05 * - 0.5 + t15 * 1.0E-12 ) ; } if ( M_idx_24 != 0 ) { if ( M_idx_25 != 0
) { t6 = X_idx_55 - N_Channel_MOSFET6_mos_vds * 1.0E-12 ; } else if (
M_idx_26 != 0 ) { t6 = X_idx_55 - ( ( N_Channel_MOSFET6_mos_vds * 0.01 + 1.0
) * ( ( X_idx_14 - 1.0 ) - N_Channel_MOSFET6_mos_vds * 0.5 ) * 0.05 *
N_Channel_MOSFET6_mos_vds + N_Channel_MOSFET6_mos_vds * 1.0E-12 ) ; } else {
t6 = X_idx_55 - ( ( N_Channel_MOSFET6_mos_vds * 0.01 + 1.0 ) * ( X_idx_14 -
1.0 ) * ( X_idx_14 - 1.0 ) * 0.05 * 0.5 + N_Channel_MOSFET6_mos_vds * 1.0E-12
) ; } } else if ( M_idx_27 != 0 ) { t6 = X_idx_55 - N_Channel_MOSFET6_mos_vds
* 1.0E-12 ; } else if ( M_idx_28 != 0 ) { t6 = X_idx_55 - ( ( (
intrm_sf_mf_46 - 1.0 ) + N_Channel_MOSFET6_mos_vds * 0.5 ) * ( 1.0 -
N_Channel_MOSFET6_mos_vds * 0.01 ) * 0.05 * N_Channel_MOSFET6_mos_vds +
N_Channel_MOSFET6_mos_vds * 1.0E-12 ) ; } else { t6 = X_idx_55 - ( ( 1.0 -
N_Channel_MOSFET6_mos_vds * 0.01 ) * ( intrm_sf_mf_46 - 1.0 ) * (
intrm_sf_mf_46 - 1.0 ) * 0.05 * - 0.5 + N_Channel_MOSFET6_mos_vds * 1.0E-12 )
; } if ( M_idx_29 != 0 ) { if ( M_idx_30 != 0 ) { X_idx_11 = X_idx_58 -
N_Channel_MOSFET7_mos_vds * 1.0E-12 ; } else if ( M_idx_31 != 0 ) { X_idx_11
= X_idx_58 - ( ( N_Channel_MOSFET7_mos_vds * 0.01 + 1.0 ) * ( ( X_idx_16 -
1.0 ) - N_Channel_MOSFET7_mos_vds * 0.5 ) * 0.05 * N_Channel_MOSFET7_mos_vds
+ N_Channel_MOSFET7_mos_vds * 1.0E-12 ) ; } else { X_idx_11 = X_idx_58 - ( (
N_Channel_MOSFET7_mos_vds * 0.01 + 1.0 ) * ( X_idx_16 - 1.0 ) * ( X_idx_16 -
1.0 ) * 0.05 * 0.5 + N_Channel_MOSFET7_mos_vds * 1.0E-12 ) ; } } else if (
M_idx_32 != 0 ) { X_idx_11 = X_idx_58 - N_Channel_MOSFET7_mos_vds * 1.0E-12 ;
} else if ( M_idx_33 != 0 ) { X_idx_11 = X_idx_58 - ( ( ( intrm_sf_mf_53 -
1.0 ) + N_Channel_MOSFET7_mos_vds * 0.5 ) * ( 1.0 - N_Channel_MOSFET7_mos_vds
* 0.01 ) * 0.05 * N_Channel_MOSFET7_mos_vds + N_Channel_MOSFET7_mos_vds *
1.0E-12 ) ; } else { X_idx_11 = X_idx_58 - ( ( 1.0 -
N_Channel_MOSFET7_mos_vds * 0.01 ) * ( intrm_sf_mf_53 - 1.0 ) * (
intrm_sf_mf_53 - 1.0 ) * 0.05 * - 0.5 + N_Channel_MOSFET7_mos_vds * 1.0E-12 )
; } if ( M_idx_35 != 0 ) { if ( M_idx_36 != 0 ) { t8 = X_idx_60 -
N_Channel_MOSFET8_mos_vds * 1.0E-12 ; } else if ( M_idx_37 != 0 ) { t8 =
X_idx_60 - ( ( N_Channel_MOSFET8_mos_vds * 0.01 + 1.0 ) * ( ( X_idx_18 - 1.0
) - N_Channel_MOSFET8_mos_vds * 0.5 ) * 0.05 * N_Channel_MOSFET8_mos_vds +
N_Channel_MOSFET8_mos_vds * 1.0E-12 ) ; } else { t8 = X_idx_60 - ( (
N_Channel_MOSFET8_mos_vds * 0.01 + 1.0 ) * ( X_idx_18 - 1.0 ) * ( X_idx_18 -
1.0 ) * 0.05 * 0.5 + N_Channel_MOSFET8_mos_vds * 1.0E-12 ) ; } } else if (
M_idx_38 != 0 ) { t8 = X_idx_60 - N_Channel_MOSFET8_mos_vds * 1.0E-12 ; }
else if ( M_idx_39 != 0 ) { t8 = X_idx_60 - ( ( ( intrm_sf_mf_60 - 1.0 ) +
N_Channel_MOSFET8_mos_vds * 0.5 ) * ( 1.0 - N_Channel_MOSFET8_mos_vds * 0.01
) * 0.05 * N_Channel_MOSFET8_mos_vds + N_Channel_MOSFET8_mos_vds * 1.0E-12 )
; } else { t8 = X_idx_60 - ( ( 1.0 - N_Channel_MOSFET8_mos_vds * 0.01 ) * (
intrm_sf_mf_60 - 1.0 ) * ( intrm_sf_mf_60 - 1.0 ) * 0.05 * - 0.5 +
N_Channel_MOSFET8_mos_vds * 1.0E-12 ) ; } if ( M_idx_40 != 0 ) { if (
M_idx_41 != 0 ) { X_idx_9 = - X_idx_64 - intrm_sf_mf_64 * 1.0E-12 ; } else if
( M_idx_42 != 0 ) { X_idx_9 = - X_idx_64 - ( ( intrm_sf_mf_64 * 0.01 + 1.0 )
* ( ( - X_idx_20 - 1.0 ) - intrm_sf_mf_64 * 0.5 ) * 0.0025 * intrm_sf_mf_64 +
intrm_sf_mf_64 * 1.0E-12 ) ; } else { X_idx_9 = - X_idx_64 - ( (
intrm_sf_mf_64 * 0.01 + 1.0 ) * ( - X_idx_20 - 1.0 ) * ( - X_idx_20 - 1.0 ) *
0.0025 * 0.5 + intrm_sf_mf_64 * 1.0E-12 ) ; } } else if ( M_idx_43 != 0 ) {
X_idx_9 = - X_idx_64 - intrm_sf_mf_64 * 1.0E-12 ; } else if ( M_idx_44 != 0 )
{ X_idx_9 = - X_idx_64 - ( ( ( intrm_sf_mf_67 - 1.0 ) + intrm_sf_mf_64 * 0.5
) * ( 1.0 - intrm_sf_mf_64 * 0.01 ) * 0.0025 * intrm_sf_mf_64 +
intrm_sf_mf_64 * 1.0E-12 ) ; } else { X_idx_9 = - X_idx_64 - ( ( 1.0 -
intrm_sf_mf_64 * 0.01 ) * ( intrm_sf_mf_67 - 1.0 ) * ( intrm_sf_mf_67 - 1.0 )
* 0.0025 * - 0.5 + intrm_sf_mf_64 * 1.0E-12 ) ; } if ( M_idx_46 != 0 ) { if (
M_idx_47 != 0 ) { t10 = - X_idx_65 - intrm_sf_mf_71 * 1.0E-12 ; } else if (
M_idx_48 != 0 ) { t10 = - X_idx_65 - ( ( intrm_sf_mf_71 * 0.01 + 1.0 ) * ( (
- X_idx_3 - 1.0 ) - intrm_sf_mf_71 * 0.5 ) * 0.0025 * intrm_sf_mf_71 +
intrm_sf_mf_71 * 1.0E-12 ) ; } else { t10 = - X_idx_65 - ( ( intrm_sf_mf_71 *
0.01 + 1.0 ) * ( - X_idx_3 - 1.0 ) * ( - X_idx_3 - 1.0 ) * 0.0025 * 0.5 +
intrm_sf_mf_71 * 1.0E-12 ) ; } } else if ( M_idx_49 != 0 ) { t10 = - X_idx_65
- intrm_sf_mf_71 * 1.0E-12 ; } else if ( M_idx_50 != 0 ) { t10 = - X_idx_65 -
( ( ( intrm_sf_mf_74 - 1.0 ) + intrm_sf_mf_71 * 0.5 ) * ( 1.0 -
intrm_sf_mf_71 * 0.01 ) * 0.0025 * intrm_sf_mf_71 + intrm_sf_mf_71 * 1.0E-12
) ; } else { t10 = - X_idx_65 - ( ( 1.0 - intrm_sf_mf_71 * 0.01 ) * (
intrm_sf_mf_74 - 1.0 ) * ( intrm_sf_mf_74 - 1.0 ) * 0.0025 * - 0.5 +
intrm_sf_mf_71 * 1.0E-12 ) ; } if ( M_idx_51 != 0 ) { if ( M_idx_52 != 0 ) {
X_idx_7 = - X_idx_67 - X_idx_32 * 1.0E-12 ; } else if ( M_idx_53 != 0 ) {
X_idx_7 = - X_idx_67 - ( ( X_idx_32 * 0.01 + 1.0 ) * ( ( - X_idx_23 - 1.0 ) -
X_idx_32 * 0.5 ) * 0.05 * X_idx_32 + X_idx_32 * 1.0E-12 ) ; } else { X_idx_7
= - X_idx_67 - ( ( X_idx_32 * 0.01 + 1.0 ) * ( - X_idx_23 - 1.0 ) * ( -
X_idx_23 - 1.0 ) * 0.05 * 0.5 + X_idx_32 * 1.0E-12 ) ; } } else if ( M_idx_54
!= 0 ) { X_idx_7 = - X_idx_67 - X_idx_32 * 1.0E-12 ; } else if ( M_idx_55 !=
0 ) { X_idx_7 = - X_idx_67 - ( ( ( T_idx_0 - 1.0 ) + X_idx_32 * 0.5 ) * ( 1.0
- X_idx_32 * 0.01 ) * 0.05 * X_idx_32 + X_idx_32 * 1.0E-12 ) ; } else {
X_idx_7 = - X_idx_67 - ( ( 1.0 - X_idx_32 * 0.01 ) * ( T_idx_0 - 1.0 ) * (
T_idx_0 - 1.0 ) * 0.05 * - 0.5 + X_idx_32 * 1.0E-12 ) ; } if ( M_idx_57 != 0
) { if ( M_idx_58 != 0 ) { X_idx_0 = - X_idx_69 - X_idx_19 * 1.0E-12 ; } else
if ( M_idx_59 != 0 ) { X_idx_0 = - X_idx_69 - ( ( X_idx_19 * 0.01 + 1.0 ) * (
( - X_idx_25 - 1.0 ) - X_idx_19 * 0.5 ) * 0.05 * X_idx_19 + X_idx_19 *
1.0E-12 ) ; } else { X_idx_0 = - X_idx_69 - ( ( X_idx_19 * 0.01 + 1.0 ) * ( -
X_idx_25 - 1.0 ) * ( - X_idx_25 - 1.0 ) * 0.05 * 0.5 + X_idx_19 * 1.0E-12 ) ;
} } else if ( M_idx_60 != 0 ) { X_idx_0 = - X_idx_69 - X_idx_19 * 1.0E-12 ; }
else if ( M_idx_61 != 0 ) { X_idx_0 = - X_idx_69 - ( ( ( X_idx_21 - 1.0 ) +
X_idx_19 * 0.5 ) * ( 1.0 - X_idx_19 * 0.01 ) * 0.05 * X_idx_19 + X_idx_19 *
1.0E-12 ) ; } else { X_idx_0 = - X_idx_69 - ( ( 1.0 - X_idx_19 * 0.01 ) * (
X_idx_21 - 1.0 ) * ( X_idx_21 - 1.0 ) * 0.05 * - 0.5 + X_idx_19 * 1.0E-12 ) ;
} if ( M_idx_62 != 0 ) { if ( M_idx_63 != 0 ) { t13 = - X_idx_71 - X_idx_22 *
1.0E-12 ; } else if ( M_idx_64 != 0 ) { t13 = - X_idx_71 - ( ( X_idx_22 *
0.01 + 1.0 ) * ( ( - X_idx_27 - 1.0 ) - X_idx_22 * 0.5 ) * 0.05 * X_idx_22 +
X_idx_22 * 1.0E-12 ) ; } else { t13 = - X_idx_71 - ( ( X_idx_22 * 0.01 + 1.0
) * ( - X_idx_27 - 1.0 ) * ( - X_idx_27 - 1.0 ) * 0.05 * 0.5 + X_idx_22 *
1.0E-12 ) ; } } else if ( M_idx_65 != 0 ) { t13 = - X_idx_71 - X_idx_22 *
1.0E-12 ; } else if ( M_idx_66 != 0 ) { t13 = - X_idx_71 - ( ( ( X_idx_24 -
1.0 ) + X_idx_22 * 0.5 ) * ( 1.0 - X_idx_22 * 0.01 ) * 0.05 * X_idx_22 +
X_idx_22 * 1.0E-12 ) ; } else { t13 = - X_idx_71 - ( ( 1.0 - X_idx_22 * 0.01
) * ( X_idx_24 - 1.0 ) * ( X_idx_24 - 1.0 ) * 0.05 * - 0.5 + X_idx_22 *
1.0E-12 ) ; } if ( M_idx_68 != 0 ) { if ( M_idx_69 != 0 ) { X_idx_4 = -
X_idx_73 - intrm_sf_mf_99 * 1.0E-12 ; } else if ( M_idx_70 != 0 ) { X_idx_4 =
- X_idx_73 - ( ( intrm_sf_mf_99 * 0.01 + 1.0 ) * ( ( - X_idx_29 - 1.0 ) -
intrm_sf_mf_99 * 0.5 ) * 0.05 * intrm_sf_mf_99 + intrm_sf_mf_99 * 1.0E-12 ) ;
} else { X_idx_4 = - X_idx_73 - ( ( intrm_sf_mf_99 * 0.01 + 1.0 ) * ( -
X_idx_29 - 1.0 ) * ( - X_idx_29 - 1.0 ) * 0.05 * 0.5 + intrm_sf_mf_99 *
1.0E-12 ) ; } } else if ( M_idx_71 != 0 ) { X_idx_4 = - X_idx_73 -
intrm_sf_mf_99 * 1.0E-12 ; } else if ( M_idx_72 != 0 ) { X_idx_4 = - X_idx_73
- ( ( ( intrm_sf_mf_102 - 1.0 ) + intrm_sf_mf_99 * 0.5 ) * ( 1.0 -
intrm_sf_mf_99 * 0.01 ) * 0.05 * intrm_sf_mf_99 + intrm_sf_mf_99 * 1.0E-12 )
; } else { X_idx_4 = - X_idx_73 - ( ( 1.0 - intrm_sf_mf_99 * 0.01 ) * (
intrm_sf_mf_102 - 1.0 ) * ( intrm_sf_mf_102 - 1.0 ) * 0.05 * - 0.5 +
intrm_sf_mf_99 * 1.0E-12 ) ; } if ( M_idx_73 != 0 ) { if ( M_idx_74 != 0 ) {
t15 = - X_idx_75 - intrm_sf_mf_106 * 1.0E-12 ; } else if ( M_idx_75 != 0 ) {
t15 = - X_idx_75 - ( ( intrm_sf_mf_106 * 0.01 + 1.0 ) * ( ( - X_idx_31 - 1.0
) - intrm_sf_mf_106 * 0.5 ) * 0.05 * intrm_sf_mf_106 + intrm_sf_mf_106 *
1.0E-12 ) ; } else { t15 = - X_idx_75 - ( ( intrm_sf_mf_106 * 0.01 + 1.0 ) *
( - X_idx_31 - 1.0 ) * ( - X_idx_31 - 1.0 ) * 0.05 * 0.5 + intrm_sf_mf_106 *
1.0E-12 ) ; } } else if ( M_idx_76 != 0 ) { t15 = - X_idx_75 -
intrm_sf_mf_106 * 1.0E-12 ; } else if ( M_idx_77 != 0 ) { t15 = - X_idx_75 -
( ( ( intrm_sf_mf_109 - 1.0 ) + intrm_sf_mf_106 * 0.5 ) * ( 1.0 -
intrm_sf_mf_106 * 0.01 ) * 0.05 * intrm_sf_mf_106 + intrm_sf_mf_106 * 1.0E-12
) ; } else { t15 = - X_idx_75 - ( ( 1.0 - intrm_sf_mf_106 * 0.01 ) * (
intrm_sf_mf_109 - 1.0 ) * ( intrm_sf_mf_109 - 1.0 ) * 0.05 * - 0.5 +
intrm_sf_mf_106 * 1.0E-12 ) ; } if ( M_idx_79 != 0 ) { if ( M_idx_80 != 0 ) {
X_idx_1 = - X_idx_76 - intrm_sf_mf_113 * 1.0E-12 ; } else if ( M_idx_81 != 0
) { X_idx_1 = - X_idx_76 - ( ( intrm_sf_mf_113 * 0.01 + 1.0 ) * ( ( -
X_idx_33 - 1.0 ) - intrm_sf_mf_113 * 0.5 ) * 0.05 * intrm_sf_mf_113 +
intrm_sf_mf_113 * 1.0E-12 ) ; } else { X_idx_1 = - X_idx_76 - ( (
intrm_sf_mf_113 * 0.01 + 1.0 ) * ( - X_idx_33 - 1.0 ) * ( - X_idx_33 - 1.0 )
* 0.05 * 0.5 + intrm_sf_mf_113 * 1.0E-12 ) ; } } else if ( M_idx_82 != 0 ) {
X_idx_1 = - X_idx_76 - intrm_sf_mf_113 * 1.0E-12 ; } else if ( M_idx_83 != 0
) { X_idx_1 = - X_idx_76 - ( ( ( intrm_sf_mf_116 - 1.0 ) + intrm_sf_mf_113 *
0.5 ) * ( 1.0 - intrm_sf_mf_113 * 0.01 ) * 0.05 * intrm_sf_mf_113 +
intrm_sf_mf_113 * 1.0E-12 ) ; } else { X_idx_1 = - X_idx_76 - ( ( 1.0 -
intrm_sf_mf_113 * 0.01 ) * ( intrm_sf_mf_116 - 1.0 ) * ( intrm_sf_mf_116 -
1.0 ) * 0.05 * - 0.5 + intrm_sf_mf_113 * 1.0E-12 ) ; } out . mX [ 0 ] = - 0.0
; out . mX [ 1 ] = - 0.0 ; out . mX [ 2 ] = - 0.0 ; out . mX [ 3 ] = - 0.0 ;
out . mX [ 4 ] = - 0.0 ; out . mX [ 5 ] = - 0.0 ; out . mX [ 6 ] = - 0.0 ;
out . mX [ 7 ] = - 0.0 ; out . mX [ 8 ] = - 0.0 ; out . mX [ 9 ] = - 0.0 ;
out . mX [ 10 ] = - 0.0 ; out . mX [ 11 ] = - 0.0 ; out . mX [ 12 ] = - 0.0 ;
out . mX [ 13 ] = - 0.0 ; out . mX [ 14 ] = - 0.0 ; out . mX [ 15 ] = - 0.0 ;
out . mX [ 16 ] = - 0.015 ; out . mX [ 17 ] = - 0.0 ; out . mX [ 18 ] = - 0.0
; out . mX [ 19 ] = - 0.0 ; out . mX [ 20 ] = - 0.0 ; out . mX [ 21 ] = - 0.0
; out . mX [ 22 ] = - 0.0 ; out . mX [ 23 ] = - 0.0 ; out . mX [ 24 ] = - 0.0
; out . mX [ 25 ] = - 0.0 ; out . mX [ 26 ] = - 0.0 ; out . mX [ 27 ] = - 0.0
; out . mX [ 28 ] = - 0.0 ; out . mX [ 29 ] = - 0.0 ; out . mX [ 30 ] = - 0.0
; out . mX [ 31 ] = - 0.0 ; out . mX [ 32 ] = - 0.0 ; out . mX [ 33 ] = - 0.0
; out . mX [ 34 ] = X_idx_30 ; out . mX [ 35 ] = 15.0 ; out . mX [ 36 ] =
X_idx_28 ; out . mX [ 37 ] = - 0.0 ; out . mX [ 38 ] = X_idx_17 ; out . mX [
39 ] = 30.0 ; out . mX [ 40 ] = X_idx_15 ; out . mX [ 41 ] = 15.0 ; out . mX
[ 42 ] = t4 ; out . mX [ 43 ] = 15.0 ; out . mX [ 44 ] = X_idx_13 ; out . mX
[ 45 ] = 15.0 ; out . mX [ 46 ] = t6 ; out . mX [ 47 ] = 15.0 ; out . mX [ 48
] = X_idx_11 ; out . mX [ 49 ] = 15.0 ; out . mX [ 50 ] = t8 ; out . mX [ 51
] = 14.999985 ; out . mX [ 52 ] = - 0.0 ; out . mX [ 53 ] = X_idx_9 ; out .
mX [ 54 ] = - 0.0 ; out . mX [ 55 ] = - 0.0 ; out . mX [ 56 ] = t10 ; out .
mX [ 57 ] = 15.0 ; out . mX [ 58 ] = X_idx_7 ; out . mX [ 59 ] = - 0.0 ; out
. mX [ 60 ] = 0.0 ; out . mX [ 61 ] = X_idx_0 ; out . mX [ 62 ] = - 15.0 ;
out . mX [ 63 ] = 0.0 ; out . mX [ 64 ] = t13 ; out . mX [ 65 ] = - 15.0 ;
out . mX [ 66 ] = 0.0 ; out . mX [ 67 ] = X_idx_4 ; out . mX [ 68 ] = - 15.0
; out . mX [ 69 ] = 0.0 ; out . mX [ 70 ] = t15 ; out . mX [ 71 ] = - 15.0 ;
out . mX [ 72 ] = 0.000165 ; out . mX [ 73 ] = X_idx_1 ; out . mX [ 74 ] = -
15.0 ; out . mX [ 75 ] = - 0.016500016500000003 ; out . mX [ 76 ] = -
intrm_sf_mf_119 ; ( void ) sys ; ( void ) t20 ; return 0 ; }
