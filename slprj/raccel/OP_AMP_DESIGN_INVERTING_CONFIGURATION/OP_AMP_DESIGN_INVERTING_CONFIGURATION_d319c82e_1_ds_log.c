#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_log.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_log ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t71 , NeDsMethodOutput *
t72 ) { PmRealVector out ; real_T t0 [ 606 ] ; real_T
N_Channel_MOSFET1_capacitor_GD_n_v ; real_T
N_Channel_MOSFET1_capacitor_GD_p_v ; real_T
N_Channel_MOSFET1_capacitor_GS_n_v ; real_T
N_Channel_MOSFET2_capacitor_GD_n_v ; real_T
N_Channel_MOSFET2_capacitor_GD_p_v ; real_T
N_Channel_MOSFET2_capacitor_GS_n_v ; real_T
N_Channel_MOSFET3_capacitor_GD_n_v ; real_T
N_Channel_MOSFET3_capacitor_GD_p_v ; real_T
N_Channel_MOSFET3_capacitor_GS_n_v ; real_T
N_Channel_MOSFET4_capacitor_GD_n_v ; real_T
N_Channel_MOSFET4_capacitor_GD_p_v ; real_T
N_Channel_MOSFET4_capacitor_GS_n_v ; real_T
N_Channel_MOSFET5_capacitor_GD_n_v ; real_T
N_Channel_MOSFET5_capacitor_GD_p_v ; real_T
N_Channel_MOSFET5_capacitor_GS_n_v ; real_T
N_Channel_MOSFET6_capacitor_GD_n_v ; real_T
N_Channel_MOSFET6_capacitor_GD_p_v ; real_T
N_Channel_MOSFET6_capacitor_GS_n_v ; real_T
N_Channel_MOSFET7_capacitor_GD_n_v ; real_T
N_Channel_MOSFET7_capacitor_GD_p_v ; real_T
N_Channel_MOSFET7_capacitor_GS_n_v ; real_T
N_Channel_MOSFET8_capacitor_GD_n_v ; real_T
N_Channel_MOSFET8_capacitor_GD_p_v ; real_T
N_Channel_MOSFET8_capacitor_GS_n_v ; real_T
N_Channel_MOSFET8_drain_resistor_i ; real_T N_Channel_MOSFET_B_v ; real_T
N_Channel_MOSFET_D_v ; real_T N_Channel_MOSFET_G_v ; real_T
N_Channel_MOSFET_capacitor_GD_n_v ; real_T N_Channel_MOSFET_capacitor_GD_p_v
; real_T N_Channel_MOSFET_capacitor_GS_n_v ; real_T
P_Channel_MOSFET1_capacitor_GD_n_v ; real_T
P_Channel_MOSFET1_capacitor_GD_p_v ; real_T
P_Channel_MOSFET1_capacitor_GS_n_v ; real_T
P_Channel_MOSFET2_capacitor_GD_n_v ; real_T
P_Channel_MOSFET2_capacitor_GD_p_v ; real_T
P_Channel_MOSFET2_capacitor_GS_n_v ; real_T
P_Channel_MOSFET3_capacitor_GD_n_v ; real_T
P_Channel_MOSFET3_capacitor_GD_p_v ; real_T
P_Channel_MOSFET3_capacitor_GS_n_v ; real_T
P_Channel_MOSFET4_capacitor_GD_n_v ; real_T
P_Channel_MOSFET4_capacitor_GD_p_v ; real_T
P_Channel_MOSFET4_capacitor_GS_n_v ; real_T
P_Channel_MOSFET5_capacitor_GD_n_v ; real_T
P_Channel_MOSFET5_capacitor_GD_p_v ; real_T
P_Channel_MOSFET5_capacitor_GS_n_v ; real_T
P_Channel_MOSFET6_capacitor_GD_n_v ; real_T
P_Channel_MOSFET6_capacitor_GD_p_v ; real_T
P_Channel_MOSFET6_capacitor_GS_n_v ; real_T
P_Channel_MOSFET7_capacitor_GD_n_v ; real_T
P_Channel_MOSFET7_capacitor_GD_p_v ; real_T
P_Channel_MOSFET7_capacitor_GS_n_v ; real_T P_Channel_MOSFET_capacitor_GD_n_v
; real_T P_Channel_MOSFET_capacitor_GD_p_v ; real_T
P_Channel_MOSFET_capacitor_GS_n_v ; real_T Resistor1_i ; real_T X_idx_0 ;
real_T X_idx_1 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T X_idx_12 ; real_T
X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ; real_T X_idx_16 ; real_T
X_idx_17 ; real_T X_idx_18 ; real_T X_idx_19 ; real_T X_idx_2 ; real_T
X_idx_20 ; real_T X_idx_21 ; real_T X_idx_22 ; real_T X_idx_23 ; real_T
X_idx_24 ; real_T X_idx_25 ; real_T X_idx_26 ; real_T X_idx_27 ; real_T
X_idx_28 ; real_T X_idx_29 ; real_T X_idx_3 ; real_T X_idx_30 ; real_T
X_idx_31 ; real_T X_idx_32 ; real_T X_idx_33 ; real_T X_idx_34 ; real_T
X_idx_35 ; real_T X_idx_36 ; real_T X_idx_37 ; real_T X_idx_38 ; real_T
X_idx_39 ; real_T X_idx_4 ; real_T X_idx_40 ; real_T X_idx_41 ; real_T
X_idx_42 ; real_T X_idx_43 ; real_T X_idx_44 ; real_T X_idx_45 ; real_T
X_idx_46 ; real_T X_idx_47 ; real_T X_idx_48 ; real_T X_idx_49 ; real_T
X_idx_5 ; real_T X_idx_50 ; real_T X_idx_51 ; real_T X_idx_52 ; real_T
X_idx_53 ; real_T X_idx_54 ; real_T X_idx_55 ; real_T X_idx_56 ; real_T
X_idx_57 ; real_T X_idx_58 ; real_T X_idx_59 ; real_T X_idx_6 ; real_T
X_idx_60 ; real_T X_idx_61 ; real_T X_idx_62 ; real_T X_idx_63 ; real_T
X_idx_64 ; real_T X_idx_65 ; real_T X_idx_66 ; real_T X_idx_67 ; real_T
X_idx_68 ; real_T X_idx_69 ; real_T X_idx_7 ; real_T X_idx_70 ; real_T
X_idx_71 ; real_T X_idx_72 ; real_T X_idx_73 ; real_T X_idx_74 ; real_T
X_idx_75 ; real_T X_idx_76 ; real_T X_idx_8 ; real_T X_idx_9 ; real_T piece39
; real_T t1 ; real_T t10 ; real_T t11 ; real_T t12 ; real_T t13 ; real_T t14
; real_T t15 ; real_T t16 ; real_T t17 ; real_T t18 ; real_T t19 ; real_T t2
; real_T t20 ; real_T t21 ; real_T t22 ; real_T t23 ; real_T t24 ; real_T t25
; real_T t26 ; real_T t27 ; real_T t28 ; real_T t29 ; real_T t30 ; real_T t31
; real_T t32 ; real_T t33 ; real_T t34 ; real_T t35 ; real_T t37 ; real_T t38
; real_T t39 ; real_T t4 ; real_T t42 ; real_T t43 ; real_T t45 ; real_T t46
; real_T t47 ; real_T t49 ; real_T t5 ; real_T t50 ; real_T t51 ; real_T t53
; real_T t54 ; real_T t55 ; real_T t57 ; real_T t58 ; real_T t59 ; real_T t6
; real_T t61 ; real_T t62 ; real_T t63 ; real_T t65 ; real_T t66 ; real_T t67
; real_T t68 ; real_T t7 ; real_T t9 ; int32_T b ; X_idx_0 = t71 -> mX . mX [
0 ] ; X_idx_1 = t71 -> mX . mX [ 1 ] ; X_idx_2 = t71 -> mX . mX [ 2 ] ;
X_idx_3 = t71 -> mX . mX [ 3 ] ; X_idx_4 = t71 -> mX . mX [ 4 ] ; X_idx_5 =
t71 -> mX . mX [ 5 ] ; X_idx_6 = t71 -> mX . mX [ 6 ] ; X_idx_7 = t71 -> mX .
mX [ 7 ] ; X_idx_8 = t71 -> mX . mX [ 8 ] ; X_idx_9 = t71 -> mX . mX [ 9 ] ;
X_idx_10 = t71 -> mX . mX [ 10 ] ; X_idx_11 = t71 -> mX . mX [ 11 ] ;
X_idx_12 = t71 -> mX . mX [ 12 ] ; X_idx_13 = t71 -> mX . mX [ 13 ] ;
X_idx_14 = t71 -> mX . mX [ 14 ] ; X_idx_15 = t71 -> mX . mX [ 15 ] ;
X_idx_16 = t71 -> mX . mX [ 16 ] ; X_idx_17 = t71 -> mX . mX [ 17 ] ;
X_idx_18 = t71 -> mX . mX [ 18 ] ; X_idx_19 = t71 -> mX . mX [ 19 ] ;
X_idx_20 = t71 -> mX . mX [ 20 ] ; X_idx_21 = t71 -> mX . mX [ 21 ] ;
X_idx_22 = t71 -> mX . mX [ 22 ] ; X_idx_23 = t71 -> mX . mX [ 23 ] ;
X_idx_24 = t71 -> mX . mX [ 24 ] ; X_idx_25 = t71 -> mX . mX [ 25 ] ;
X_idx_26 = t71 -> mX . mX [ 26 ] ; X_idx_27 = t71 -> mX . mX [ 27 ] ;
X_idx_28 = t71 -> mX . mX [ 28 ] ; X_idx_29 = t71 -> mX . mX [ 29 ] ;
X_idx_30 = t71 -> mX . mX [ 30 ] ; X_idx_31 = t71 -> mX . mX [ 31 ] ;
X_idx_32 = t71 -> mX . mX [ 32 ] ; X_idx_33 = t71 -> mX . mX [ 33 ] ;
X_idx_34 = t71 -> mX . mX [ 34 ] ; X_idx_35 = t71 -> mX . mX [ 35 ] ;
X_idx_36 = t71 -> mX . mX [ 36 ] ; X_idx_37 = t71 -> mX . mX [ 37 ] ;
X_idx_38 = t71 -> mX . mX [ 38 ] ; X_idx_39 = t71 -> mX . mX [ 39 ] ;
X_idx_40 = t71 -> mX . mX [ 40 ] ; X_idx_41 = t71 -> mX . mX [ 41 ] ;
X_idx_42 = t71 -> mX . mX [ 42 ] ; X_idx_43 = t71 -> mX . mX [ 43 ] ;
X_idx_44 = t71 -> mX . mX [ 44 ] ; X_idx_45 = t71 -> mX . mX [ 45 ] ;
X_idx_46 = t71 -> mX . mX [ 46 ] ; X_idx_47 = t71 -> mX . mX [ 47 ] ;
X_idx_48 = t71 -> mX . mX [ 48 ] ; X_idx_49 = t71 -> mX . mX [ 49 ] ;
X_idx_50 = t71 -> mX . mX [ 50 ] ; X_idx_51 = t71 -> mX . mX [ 51 ] ;
X_idx_52 = t71 -> mX . mX [ 52 ] ; X_idx_53 = t71 -> mX . mX [ 53 ] ;
X_idx_54 = t71 -> mX . mX [ 54 ] ; X_idx_55 = t71 -> mX . mX [ 55 ] ;
X_idx_56 = t71 -> mX . mX [ 56 ] ; X_idx_57 = t71 -> mX . mX [ 57 ] ;
X_idx_58 = t71 -> mX . mX [ 58 ] ; X_idx_59 = t71 -> mX . mX [ 59 ] ;
X_idx_60 = t71 -> mX . mX [ 60 ] ; X_idx_61 = t71 -> mX . mX [ 61 ] ;
X_idx_62 = t71 -> mX . mX [ 62 ] ; X_idx_63 = t71 -> mX . mX [ 63 ] ;
X_idx_64 = t71 -> mX . mX [ 64 ] ; X_idx_65 = t71 -> mX . mX [ 65 ] ;
X_idx_66 = t71 -> mX . mX [ 66 ] ; X_idx_67 = t71 -> mX . mX [ 67 ] ;
X_idx_68 = t71 -> mX . mX [ 68 ] ; X_idx_69 = t71 -> mX . mX [ 69 ] ;
X_idx_70 = t71 -> mX . mX [ 70 ] ; X_idx_71 = t71 -> mX . mX [ 71 ] ;
X_idx_72 = t71 -> mX . mX [ 72 ] ; X_idx_73 = t71 -> mX . mX [ 73 ] ;
X_idx_74 = t71 -> mX . mX [ 74 ] ; X_idx_75 = t71 -> mX . mX [ 75 ] ;
X_idx_76 = t71 -> mX . mX [ 76 ] ; out = t72 -> mLOG ; N_Channel_MOSFET_B_v =
( ( ( - X_idx_0 + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) + X_idx_36 * -
0.001 ) + 15.0 ; N_Channel_MOSFET_D_v = ( ( ( ( ( ( ( - X_idx_1 + - X_idx_0 )
+ X_idx_37 * 0.01 ) + X_idx_38 * - 0.0001 ) + X_idx_34 * - 0.001 ) + X_idx_35
* 0.011 ) + X_idx_36 * - 0.001 ) + X_idx_2 ) + 15.0 ; N_Channel_MOSFET_G_v =
( ( ( ( ( ( - X_idx_0 + X_idx_37 * - 0.001 ) + X_idx_38 * - 0.0011 ) +
X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) + X_idx_2 )
+ 15.0 ; N_Channel_MOSFET_capacitor_GD_n_v = ( ( ( ( ( ( - X_idx_1 + -
X_idx_0 ) + X_idx_38 * - 0.0001 ) + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 )
+ X_idx_36 * - 0.001 ) + X_idx_2 ) + 15.0 ; N_Channel_MOSFET_capacitor_GD_p_v
= ( ( ( ( ( - X_idx_0 + X_idx_38 * - 0.0001 ) + X_idx_34 * - 0.001 ) +
X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) + X_idx_2 ) + 15.0 ;
N_Channel_MOSFET_capacitor_GS_n_v = ( ( ( ( - X_idx_0 + X_idx_38 * - 0.0001 )
+ X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) + 15.0 ;
t1 = - X_idx_37 + - X_idx_38 ; t2 = - X_idx_1 + X_idx_2 ; t4 = ( ( X_idx_40 *
0.0001 + X_idx_41 * 0.0011 ) + X_idx_3 ) + 15.0 ;
N_Channel_MOSFET1_capacitor_GD_n_v = ( ( ( X_idx_42 * - 0.01 + X_idx_40 *
0.0001 ) + X_idx_41 * 0.0011 ) + X_idx_3 ) + 15.0 ;
N_Channel_MOSFET1_capacitor_GD_p_v = ( ( ( ( X_idx_42 * - 0.01 + X_idx_40 *
0.0001 ) + X_idx_41 * 0.0011 ) + X_idx_4 ) + X_idx_3 ) + 15.0 ;
N_Channel_MOSFET1_capacitor_GS_n_v = ( ( ( ( ( - X_idx_5 + X_idx_42 * - 0.01
) + X_idx_40 * 0.0001 ) + X_idx_41 * 0.0011 ) + X_idx_4 ) + X_idx_3 ) + 15.0
; t5 = ( - X_idx_42 + X_idx_38 ) + X_idx_35 ; t6 = - X_idx_4 + X_idx_5 ; t7 =
- X_idx_38 + - X_idx_35 ; N_Channel_MOSFET2_capacitor_GD_n_v = ( ( ( -
X_idx_0 + X_idx_34 * - 0.001 ) + X_idx_35 * 0.001 ) + X_idx_36 * - 0.001 ) +
15.0 ; N_Channel_MOSFET2_capacitor_GD_p_v = ( ( X_idx_34 * - 0.001 + X_idx_35
* 0.001 ) + X_idx_36 * - 0.001 ) + 15.0 ; N_Channel_MOSFET2_capacitor_GS_n_v
= ( ( ( - X_idx_6 + X_idx_34 * - 0.001 ) + X_idx_35 * 0.001 ) + X_idx_36 * -
0.001 ) + 15.0 ; t9 = ( - X_idx_35 + X_idx_34 ) + X_idx_36 ; t10 = - X_idx_0
+ X_idx_6 ; t11 = - X_idx_34 + - X_idx_36 ; t12 = ( ( - X_idx_7 + X_idx_44 *
- 0.001 ) + X_idx_45 * 0.011 ) + X_idx_46 * - 0.001 ;
N_Channel_MOSFET3_capacitor_GD_n_v = ( ( - X_idx_7 + X_idx_44 * - 0.001 ) +
X_idx_45 * 0.001 ) + X_idx_46 * - 0.001 ; N_Channel_MOSFET3_capacitor_GD_p_v
= ( X_idx_44 * - 0.001 + X_idx_45 * 0.001 ) + X_idx_46 * - 0.001 ;
N_Channel_MOSFET3_capacitor_GS_n_v = ( ( - X_idx_8 + X_idx_44 * - 0.001 ) +
X_idx_45 * 0.001 ) + X_idx_46 * - 0.001 ; t13 = ( - X_idx_45 + X_idx_44 ) +
X_idx_46 ; t14 = - X_idx_7 + X_idx_8 ; t15 = - X_idx_44 + - X_idx_46 ; t16 =
( ( - X_idx_9 + X_idx_47 * - 0.001 ) + X_idx_48 * 0.011 ) + X_idx_49 * -
0.001 ; N_Channel_MOSFET4_capacitor_GD_n_v = ( ( - X_idx_9 + X_idx_47 * -
0.001 ) + X_idx_48 * 0.001 ) + X_idx_49 * - 0.001 ;
N_Channel_MOSFET4_capacitor_GD_p_v = ( X_idx_47 * - 0.001 + X_idx_48 * 0.001
) + X_idx_49 * - 0.001 ; N_Channel_MOSFET4_capacitor_GS_n_v = ( ( - X_idx_10
+ X_idx_47 * - 0.001 ) + X_idx_48 * 0.001 ) + X_idx_49 * - 0.001 ; t17 = ( -
X_idx_48 + X_idx_47 ) + X_idx_49 ; t18 = - X_idx_9 + X_idx_10 ; t19 = -
X_idx_47 + - X_idx_49 ; t20 = ( ( - X_idx_11 + X_idx_50 * - 0.001 ) +
X_idx_51 * 0.011 ) + X_idx_52 * - 0.001 ; N_Channel_MOSFET5_capacitor_GD_n_v
= ( ( - X_idx_11 + X_idx_50 * - 0.001 ) + X_idx_51 * 0.001 ) + X_idx_52 * -
0.001 ; N_Channel_MOSFET5_capacitor_GD_p_v = ( X_idx_50 * - 0.001 + X_idx_51
* 0.001 ) + X_idx_52 * - 0.001 ; N_Channel_MOSFET5_capacitor_GS_n_v = ( ( -
X_idx_12 + X_idx_50 * - 0.001 ) + X_idx_51 * 0.001 ) + X_idx_52 * - 0.001 ;
t21 = ( - X_idx_51 + X_idx_50 ) + X_idx_52 ; t22 = - X_idx_11 + X_idx_12 ;
t23 = - X_idx_50 + - X_idx_52 ; t24 = ( ( - X_idx_13 + X_idx_53 * - 0.001 ) +
X_idx_54 * 0.011 ) + X_idx_55 * - 0.001 ; N_Channel_MOSFET6_capacitor_GD_n_v
= ( ( - X_idx_13 + X_idx_53 * - 0.001 ) + X_idx_54 * 0.001 ) + X_idx_55 * -
0.001 ; N_Channel_MOSFET6_capacitor_GD_p_v = ( X_idx_53 * - 0.001 + X_idx_54
* 0.001 ) + X_idx_55 * - 0.001 ; N_Channel_MOSFET6_capacitor_GS_n_v = ( ( -
X_idx_14 + X_idx_53 * - 0.001 ) + X_idx_54 * 0.001 ) + X_idx_55 * - 0.001 ;
t25 = ( - X_idx_54 + X_idx_53 ) + X_idx_55 ; t26 = - X_idx_13 + X_idx_14 ;
t27 = - X_idx_53 + - X_idx_55 ; t28 = ( ( - X_idx_15 + X_idx_56 * - 0.001 ) +
X_idx_57 * 0.011 ) + X_idx_58 * - 0.001 ; N_Channel_MOSFET7_capacitor_GD_n_v
= ( ( - X_idx_15 + X_idx_56 * - 0.001 ) + X_idx_57 * 0.001 ) + X_idx_58 * -
0.001 ; N_Channel_MOSFET7_capacitor_GD_p_v = ( X_idx_56 * - 0.001 + X_idx_57
* 0.001 ) + X_idx_58 * - 0.001 ; N_Channel_MOSFET7_capacitor_GS_n_v = ( ( -
X_idx_16 + X_idx_56 * - 0.001 ) + X_idx_57 * 0.001 ) + X_idx_58 * - 0.001 ;
t29 = ( - X_idx_57 + X_idx_56 ) + X_idx_58 ; t30 = - X_idx_15 + X_idx_16 ;
t31 = - X_idx_56 + - X_idx_58 ; t32 = ( ( ( ( ( ( ( ( ( ( ( X_idx_2 * -
1.1E-5 + X_idx_0 * 1.1E-5 ) + - X_idx_17 ) + X_idx_37 * 0.011000010999999999
) + X_idx_38 * 0.0110000121 ) + X_idx_34 * 1.1E-8 ) + X_idx_35 * -
1.2099999999999998E-7 ) + X_idx_36 * 1.1E-8 ) + X_idx_59 * - 0.001 ) +
X_idx_60 * - 0.001 ) + X_idx_61 * - 0.011 ) + X_idx_62 * 1.1E-5 ) + -
0.000165 ; N_Channel_MOSFET8_capacitor_GD_n_v = ( ( ( ( ( ( ( ( ( ( ( X_idx_2
* - 1.0E-6 + X_idx_0 * 1.0E-6 ) + - X_idx_17 ) + X_idx_37 * 0.001000001 ) +
X_idx_38 * 0.0010000011 ) + X_idx_34 * 1.0E-9 ) + X_idx_35 * - 1.1E-8 ) +
X_idx_36 * 1.0E-9 ) + X_idx_59 * - 0.001 ) + X_idx_60 * - 0.001 ) + X_idx_61
* - 0.001 ) + X_idx_62 * 1.0E-6 ) + - 1.4999999999999999E-5 ;
N_Channel_MOSFET8_capacitor_GD_p_v = ( ( ( ( ( ( ( ( ( ( X_idx_2 * - 1.0E-6 +
X_idx_0 * 1.0E-6 ) + X_idx_37 * 0.001000001 ) + X_idx_38 * 0.0010000011 ) +
X_idx_34 * 1.0E-9 ) + X_idx_35 * - 1.1E-8 ) + X_idx_36 * 1.0E-9 ) + X_idx_59
* - 0.001 ) + X_idx_60 * - 0.001 ) + X_idx_61 * - 0.001 ) + X_idx_62 * 1.0E-6
) + - 1.4999999999999999E-5 ; N_Channel_MOSFET8_capacitor_GS_n_v = ( ( ( ( (
( ( ( ( ( ( X_idx_2 * - 1.0E-6 + X_idx_0 * 1.0E-6 ) + - X_idx_18 ) + X_idx_37
* 0.001000001 ) + X_idx_38 * 0.0010000011 ) + X_idx_34 * 1.0E-9 ) + X_idx_35
* - 1.1E-8 ) + X_idx_36 * 1.0E-9 ) + X_idx_59 * - 0.001 ) + X_idx_60 * -
0.001 ) + X_idx_61 * - 0.001 ) + X_idx_62 * 1.0E-6 ) + -
1.4999999999999999E-5 ; N_Channel_MOSFET8_drain_resistor_i = ( ( ( ( ( ( ( (
X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) + X_idx_37 * 1.000001 ) + X_idx_38 *
1.0000011 ) + X_idx_34 * 1.0E-6 ) + X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6
) + - X_idx_61 ) + X_idx_62 * 0.001 ) + - 0.015 ; t33 = ( ( ( ( ( ( ( ( ( (
X_idx_2 * 0.001 + X_idx_0 * - 0.001 ) + X_idx_37 * - 1.000001 ) + X_idx_38 *
- 1.0000011 ) + X_idx_34 * - 1.0E-6 ) + X_idx_35 * 1.1E-5 ) + X_idx_36 * -
1.0E-6 ) + X_idx_62 * - 0.001 ) + X_idx_59 ) + X_idx_60 ) + X_idx_61 ) +
0.015 ; t34 = - X_idx_17 + X_idx_18 ; t35 = - X_idx_59 + - X_idx_60 ;
P_Channel_MOSFET_capacitor_GD_n_v = ( ( ( X_idx_63 * - 0.01 + X_idx_40 *
0.0001 ) + X_idx_41 * 0.0011 ) + X_idx_3 ) + 15.0 ;
P_Channel_MOSFET_capacitor_GD_p_v = ( ( ( ( X_idx_63 * - 0.01 + X_idx_40 *
0.0001 ) + X_idx_41 * 0.0011 ) + X_idx_19 ) + X_idx_3 ) + 15.0 ;
P_Channel_MOSFET_capacitor_GS_n_v = ( ( ( ( ( - X_idx_20 + X_idx_63 * - 0.01
) + X_idx_40 * 0.0001 ) + X_idx_41 * 0.0011 ) + X_idx_19 ) + X_idx_3 ) + 15.0
; t37 = ( - X_idx_42 + - X_idx_63 ) + - X_idx_41 ; t38 = - X_idx_19 +
X_idx_20 ; t39 = X_idx_41 + X_idx_42 ; P_Channel_MOSFET1_capacitor_GD_n_v = (
( ( - X_idx_21 + X_idx_40 * 0.0001 ) + X_idx_41 * 0.00010000000000000005 ) +
X_idx_3 ) + 15.0 ; P_Channel_MOSFET1_capacitor_GD_p_v = ( ( X_idx_40 * 0.0001
+ X_idx_41 * 0.00010000000000000005 ) + X_idx_3 ) + 15.0 ;
P_Channel_MOSFET1_capacitor_GS_n_v = ( X_idx_40 * 0.0001 + X_idx_41 *
0.00010000000000000005 ) + 15.0 ; t42 = - X_idx_21 + X_idx_3 ; t43 = -
X_idx_40 + - X_idx_41 ; P_Channel_MOSFET2_capacitor_GD_n_v = ( ( ( ( ( ( ( (
( - X_idx_1 + - X_idx_0 ) + - X_idx_22 ) + X_idx_37 * 0.011 ) + X_idx_38 * -
0.0001 ) + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) +
X_idx_40 * 0.001 ) + X_idx_2 ) + 15.0 ; P_Channel_MOSFET2_capacitor_GD_p_v =
( ( ( ( ( ( ( ( - X_idx_1 + - X_idx_0 ) + X_idx_37 * 0.011 ) + X_idx_38 * -
0.0001 ) + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) +
X_idx_40 * 0.001 ) + X_idx_2 ) + 15.0 ; P_Channel_MOSFET2_capacitor_GS_n_v =
( ( ( ( ( ( ( ( ( - X_idx_1 + - X_idx_0 ) + - X_idx_23 ) + X_idx_37 * 0.011 )
+ X_idx_38 * - 0.0001 ) + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) +
X_idx_36 * - 0.001 ) + X_idx_40 * 0.001 ) + X_idx_2 ) + 15.0 ; t45 = -
X_idx_37 + - X_idx_40 ; t46 = - X_idx_22 + X_idx_23 ; t47 = ( - X_idx_66 +
X_idx_37 ) + X_idx_40 ; P_Channel_MOSFET3_capacitor_GD_n_v = ( ( ( ( -
X_idx_7 + - X_idx_24 ) + X_idx_44 * - 0.001 ) + X_idx_45 * 0.012 ) + X_idx_46
* - 0.001 ) + X_idx_66 * 0.001 ; P_Channel_MOSFET3_capacitor_GD_p_v = ( ( ( -
X_idx_7 + X_idx_44 * - 0.001 ) + X_idx_45 * 0.012 ) + X_idx_46 * - 0.001 ) +
X_idx_66 * 0.001 ; P_Channel_MOSFET3_capacitor_GS_n_v = ( ( ( ( - X_idx_7 + -
X_idx_25 ) + X_idx_44 * - 0.001 ) + X_idx_45 * 0.012 ) + X_idx_46 * - 0.001 )
+ X_idx_66 * 0.001 ; t49 = - X_idx_45 + - X_idx_66 ; t50 = - X_idx_24 +
X_idx_25 ; t51 = ( - X_idx_68 + X_idx_45 ) + X_idx_66 ;
P_Channel_MOSFET4_capacitor_GD_n_v = ( ( ( ( - X_idx_9 + - X_idx_26 ) +
X_idx_47 * - 0.001 ) + X_idx_48 * 0.012 ) + X_idx_49 * - 0.001 ) + X_idx_68 *
0.001 ; P_Channel_MOSFET4_capacitor_GD_p_v = ( ( ( - X_idx_9 + X_idx_47 * -
0.001 ) + X_idx_48 * 0.012 ) + X_idx_49 * - 0.001 ) + X_idx_68 * 0.001 ;
P_Channel_MOSFET4_capacitor_GS_n_v = ( ( ( ( - X_idx_9 + - X_idx_27 ) +
X_idx_47 * - 0.001 ) + X_idx_48 * 0.012 ) + X_idx_49 * - 0.001 ) + X_idx_68 *
0.001 ; t53 = - X_idx_48 + - X_idx_68 ; t54 = - X_idx_26 + X_idx_27 ; t55 = (
- X_idx_70 + X_idx_48 ) + X_idx_68 ; P_Channel_MOSFET5_capacitor_GD_n_v = ( (
( ( - X_idx_11 + - X_idx_28 ) + X_idx_50 * - 0.001 ) + X_idx_51 * 0.012 ) +
X_idx_52 * - 0.001 ) + X_idx_70 * 0.001 ; P_Channel_MOSFET5_capacitor_GD_p_v
= ( ( ( - X_idx_11 + X_idx_50 * - 0.001 ) + X_idx_51 * 0.012 ) + X_idx_52 * -
0.001 ) + X_idx_70 * 0.001 ; P_Channel_MOSFET5_capacitor_GS_n_v = ( ( ( ( -
X_idx_11 + - X_idx_29 ) + X_idx_50 * - 0.001 ) + X_idx_51 * 0.012 ) +
X_idx_52 * - 0.001 ) + X_idx_70 * 0.001 ; t57 = - X_idx_51 + - X_idx_70 ; t58
= - X_idx_28 + X_idx_29 ; t59 = ( - X_idx_72 + X_idx_51 ) + X_idx_70 ;
P_Channel_MOSFET6_capacitor_GD_n_v = ( ( ( ( - X_idx_13 + - X_idx_30 ) +
X_idx_53 * - 0.001 ) + X_idx_54 * 0.012 ) + X_idx_55 * - 0.001 ) + X_idx_72 *
0.001 ; P_Channel_MOSFET6_capacitor_GD_p_v = ( ( ( - X_idx_13 + X_idx_53 * -
0.001 ) + X_idx_54 * 0.012 ) + X_idx_55 * - 0.001 ) + X_idx_72 * 0.001 ;
P_Channel_MOSFET6_capacitor_GS_n_v = ( ( ( ( - X_idx_13 + - X_idx_31 ) +
X_idx_53 * - 0.001 ) + X_idx_54 * 0.012 ) + X_idx_55 * - 0.001 ) + X_idx_72 *
0.001 ; t61 = - X_idx_54 + - X_idx_72 ; t62 = - X_idx_30 + X_idx_31 ; t63 = (
- X_idx_74 + X_idx_54 ) + X_idx_72 ; P_Channel_MOSFET7_capacitor_GD_n_v = ( (
( ( - X_idx_15 + - X_idx_32 ) + X_idx_56 * - 0.001 ) + X_idx_57 * 0.012 ) +
X_idx_58 * - 0.001 ) + X_idx_74 * 0.001 ; P_Channel_MOSFET7_capacitor_GD_p_v
= ( ( ( - X_idx_15 + X_idx_56 * - 0.001 ) + X_idx_57 * 0.012 ) + X_idx_58 * -
0.001 ) + X_idx_74 * 0.001 ; P_Channel_MOSFET7_capacitor_GS_n_v = ( ( ( ( -
X_idx_15 + - X_idx_33 ) + X_idx_56 * - 0.001 ) + X_idx_57 * 0.012 ) +
X_idx_58 * - 0.001 ) + X_idx_74 * 0.001 ; t65 = - X_idx_57 + - X_idx_74 ; t66
= - X_idx_32 + X_idx_33 ; t67 = ( - X_idx_61 + X_idx_57 ) + X_idx_74 ; t68 =
( ( ( ( ( ( ( X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) + X_idx_37 *
9.9999999991773336E-7 ) + X_idx_38 * 1.0999999999177335E-6 ) + X_idx_34 *
1.0E-6 ) + X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6 ) + X_idx_62 * 0.001 ) +
- 0.015 ; Resistor1_i = ( ( ( ( ( ( ( X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) +
X_idx_37 * 1.000001 ) + X_idx_38 * 1.0000011 ) + X_idx_34 * 1.0E-6 ) +
X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6 ) + X_idx_62 * 0.001 ) + - 0.015 ;
piece39 = ( ( ( ( ( ( X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) + X_idx_37 *
9.9999999991773336E-7 ) + X_idx_38 * 1.0999999999177335E-6 ) + X_idx_34 *
1.0E-6 ) + X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6 ) + X_idx_62 * 0.001 ;
t0 [ 0ULL ] = N_Channel_MOSFET_B_v ; t0 [ 1ULL ] = N_Channel_MOSFET_D_v ; t0
[ 2ULL ] = N_Channel_MOSFET_G_v ; t0 [ 3ULL ] = N_Channel_MOSFET_B_v ; t0 [
4ULL ] = - X_idx_37 + X_idx_39 ; t0 [ 5ULL ] =
N_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 6ULL ] =
N_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 7ULL ] = X_idx_1 ; t0 [ 8ULL ] =
X_idx_1 ; t0 [ 9ULL ] = 0.0 ; t0 [ 10ULL ] = - X_idx_39 + - X_idx_38 ; t0 [
11ULL ] = N_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 12ULL ] =
N_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 13ULL ] = X_idx_2 ; t0 [ 14ULL ] =
X_idx_2 ; t0 [ 15ULL ] = 0.0 ; t0 [ 16ULL ] = X_idx_37 ; t0 [ 17ULL ] =
N_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 18ULL ] = N_Channel_MOSFET_D_v ; t0
[ 19ULL ] = X_idx_37 * X_idx_37 * 1.0E-5 * 1000.0 ; t0 [ 20ULL ] = X_idx_37 *
0.01 ; t0 [ 21ULL ] = t1 ; t0 [ 22ULL ] = N_Channel_MOSFET_capacitor_GD_p_v ;
t0 [ 23ULL ] = N_Channel_MOSFET_G_v ; t0 [ 24ULL ] = t1 * t1 * 1.0E-6 *
1000.0 ; t0 [ 25ULL ] = t1 * 0.001 ; t0 [ 26ULL ] =
N_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 27ULL ] =
N_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 28ULL ] =
N_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 29ULL ] = X_idx_39 ; t0 [ 30ULL ] =
X_idx_39 * t2 * 0.001 * 1000.0 ; t0 [ 31ULL ] = t2 ; t0 [ 32ULL ] = X_idx_2 ;
t0 [ 33ULL ] = X_idx_38 ; t0 [ 34ULL ] = N_Channel_MOSFET_capacitor_GS_n_v ;
t0 [ 35ULL ] = N_Channel_MOSFET_B_v ; t0 [ 36ULL ] = X_idx_38 * X_idx_38 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 37ULL ] = X_idx_38 * 0.0001 ; t0 [
38ULL ] = N_Channel_MOSFET_B_v ; t0 [ 39ULL ] = t4 ; t0 [ 40ULL ] =
N_Channel_MOSFET_B_v ; t0 [ 41ULL ] = - X_idx_42 + X_idx_43 ; t0 [ 42ULL ] =
N_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 43ULL ] =
N_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 44ULL ] = X_idx_4 ; t0 [ 45ULL ] =
X_idx_4 ; t0 [ 46ULL ] = 0.0 ; t0 [ 47ULL ] = ( - X_idx_43 + X_idx_38 ) +
X_idx_35 ; t0 [ 48ULL ] = N_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 49ULL ] =
N_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 50ULL ] = X_idx_5 ; t0 [ 51ULL ] =
X_idx_5 ; t0 [ 52ULL ] = 0.0 ; t0 [ 53ULL ] = X_idx_42 ; t0 [ 54ULL ] =
N_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 55ULL ] = t4 ; t0 [ 56ULL ] =
X_idx_42 * X_idx_42 * 1.0E-5 * 1000.0 ; t0 [ 57ULL ] = X_idx_42 * 0.01 ; t0 [
58ULL ] = t5 ; t0 [ 59ULL ] = N_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 60ULL
] = t5 * t5 * 1.0E-6 * 1000.0 ; t0 [ 61ULL ] = t5 * 0.001 ; t0 [ 62ULL ] =
N_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 63ULL ] =
N_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 64ULL ] =
N_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 65ULL ] = X_idx_43 ; t0 [ 66ULL ] =
X_idx_43 * t6 * 0.001 * 1000.0 ; t0 [ 67ULL ] = t6 ; t0 [ 68ULL ] = X_idx_5 ;
t0 [ 69ULL ] = t7 ; t0 [ 70ULL ] = N_Channel_MOSFET1_capacitor_GS_n_v ; t0 [
71ULL ] = N_Channel_MOSFET_B_v ; t0 [ 72ULL ] = t7 * t7 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 73ULL ] = t7 * 0.0001 ; t0 [ 74ULL ] =
N_Channel_MOSFET_B_v ; t0 [ 75ULL ] = - X_idx_35 + X_idx_36 ; t0 [ 76ULL ] =
N_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 77ULL ] =
N_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 78ULL ] = X_idx_0 ; t0 [ 79ULL ] =
X_idx_0 ; t0 [ 80ULL ] = 0.0 ; t0 [ 81ULL ] = X_idx_34 ; t0 [ 82ULL ] =
N_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 83ULL ] =
N_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 84ULL ] = X_idx_6 ; t0 [ 85ULL ] =
X_idx_6 ; t0 [ 86ULL ] = 0.0 ; t0 [ 87ULL ] = X_idx_35 ; t0 [ 88ULL ] =
N_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 89ULL ] = N_Channel_MOSFET_B_v ; t0
[ 90ULL ] = X_idx_35 * X_idx_35 * 1.0E-5 * 1000.0 ; t0 [ 91ULL ] = X_idx_35 *
0.01 ; t0 [ 92ULL ] = t9 ; t0 [ 93ULL ] = N_Channel_MOSFET2_capacitor_GD_p_v
; t0 [ 94ULL ] = t9 * t9 * 1.0E-6 * 1000.0 ; t0 [ 95ULL ] = t9 * 0.001 ; t0 [
96ULL ] = N_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 97ULL ] =
N_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 98ULL ] =
N_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 99ULL ] = X_idx_36 ; t0 [ 100ULL ]
= X_idx_36 * t10 * 0.001 * 1000.0 ; t0 [ 101ULL ] = t10 ; t0 [ 102ULL ] =
X_idx_6 ; t0 [ 103ULL ] = t11 ; t0 [ 104ULL ] =
N_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 105ULL ] = t11 * t11 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 106ULL ] = t11 * 0.0001 ; t0 [ 107ULL ]
= t12 ; t0 [ 108ULL ] = - X_idx_45 + X_idx_46 ; t0 [ 109ULL ] =
N_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 110ULL ] =
N_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 111ULL ] = X_idx_7 ; t0 [ 112ULL ]
= X_idx_7 ; t0 [ 113ULL ] = 0.0 ; t0 [ 114ULL ] = X_idx_44 ; t0 [ 115ULL ] =
N_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 116ULL ] =
N_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 117ULL ] = X_idx_8 ; t0 [ 118ULL ]
= X_idx_8 ; t0 [ 119ULL ] = 0.0 ; t0 [ 120ULL ] = X_idx_45 ; t0 [ 121ULL ] =
N_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 122ULL ] = t12 ; t0 [ 123ULL ] =
X_idx_45 * X_idx_45 * 1.0E-5 * 1000.0 ; t0 [ 124ULL ] = X_idx_45 * 0.01 ; t0
[ 125ULL ] = t13 ; t0 [ 126ULL ] = N_Channel_MOSFET3_capacitor_GD_p_v ; t0 [
127ULL ] = t13 * t13 * 1.0E-6 * 1000.0 ; t0 [ 128ULL ] = t13 * 0.001 ; t0 [
129ULL ] = N_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 130ULL ] =
N_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 131ULL ] =
N_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 132ULL ] = X_idx_46 ; t0 [ 133ULL ]
= X_idx_46 * t14 * 0.001 * 1000.0 ; t0 [ 134ULL ] = t14 ; t0 [ 135ULL ] =
X_idx_8 ; t0 [ 136ULL ] = t15 ; t0 [ 137ULL ] =
N_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 138ULL ] = t15 * t15 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 139ULL ] = t15 * 0.0001 ; t0 [ 140ULL ]
= t16 ; t0 [ 141ULL ] = - X_idx_48 + X_idx_49 ; t0 [ 142ULL ] =
N_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 143ULL ] =
N_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 144ULL ] = X_idx_9 ; t0 [ 145ULL ]
= X_idx_9 ; t0 [ 146ULL ] = 0.0 ; t0 [ 147ULL ] = X_idx_47 ; t0 [ 148ULL ] =
N_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 149ULL ] =
N_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 150ULL ] = X_idx_10 ; t0 [ 151ULL ]
= X_idx_10 ; t0 [ 152ULL ] = 0.0 ; t0 [ 153ULL ] = X_idx_48 ; t0 [ 154ULL ] =
N_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 155ULL ] = t16 ; t0 [ 156ULL ] =
X_idx_48 * X_idx_48 * 1.0E-5 * 1000.0 ; t0 [ 157ULL ] = X_idx_48 * 0.01 ; t0
[ 158ULL ] = t17 ; t0 [ 159ULL ] = N_Channel_MOSFET4_capacitor_GD_p_v ; t0 [
160ULL ] = t17 * t17 * 1.0E-6 * 1000.0 ; t0 [ 161ULL ] = t17 * 0.001 ; t0 [
162ULL ] = N_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 163ULL ] =
N_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 164ULL ] =
N_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 165ULL ] = X_idx_49 ; t0 [ 166ULL ]
= X_idx_49 * t18 * 0.001 * 1000.0 ; t0 [ 167ULL ] = t18 ; t0 [ 168ULL ] =
X_idx_10 ; t0 [ 169ULL ] = t19 ; t0 [ 170ULL ] =
N_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 171ULL ] = t19 * t19 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 172ULL ] = t19 * 0.0001 ; t0 [ 173ULL ]
= t20 ; t0 [ 174ULL ] = - X_idx_51 + X_idx_52 ; t0 [ 175ULL ] =
N_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 176ULL ] =
N_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 177ULL ] = X_idx_11 ; t0 [ 178ULL ]
= X_idx_11 ; t0 [ 179ULL ] = 0.0 ; t0 [ 180ULL ] = X_idx_50 ; t0 [ 181ULL ] =
N_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 182ULL ] =
N_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 183ULL ] = X_idx_12 ; t0 [ 184ULL ]
= X_idx_12 ; t0 [ 185ULL ] = 0.0 ; t0 [ 186ULL ] = X_idx_51 ; t0 [ 187ULL ] =
N_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 188ULL ] = t20 ; t0 [ 189ULL ] =
X_idx_51 * X_idx_51 * 1.0E-5 * 1000.0 ; t0 [ 190ULL ] = X_idx_51 * 0.01 ; t0
[ 191ULL ] = t21 ; t0 [ 192ULL ] = N_Channel_MOSFET5_capacitor_GD_p_v ; t0 [
193ULL ] = t21 * t21 * 1.0E-6 * 1000.0 ; t0 [ 194ULL ] = t21 * 0.001 ; t0 [
195ULL ] = N_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 196ULL ] =
N_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 197ULL ] =
N_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 198ULL ] = X_idx_52 ; t0 [ 199ULL ]
= X_idx_52 * t22 * 0.001 * 1000.0 ; t0 [ 200ULL ] = t22 ; t0 [ 201ULL ] =
X_idx_12 ; t0 [ 202ULL ] = t23 ; t0 [ 203ULL ] =
N_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 204ULL ] = t23 * t23 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 205ULL ] = t23 * 0.0001 ; t0 [ 206ULL ]
= t24 ; t0 [ 207ULL ] = - X_idx_54 + X_idx_55 ; t0 [ 208ULL ] =
N_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 209ULL ] =
N_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 210ULL ] = X_idx_13 ; t0 [ 211ULL ]
= X_idx_13 ; t0 [ 212ULL ] = 0.0 ; t0 [ 213ULL ] = X_idx_53 ; t0 [ 214ULL ] =
N_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 215ULL ] =
N_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 216ULL ] = X_idx_14 ; t0 [ 217ULL ]
= X_idx_14 ; t0 [ 218ULL ] = 0.0 ; t0 [ 219ULL ] = X_idx_54 ; t0 [ 220ULL ] =
N_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 221ULL ] = t24 ; t0 [ 222ULL ] =
X_idx_54 * X_idx_54 * 1.0E-5 * 1000.0 ; t0 [ 223ULL ] = X_idx_54 * 0.01 ; t0
[ 224ULL ] = t25 ; t0 [ 225ULL ] = N_Channel_MOSFET6_capacitor_GD_p_v ; t0 [
226ULL ] = t25 * t25 * 1.0E-6 * 1000.0 ; t0 [ 227ULL ] = t25 * 0.001 ; t0 [
228ULL ] = N_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 229ULL ] =
N_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 230ULL ] =
N_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 231ULL ] = X_idx_55 ; t0 [ 232ULL ]
= X_idx_55 * t26 * 0.001 * 1000.0 ; t0 [ 233ULL ] = t26 ; t0 [ 234ULL ] =
X_idx_14 ; t0 [ 235ULL ] = t27 ; t0 [ 236ULL ] =
N_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 237ULL ] = t27 * t27 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 238ULL ] = t27 * 0.0001 ; t0 [ 239ULL ]
= t28 ; t0 [ 240ULL ] = - X_idx_57 + X_idx_58 ; t0 [ 241ULL ] =
N_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 242ULL ] =
N_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 243ULL ] = X_idx_15 ; t0 [ 244ULL ]
= X_idx_15 ; t0 [ 245ULL ] = 0.0 ; t0 [ 246ULL ] = X_idx_56 ; t0 [ 247ULL ] =
N_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 248ULL ] =
N_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 249ULL ] = X_idx_16 ; t0 [ 250ULL ]
= X_idx_16 ; t0 [ 251ULL ] = 0.0 ; t0 [ 252ULL ] = X_idx_57 ; t0 [ 253ULL ] =
N_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 254ULL ] = t28 ; t0 [ 255ULL ] =
X_idx_57 * X_idx_57 * 1.0E-5 * 1000.0 ; t0 [ 256ULL ] = X_idx_57 * 0.01 ; t0
[ 257ULL ] = t29 ; t0 [ 258ULL ] = N_Channel_MOSFET7_capacitor_GD_p_v ; t0 [
259ULL ] = t29 * t29 * 1.0E-6 * 1000.0 ; t0 [ 260ULL ] = t29 * 0.001 ; t0 [
261ULL ] = N_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 262ULL ] =
N_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 263ULL ] =
N_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 264ULL ] = X_idx_58 ; t0 [ 265ULL ]
= X_idx_58 * t30 * 0.001 * 1000.0 ; t0 [ 266ULL ] = t30 ; t0 [ 267ULL ] =
X_idx_16 ; t0 [ 268ULL ] = t31 ; t0 [ 269ULL ] =
N_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 270ULL ] = t31 * t31 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 271ULL ] = t31 * 0.0001 ; t0 [ 272ULL ]
= t32 ; t0 [ 273ULL ] = 0.015 + ( ( ( ( ( ( ( ( ( X_idx_2 * 0.001 + X_idx_0 *
- 0.001 ) + X_idx_37 * - 1.000001 ) + X_idx_38 * - 1.0000011 ) + X_idx_34 * -
1.0E-6 ) + X_idx_35 * 1.1E-5 ) + X_idx_36 * - 1.0E-6 ) + X_idx_62 * - 0.001 )
+ X_idx_60 ) + X_idx_61 ) ; t0 [ 274ULL ] =
N_Channel_MOSFET8_capacitor_GD_n_v ; t0 [ 275ULL ] =
N_Channel_MOSFET8_capacitor_GD_p_v ; t0 [ 276ULL ] = X_idx_17 ; t0 [ 277ULL ]
= X_idx_17 ; t0 [ 278ULL ] = 0.0 ; t0 [ 279ULL ] = X_idx_59 ; t0 [ 280ULL ] =
N_Channel_MOSFET8_capacitor_GS_n_v ; t0 [ 281ULL ] =
N_Channel_MOSFET8_capacitor_GD_p_v ; t0 [ 282ULL ] = X_idx_18 ; t0 [ 283ULL ]
= X_idx_18 ; t0 [ 284ULL ] = 0.0 ; t0 [ 285ULL ] = - 0.015 + ( ( ( ( ( ( ( (
X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) + X_idx_37 * 1.000001 ) + X_idx_38 *
1.0000011 ) + X_idx_34 * 1.0E-6 ) + X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6
) + - X_idx_61 ) + X_idx_62 * 0.001 ) ; t0 [ 286ULL ] =
N_Channel_MOSFET8_capacitor_GD_n_v ; t0 [ 287ULL ] = t32 ; t0 [ 288ULL ] =
N_Channel_MOSFET8_drain_resistor_i * N_Channel_MOSFET8_drain_resistor_i *
1.0E-5 * 1000.0 ; t0 [ 289ULL ] = N_Channel_MOSFET8_drain_resistor_i * 0.01 ;
t0 [ 290ULL ] = 0.015 + ( ( ( ( ( ( ( ( ( ( X_idx_2 * 0.001 + X_idx_0 * -
0.001 ) + X_idx_37 * - 1.000001 ) + X_idx_38 * - 1.0000011 ) + X_idx_34 * -
1.0E-6 ) + X_idx_35 * 1.1E-5 ) + X_idx_36 * - 1.0E-6 ) + X_idx_62 * - 0.001 )
+ X_idx_59 ) + X_idx_60 ) + X_idx_61 ) ; t0 [ 291ULL ] =
N_Channel_MOSFET8_capacitor_GD_p_v ; t0 [ 292ULL ] = t33 * t33 * 1.0E-6 *
1000.0 ; t0 [ 293ULL ] = t33 * 0.001 ; t0 [ 294ULL ] =
N_Channel_MOSFET8_capacitor_GD_n_v ; t0 [ 295ULL ] =
N_Channel_MOSFET8_capacitor_GD_p_v ; t0 [ 296ULL ] =
N_Channel_MOSFET8_capacitor_GS_n_v ; t0 [ 297ULL ] = X_idx_60 ; t0 [ 298ULL ]
= X_idx_60 * t34 * 0.001 * 1000.0 ; t0 [ 299ULL ] = t34 ; t0 [ 300ULL ] =
X_idx_18 ; t0 [ 301ULL ] = t35 ; t0 [ 302ULL ] =
N_Channel_MOSFET8_capacitor_GS_n_v ; t0 [ 303ULL ] = t35 * t35 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 304ULL ] = t35 * 0.0001 ; t0 [ 305ULL ]
= t4 ; t0 [ 306ULL ] = t4 ; t0 [ 307ULL ] = - X_idx_63 + X_idx_64 ; t0 [
308ULL ] = P_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 309ULL ] =
P_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 310ULL ] = X_idx_19 ; t0 [ 311ULL ]
= X_idx_19 ; t0 [ 312ULL ] = 0.0 ; t0 [ 313ULL ] = ( - X_idx_42 + - X_idx_64
) + - X_idx_41 ; t0 [ 314ULL ] = P_Channel_MOSFET_capacitor_GS_n_v ; t0 [
315ULL ] = P_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 316ULL ] = X_idx_20 ; t0
[ 317ULL ] = X_idx_20 ; t0 [ 318ULL ] = 0.0 ; t0 [ 319ULL ] = X_idx_63 ; t0 [
320ULL ] = P_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 321ULL ] = t4 ; t0 [
322ULL ] = X_idx_63 * X_idx_63 * 1.0E-5 * 1000.0 ; t0 [ 323ULL ] = X_idx_63 *
0.01 ; t0 [ 324ULL ] = t37 ; t0 [ 325ULL ] =
P_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 326ULL ] = t4 ; t0 [ 327ULL ] = t37
* t37 * 1.0E-6 * 1000.0 ; t0 [ 328ULL ] = t37 * 0.001 ; t0 [ 329ULL ] =
P_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 330ULL ] =
P_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 331ULL ] =
P_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 332ULL ] = X_idx_64 ; t0 [ 333ULL ]
= X_idx_64 * t38 * 0.001 * 1000.0 ; t0 [ 334ULL ] = t38 ; t0 [ 335ULL ] =
X_idx_20 ; t0 [ 336ULL ] = t39 ; t0 [ 337ULL ] =
P_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 338ULL ] = t39 * t39 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 339ULL ] = t39 * 0.0001 ; t0 [ 340ULL ]
= N_Channel_MOSFET_D_v ; t0 [ 341ULL ] = t4 ; t0 [ 342ULL ] = - X_idx_40 +
X_idx_65 ; t0 [ 343ULL ] = P_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 344ULL ]
= P_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 345ULL ] = X_idx_21 ; t0 [ 346ULL
] = X_idx_21 ; t0 [ 347ULL ] = 0.0 ; t0 [ 348ULL ] = ( - X_idx_65 + X_idx_40
) + X_idx_41 ; t0 [ 349ULL ] = P_Channel_MOSFET1_capacitor_GS_n_v ; t0 [
350ULL ] = P_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 351ULL ] = X_idx_3 ; t0
[ 352ULL ] = X_idx_3 ; t0 [ 353ULL ] = 0.0 ; t0 [ 354ULL ] = X_idx_40 ; t0 [
355ULL ] = P_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 356ULL ] =
N_Channel_MOSFET_D_v ; t0 [ 357ULL ] = X_idx_40 * X_idx_40 * 1.0E-5 * 1000.0
; t0 [ 358ULL ] = X_idx_40 * 0.01 ; t0 [ 359ULL ] = X_idx_41 ; t0 [ 360ULL ]
= P_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 361ULL ] = t4 ; t0 [ 362ULL ] =
X_idx_41 * X_idx_41 * 1.0E-6 * 1000.0 ; t0 [ 363ULL ] = X_idx_41 * 0.001 ; t0
[ 364ULL ] = P_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 365ULL ] =
P_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 366ULL ] =
P_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 367ULL ] = X_idx_65 ; t0 [ 368ULL ]
= X_idx_65 * t42 * 0.001 * 1000.0 ; t0 [ 369ULL ] = t42 ; t0 [ 370ULL ] =
X_idx_3 ; t0 [ 371ULL ] = t43 ; t0 [ 372ULL ] =
P_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 373ULL ] = t43 * t43 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 374ULL ] = t43 * 0.0001 ; t0 [ 375ULL ]
= t12 ; t0 [ 376ULL ] = N_Channel_MOSFET_D_v ; t0 [ 377ULL ] = - X_idx_66 +
X_idx_67 ; t0 [ 378ULL ] = P_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 379ULL ]
= P_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 380ULL ] = X_idx_22 ; t0 [ 381ULL
] = X_idx_22 ; t0 [ 382ULL ] = 0.0 ; t0 [ 383ULL ] = ( ( - X_idx_37 + -
X_idx_40 ) + - X_idx_67 ) + X_idx_66 ; t0 [ 384ULL ] =
P_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 385ULL ] =
P_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 386ULL ] = X_idx_23 ; t0 [ 387ULL ]
= X_idx_23 ; t0 [ 388ULL ] = 0.0 ; t0 [ 389ULL ] = X_idx_66 ; t0 [ 390ULL ] =
P_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 391ULL ] = t12 ; t0 [ 392ULL ] =
X_idx_66 * X_idx_66 * 1.0E-5 * 1000.0 ; t0 [ 393ULL ] = X_idx_66 * 0.01 ; t0
[ 394ULL ] = t45 ; t0 [ 395ULL ] = P_Channel_MOSFET2_capacitor_GD_p_v ; t0 [
396ULL ] = N_Channel_MOSFET_D_v ; t0 [ 397ULL ] = t45 * t45 * 1.0E-6 * 1000.0
; t0 [ 398ULL ] = t45 * 0.001 ; t0 [ 399ULL ] =
P_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 400ULL ] =
P_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 401ULL ] =
P_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 402ULL ] = X_idx_67 ; t0 [ 403ULL ]
= X_idx_67 * t46 * 0.001 * 1000.0 ; t0 [ 404ULL ] = t46 ; t0 [ 405ULL ] =
X_idx_23 ; t0 [ 406ULL ] = t47 ; t0 [ 407ULL ] =
P_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 408ULL ] = t47 * t47 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 409ULL ] = t47 * 0.0001 ; t0 [ 410ULL ]
= t16 ; t0 [ 411ULL ] = t12 ; t0 [ 412ULL ] = - X_idx_68 + X_idx_69 ; t0 [
413ULL ] = P_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 414ULL ] =
P_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 415ULL ] = X_idx_24 ; t0 [ 416ULL ]
= X_idx_24 ; t0 [ 417ULL ] = 0.0 ; t0 [ 418ULL ] = ( ( - X_idx_45 + -
X_idx_66 ) + - X_idx_69 ) + X_idx_68 ; t0 [ 419ULL ] =
P_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 420ULL ] =
P_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 421ULL ] = X_idx_25 ; t0 [ 422ULL ]
= X_idx_25 ; t0 [ 423ULL ] = 0.0 ; t0 [ 424ULL ] = X_idx_68 ; t0 [ 425ULL ] =
P_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 426ULL ] = t16 ; t0 [ 427ULL ] =
X_idx_68 * X_idx_68 * 1.0E-5 * 1000.0 ; t0 [ 428ULL ] = X_idx_68 * 0.01 ; t0
[ 429ULL ] = t49 ; t0 [ 430ULL ] = P_Channel_MOSFET3_capacitor_GD_p_v ; t0 [
431ULL ] = t12 ; t0 [ 432ULL ] = t49 * t49 * 1.0E-6 * 1000.0 ; t0 [ 433ULL ]
= t49 * 0.001 ; t0 [ 434ULL ] = P_Channel_MOSFET3_capacitor_GD_n_v ; t0 [
435ULL ] = P_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 436ULL ] =
P_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 437ULL ] = X_idx_69 ; t0 [ 438ULL ]
= X_idx_69 * t50 * 0.001 * 1000.0 ; t0 [ 439ULL ] = t50 ; t0 [ 440ULL ] =
X_idx_25 ; t0 [ 441ULL ] = t51 ; t0 [ 442ULL ] =
P_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 443ULL ] = t51 * t51 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 444ULL ] = t51 * 0.0001 ; t0 [ 445ULL ]
= t20 ; t0 [ 446ULL ] = t16 ; t0 [ 447ULL ] = - X_idx_70 + X_idx_71 ; t0 [
448ULL ] = P_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 449ULL ] =
P_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 450ULL ] = X_idx_26 ; t0 [ 451ULL ]
= X_idx_26 ; t0 [ 452ULL ] = 0.0 ; t0 [ 453ULL ] = ( ( - X_idx_48 + -
X_idx_68 ) + - X_idx_71 ) + X_idx_70 ; t0 [ 454ULL ] =
P_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 455ULL ] =
P_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 456ULL ] = X_idx_27 ; t0 [ 457ULL ]
= X_idx_27 ; t0 [ 458ULL ] = 0.0 ; t0 [ 459ULL ] = X_idx_70 ; t0 [ 460ULL ] =
P_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 461ULL ] = t20 ; t0 [ 462ULL ] =
X_idx_70 * X_idx_70 * 1.0E-5 * 1000.0 ; t0 [ 463ULL ] = X_idx_70 * 0.01 ; t0
[ 464ULL ] = t53 ; t0 [ 465ULL ] = P_Channel_MOSFET4_capacitor_GD_p_v ; t0 [
466ULL ] = t16 ; t0 [ 467ULL ] = t53 * t53 * 1.0E-6 * 1000.0 ; t0 [ 468ULL ]
= t53 * 0.001 ; t0 [ 469ULL ] = P_Channel_MOSFET4_capacitor_GD_n_v ; t0 [
470ULL ] = P_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 471ULL ] =
P_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 472ULL ] = X_idx_71 ; t0 [ 473ULL ]
= X_idx_71 * t54 * 0.001 * 1000.0 ; t0 [ 474ULL ] = t54 ; t0 [ 475ULL ] =
X_idx_27 ; t0 [ 476ULL ] = t55 ; t0 [ 477ULL ] =
P_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 478ULL ] = t55 * t55 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 479ULL ] = t55 * 0.0001 ; t0 [ 480ULL ]
= t24 ; t0 [ 481ULL ] = t20 ; t0 [ 482ULL ] = - X_idx_72 + X_idx_73 ; t0 [
483ULL ] = P_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 484ULL ] =
P_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 485ULL ] = X_idx_28 ; t0 [ 486ULL ]
= X_idx_28 ; t0 [ 487ULL ] = 0.0 ; t0 [ 488ULL ] = ( ( - X_idx_51 + -
X_idx_70 ) + - X_idx_73 ) + X_idx_72 ; t0 [ 489ULL ] =
P_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 490ULL ] =
P_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 491ULL ] = X_idx_29 ; t0 [ 492ULL ]
= X_idx_29 ; t0 [ 493ULL ] = 0.0 ; t0 [ 494ULL ] = X_idx_72 ; t0 [ 495ULL ] =
P_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 496ULL ] = t24 ; t0 [ 497ULL ] =
X_idx_72 * X_idx_72 * 1.0E-5 * 1000.0 ; t0 [ 498ULL ] = X_idx_72 * 0.01 ; t0
[ 499ULL ] = t57 ; t0 [ 500ULL ] = P_Channel_MOSFET5_capacitor_GD_p_v ; t0 [
501ULL ] = t20 ; t0 [ 502ULL ] = t57 * t57 * 1.0E-6 * 1000.0 ; t0 [ 503ULL ]
= t57 * 0.001 ; t0 [ 504ULL ] = P_Channel_MOSFET5_capacitor_GD_n_v ; t0 [
505ULL ] = P_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 506ULL ] =
P_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 507ULL ] = X_idx_73 ; t0 [ 508ULL ]
= X_idx_73 * t58 * 0.001 * 1000.0 ; t0 [ 509ULL ] = t58 ; t0 [ 510ULL ] =
X_idx_29 ; t0 [ 511ULL ] = t59 ; t0 [ 512ULL ] =
P_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 513ULL ] = t59 * t59 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 514ULL ] = t59 * 0.0001 ; t0 [ 515ULL ]
= t28 ; t0 [ 516ULL ] = t24 ; t0 [ 517ULL ] = - X_idx_74 + X_idx_75 ; t0 [
518ULL ] = P_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 519ULL ] =
P_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 520ULL ] = X_idx_30 ; t0 [ 521ULL ]
= X_idx_30 ; t0 [ 522ULL ] = 0.0 ; t0 [ 523ULL ] = ( ( - X_idx_54 + -
X_idx_72 ) + - X_idx_75 ) + X_idx_74 ; t0 [ 524ULL ] =
P_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 525ULL ] =
P_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 526ULL ] = X_idx_31 ; t0 [ 527ULL ]
= X_idx_31 ; t0 [ 528ULL ] = 0.0 ; t0 [ 529ULL ] = X_idx_74 ; t0 [ 530ULL ] =
P_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 531ULL ] = t28 ; t0 [ 532ULL ] =
X_idx_74 * X_idx_74 * 1.0E-5 * 1000.0 ; t0 [ 533ULL ] = X_idx_74 * 0.01 ; t0
[ 534ULL ] = t61 ; t0 [ 535ULL ] = P_Channel_MOSFET6_capacitor_GD_p_v ; t0 [
536ULL ] = t24 ; t0 [ 537ULL ] = t61 * t61 * 1.0E-6 * 1000.0 ; t0 [ 538ULL ]
= t61 * 0.001 ; t0 [ 539ULL ] = P_Channel_MOSFET6_capacitor_GD_n_v ; t0 [
540ULL ] = P_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 541ULL ] =
P_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 542ULL ] = X_idx_75 ; t0 [ 543ULL ]
= X_idx_75 * t62 * 0.001 * 1000.0 ; t0 [ 544ULL ] = t62 ; t0 [ 545ULL ] =
X_idx_31 ; t0 [ 546ULL ] = t63 ; t0 [ 547ULL ] =
P_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 548ULL ] = t63 * t63 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 549ULL ] = t63 * 0.0001 ; t0 [ 550ULL ]
= t32 ; t0 [ 551ULL ] = t28 ; t0 [ 552ULL ] = - X_idx_61 + X_idx_76 ; t0 [
553ULL ] = P_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 554ULL ] =
P_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 555ULL ] = X_idx_32 ; t0 [ 556ULL ]
= X_idx_32 ; t0 [ 557ULL ] = 0.0 ; t0 [ 558ULL ] = ( ( - X_idx_57 + -
X_idx_74 ) + - X_idx_76 ) + X_idx_61 ; t0 [ 559ULL ] =
P_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 560ULL ] =
P_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 561ULL ] = X_idx_33 ; t0 [ 562ULL ]
= X_idx_33 ; t0 [ 563ULL ] = 0.0 ; t0 [ 564ULL ] = X_idx_61 ; t0 [ 565ULL ] =
P_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 566ULL ] = t32 ; t0 [ 567ULL ] =
X_idx_61 * X_idx_61 * 1.0E-5 * 1000.0 ; t0 [ 568ULL ] = X_idx_61 * 0.01 ; t0
[ 569ULL ] = t65 ; t0 [ 570ULL ] = P_Channel_MOSFET7_capacitor_GD_p_v ; t0 [
571ULL ] = t28 ; t0 [ 572ULL ] = t65 * t65 * 1.0E-6 * 1000.0 ; t0 [ 573ULL ]
= t65 * 0.001 ; t0 [ 574ULL ] = P_Channel_MOSFET7_capacitor_GD_n_v ; t0 [
575ULL ] = P_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 576ULL ] =
P_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 577ULL ] = X_idx_76 ; t0 [ 578ULL ]
= X_idx_76 * t66 * 0.001 * 1000.0 ; t0 [ 579ULL ] = t66 ; t0 [ 580ULL ] =
X_idx_33 ; t0 [ 581ULL ] = t67 ; t0 [ 582ULL ] =
P_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 583ULL ] = t67 * t67 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 584ULL ] = t67 * 0.0001 ; t0 [ 585ULL ]
= - 0.015 + piece39 ; t0 [ 586ULL ] = N_Channel_MOSFET_G_v ; t0 [ 587ULL ] =
X_idx_62 ; t0 [ 588ULL ] = t68 * 1000.0 ; t0 [ 589ULL ] = t68 * t68 * 1000.0
; t0 [ 590ULL ] = - 0.015 + ( ( ( ( ( ( ( X_idx_2 * - 0.001 + X_idx_0 * 0.001
) + X_idx_37 * 1.000001 ) + X_idx_38 * 1.0000011 ) + X_idx_34 * 1.0E-6 ) +
X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6 ) + X_idx_62 * 0.001 ) ; t0 [
591ULL ] = t32 ; t0 [ 592ULL ] = N_Channel_MOSFET_G_v ; t0 [ 593ULL ] =
Resistor1_i * 10000.0 ; t0 [ 594ULL ] = Resistor1_i * Resistor1_i * 10000.0 ;
t0 [ 595ULL ] = X_idx_62 ; t0 [ 596ULL ] = X_idx_62 ; t0 [ 597ULL ] =
X_idx_62 ; t0 [ 598ULL ] = t32 ; t0 [ 599ULL ] = t32 ; t0 [ 600ULL ] = t32 ;
t0 [ 601ULL ] = ( ( ( ( ( ( ( ( ( - X_idx_37 + - X_idx_42 ) + - X_idx_34 ) +
- X_idx_36 ) + - X_idx_45 ) + - X_idx_48 ) + - X_idx_51 ) + - X_idx_54 ) + -
X_idx_57 ) + X_idx_35 ) + X_idx_61 ; t0 [ 602ULL ] = 0.015 + - piece39 ; t0 [
603ULL ] = X_idx_62 ; t0 [ 604ULL ] = X_idx_62 ; t0 [ 605ULL ] = ( ( ( ( ( (
( ( ( ( ( ( - X_idx_34 + - X_idx_36 ) + - X_idx_44 ) + - X_idx_46 ) + -
X_idx_47 ) + - X_idx_49 ) + - X_idx_50 ) + - X_idx_52 ) + - X_idx_53 ) + -
X_idx_55 ) + - X_idx_56 ) + - X_idx_58 ) + - X_idx_59 ) + - X_idx_60 ; for (
b = 0 ; b < 606 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) sys ; (
void ) t72 ; return 0 ; }
