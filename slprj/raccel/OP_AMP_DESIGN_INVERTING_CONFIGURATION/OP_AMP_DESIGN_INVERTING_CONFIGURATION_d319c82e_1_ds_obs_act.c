#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_act.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_act ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t71 , NeDsMethodOutput *
t72 ) { PmRealVector out ; real_T t0 [ 675 ] ; real_T
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
P_Channel_MOSFET_capacitor_GS_n_v ; real_T X_idx_0 ; real_T X_idx_1 ; real_T
X_idx_10 ; real_T X_idx_11 ; real_T X_idx_12 ; real_T X_idx_13 ; real_T
X_idx_14 ; real_T X_idx_15 ; real_T X_idx_16 ; real_T X_idx_17 ; real_T
X_idx_18 ; real_T X_idx_19 ; real_T X_idx_2 ; real_T X_idx_20 ; real_T
X_idx_21 ; real_T X_idx_22 ; real_T X_idx_23 ; real_T X_idx_24 ; real_T
X_idx_25 ; real_T X_idx_26 ; real_T X_idx_27 ; real_T X_idx_28 ; real_T
X_idx_29 ; real_T X_idx_3 ; real_T X_idx_30 ; real_T X_idx_31 ; real_T
X_idx_32 ; real_T X_idx_33 ; real_T X_idx_34 ; real_T X_idx_35 ; real_T
X_idx_36 ; real_T X_idx_37 ; real_T X_idx_38 ; real_T X_idx_39 ; real_T
X_idx_4 ; real_T X_idx_40 ; real_T X_idx_41 ; real_T X_idx_42 ; real_T
X_idx_43 ; real_T X_idx_44 ; real_T X_idx_45 ; real_T X_idx_46 ; real_T
X_idx_47 ; real_T X_idx_48 ; real_T X_idx_49 ; real_T X_idx_5 ; real_T
X_idx_50 ; real_T X_idx_51 ; real_T X_idx_52 ; real_T X_idx_53 ; real_T
X_idx_54 ; real_T X_idx_55 ; real_T X_idx_56 ; real_T X_idx_57 ; real_T
X_idx_58 ; real_T X_idx_59 ; real_T X_idx_6 ; real_T X_idx_60 ; real_T
X_idx_61 ; real_T X_idx_62 ; real_T X_idx_63 ; real_T X_idx_64 ; real_T
X_idx_65 ; real_T X_idx_66 ; real_T X_idx_67 ; real_T X_idx_68 ; real_T
X_idx_69 ; real_T X_idx_7 ; real_T X_idx_70 ; real_T X_idx_71 ; real_T
X_idx_72 ; real_T X_idx_73 ; real_T X_idx_74 ; real_T X_idx_75 ; real_T
X_idx_76 ; real_T X_idx_8 ; real_T X_idx_9 ; real_T piece39 ; real_T t1 ;
real_T t10 ; real_T t11 ; real_T t12 ; real_T t13 ; real_T t14 ; real_T t15 ;
real_T t16 ; real_T t17 ; real_T t18 ; real_T t19 ; real_T t2 ; real_T t20 ;
real_T t21 ; real_T t22 ; real_T t23 ; real_T t24 ; real_T t25 ; real_T t26 ;
real_T t27 ; real_T t28 ; real_T t29 ; real_T t30 ; real_T t31 ; real_T t32 ;
real_T t33 ; real_T t34 ; real_T t35 ; real_T t37 ; real_T t38 ; real_T t39 ;
real_T t4 ; real_T t42 ; real_T t43 ; real_T t45 ; real_T t46 ; real_T t47 ;
real_T t49 ; real_T t5 ; real_T t50 ; real_T t51 ; real_T t53 ; real_T t54 ;
real_T t55 ; real_T t57 ; real_T t58 ; real_T t59 ; real_T t6 ; real_T t61 ;
real_T t62 ; real_T t63 ; real_T t65 ; real_T t66 ; real_T t67 ; real_T t7 ;
real_T t9 ; int32_T b ; X_idx_0 = t71 -> mX . mX [ 0 ] ; X_idx_1 = t71 -> mX
. mX [ 1 ] ; X_idx_2 = t71 -> mX . mX [ 2 ] ; X_idx_3 = t71 -> mX . mX [ 3 ]
; X_idx_4 = t71 -> mX . mX [ 4 ] ; X_idx_5 = t71 -> mX . mX [ 5 ] ; X_idx_6 =
t71 -> mX . mX [ 6 ] ; X_idx_7 = t71 -> mX . mX [ 7 ] ; X_idx_8 = t71 -> mX .
mX [ 8 ] ; X_idx_9 = t71 -> mX . mX [ 9 ] ; X_idx_10 = t71 -> mX . mX [ 10 ]
; X_idx_11 = t71 -> mX . mX [ 11 ] ; X_idx_12 = t71 -> mX . mX [ 12 ] ;
X_idx_13 = t71 -> mX . mX [ 13 ] ; X_idx_14 = t71 -> mX . mX [ 14 ] ;
X_idx_15 = t71 -> mX . mX [ 15 ] ; X_idx_16 = t71 -> mX . mX [ 16 ] ;
X_idx_17 = t71 -> mX . mX [ 17 ] ; X_idx_18 = t71 -> mX . mX [ 18 ] ;
X_idx_19 = t71 -> mX . mX [ 19 ] ; X_idx_20 = t71 -> mX . mX [ 20 ] ;
X_idx_21 = t71 -> mX . mX [ 21 ] ; X_idx_22 = t71 -> mX . mX [ 22 ] ;
X_idx_23 = t71 -> mX . mX [ 23 ] ; X_idx_24 = t71 -> mX . mX [ 24 ] ;
X_idx_25 = t71 -> mX . mX [ 25 ] ; X_idx_26 = t71 -> mX . mX [ 26 ] ;
X_idx_27 = t71 -> mX . mX [ 27 ] ; X_idx_28 = t71 -> mX . mX [ 28 ] ;
X_idx_29 = t71 -> mX . mX [ 29 ] ; X_idx_30 = t71 -> mX . mX [ 30 ] ;
X_idx_31 = t71 -> mX . mX [ 31 ] ; X_idx_32 = t71 -> mX . mX [ 32 ] ;
X_idx_33 = t71 -> mX . mX [ 33 ] ; X_idx_34 = t71 -> mX . mX [ 34 ] ;
X_idx_35 = t71 -> mX . mX [ 35 ] ; X_idx_36 = t71 -> mX . mX [ 36 ] ;
X_idx_37 = t71 -> mX . mX [ 37 ] ; X_idx_38 = t71 -> mX . mX [ 38 ] ;
X_idx_39 = t71 -> mX . mX [ 39 ] ; X_idx_40 = t71 -> mX . mX [ 40 ] ;
X_idx_41 = t71 -> mX . mX [ 41 ] ; X_idx_42 = t71 -> mX . mX [ 42 ] ;
X_idx_43 = t71 -> mX . mX [ 43 ] ; X_idx_44 = t71 -> mX . mX [ 44 ] ;
X_idx_45 = t71 -> mX . mX [ 45 ] ; X_idx_46 = t71 -> mX . mX [ 46 ] ;
X_idx_47 = t71 -> mX . mX [ 47 ] ; X_idx_48 = t71 -> mX . mX [ 48 ] ;
X_idx_49 = t71 -> mX . mX [ 49 ] ; X_idx_50 = t71 -> mX . mX [ 50 ] ;
X_idx_51 = t71 -> mX . mX [ 51 ] ; X_idx_52 = t71 -> mX . mX [ 52 ] ;
X_idx_53 = t71 -> mX . mX [ 53 ] ; X_idx_54 = t71 -> mX . mX [ 54 ] ;
X_idx_55 = t71 -> mX . mX [ 55 ] ; X_idx_56 = t71 -> mX . mX [ 56 ] ;
X_idx_57 = t71 -> mX . mX [ 57 ] ; X_idx_58 = t71 -> mX . mX [ 58 ] ;
X_idx_59 = t71 -> mX . mX [ 59 ] ; X_idx_60 = t71 -> mX . mX [ 60 ] ;
X_idx_61 = t71 -> mX . mX [ 61 ] ; X_idx_62 = t71 -> mX . mX [ 62 ] ;
X_idx_63 = t71 -> mX . mX [ 63 ] ; X_idx_64 = t71 -> mX . mX [ 64 ] ;
X_idx_65 = t71 -> mX . mX [ 65 ] ; X_idx_66 = t71 -> mX . mX [ 66 ] ;
X_idx_67 = t71 -> mX . mX [ 67 ] ; X_idx_68 = t71 -> mX . mX [ 68 ] ;
X_idx_69 = t71 -> mX . mX [ 69 ] ; X_idx_70 = t71 -> mX . mX [ 70 ] ;
X_idx_71 = t71 -> mX . mX [ 71 ] ; X_idx_72 = t71 -> mX . mX [ 72 ] ;
X_idx_73 = t71 -> mX . mX [ 73 ] ; X_idx_74 = t71 -> mX . mX [ 74 ] ;
X_idx_75 = t71 -> mX . mX [ 75 ] ; X_idx_76 = t71 -> mX . mX [ 76 ] ; out =
t72 -> mOBS_ACT ; N_Channel_MOSFET_B_v = ( ( ( - X_idx_0 + X_idx_34 * - 0.001
) + X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) + 15.0 ; N_Channel_MOSFET_D_v =
( ( ( ( ( ( ( - X_idx_1 + - X_idx_0 ) + X_idx_37 * 0.01 ) + X_idx_38 * -
0.0001 ) + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) +
X_idx_2 ) + 15.0 ; N_Channel_MOSFET_G_v = ( ( ( ( ( ( - X_idx_0 + X_idx_37 *
- 0.001 ) + X_idx_38 * - 0.0011 ) + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 )
+ X_idx_36 * - 0.001 ) + X_idx_2 ) + 15.0 ; N_Channel_MOSFET_capacitor_GD_n_v
= ( ( ( ( ( ( - X_idx_1 + - X_idx_0 ) + X_idx_38 * - 0.0001 ) + X_idx_34 * -
0.001 ) + X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) + X_idx_2 ) + 15.0 ;
N_Channel_MOSFET_capacitor_GD_p_v = ( ( ( ( ( - X_idx_0 + X_idx_38 * - 0.0001
) + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) + X_idx_36 * - 0.001 ) +
X_idx_2 ) + 15.0 ; N_Channel_MOSFET_capacitor_GS_n_v = ( ( ( ( - X_idx_0 +
X_idx_38 * - 0.0001 ) + X_idx_34 * - 0.001 ) + X_idx_35 * 0.011 ) + X_idx_36
* - 0.001 ) + 15.0 ; t1 = - X_idx_37 + - X_idx_38 ; t2 = - X_idx_1 + X_idx_2
; t4 = ( ( X_idx_40 * 0.0001 + X_idx_41 * 0.0011 ) + X_idx_3 ) + 15.0 ;
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
= - X_idx_32 + X_idx_33 ; t67 = ( - X_idx_61 + X_idx_57 ) + X_idx_74 ;
piece39 = ( ( ( ( ( ( X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) + X_idx_37 *
9.9999999991773336E-7 ) + X_idx_38 * 1.0999999999177335E-6 ) + X_idx_34 *
1.0E-6 ) + X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6 ) + X_idx_62 * 0.001 ;
t0 [ 0ULL ] = 0.0 ; t0 [ 1ULL ] = N_Channel_MOSFET_B_v ; t0 [ 2ULL ] =
N_Channel_MOSFET_D_v ; t0 [ 3ULL ] = N_Channel_MOSFET_G_v ; t0 [ 4ULL ] =
N_Channel_MOSFET_B_v ; t0 [ 5ULL ] = - X_idx_37 + X_idx_39 ; t0 [ 6ULL ] =
N_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 7ULL ] =
N_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 8ULL ] = X_idx_1 ; t0 [ 9ULL ] =
X_idx_1 ; t0 [ 10ULL ] = - X_idx_39 + - X_idx_38 ; t0 [ 11ULL ] =
N_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 12ULL ] =
N_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 13ULL ] = X_idx_2 ; t0 [ 14ULL ] =
X_idx_2 ; t0 [ 15ULL ] = X_idx_37 ; t0 [ 16ULL ] =
N_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 17ULL ] = N_Channel_MOSFET_D_v ; t0
[ 18ULL ] = X_idx_37 * X_idx_37 * 1.0E-5 * 1000.0 ; t0 [ 19ULL ] = X_idx_37 *
0.01 ; t0 [ 20ULL ] = t1 ; t0 [ 21ULL ] = N_Channel_MOSFET_capacitor_GD_p_v ;
t0 [ 22ULL ] = N_Channel_MOSFET_G_v ; t0 [ 23ULL ] = t1 * t1 * 1.0E-6 *
1000.0 ; t0 [ 24ULL ] = t1 * 0.001 ; t0 [ 25ULL ] =
N_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 26ULL ] =
N_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 27ULL ] =
N_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 28ULL ] = 298.15 ; t0 [ 29ULL ] =
X_idx_39 ; t0 [ 30ULL ] = 0.0 ; t0 [ 31ULL ] = X_idx_39 * t2 * 0.001 * 1000.0
; t0 [ 32ULL ] = t2 ; t0 [ 33ULL ] = X_idx_2 ; t0 [ 34ULL ] = X_idx_38 ; t0 [
35ULL ] = N_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 36ULL ] =
N_Channel_MOSFET_B_v ; t0 [ 37ULL ] = X_idx_38 * X_idx_38 *
1.0000000000000001E-7 * 1000.0 ; t0 [ 38ULL ] = X_idx_38 * 0.0001 ; t0 [
39ULL ] = N_Channel_MOSFET_B_v ; t0 [ 40ULL ] = t4 ; t0 [ 41ULL ] = 0.0 ; t0
[ 42ULL ] = N_Channel_MOSFET_B_v ; t0 [ 43ULL ] = - X_idx_42 + X_idx_43 ; t0
[ 44ULL ] = N_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 45ULL ] =
N_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 46ULL ] = X_idx_4 ; t0 [ 47ULL ] =
X_idx_4 ; t0 [ 48ULL ] = ( - X_idx_43 + X_idx_38 ) + X_idx_35 ; t0 [ 49ULL ]
= N_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 50ULL ] =
N_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 51ULL ] = X_idx_5 ; t0 [ 52ULL ] =
X_idx_5 ; t0 [ 53ULL ] = X_idx_42 ; t0 [ 54ULL ] =
N_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 55ULL ] = t4 ; t0 [ 56ULL ] =
X_idx_42 * X_idx_42 * 1.0E-5 * 1000.0 ; t0 [ 57ULL ] = X_idx_42 * 0.01 ; t0 [
58ULL ] = t5 ; t0 [ 59ULL ] = N_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 60ULL
] = 0.0 ; t0 [ 61ULL ] = t5 * t5 * 1.0E-6 * 1000.0 ; t0 [ 62ULL ] = t5 *
0.001 ; t0 [ 63ULL ] = N_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 64ULL ] =
N_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 65ULL ] =
N_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 66ULL ] = 298.15 ; t0 [ 67ULL ] =
X_idx_43 ; t0 [ 68ULL ] = 0.0 ; t0 [ 69ULL ] = X_idx_43 * t6 * 0.001 * 1000.0
; t0 [ 70ULL ] = t6 ; t0 [ 71ULL ] = X_idx_5 ; t0 [ 72ULL ] = t7 ; t0 [ 73ULL
] = N_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 74ULL ] = N_Channel_MOSFET_B_v
; t0 [ 75ULL ] = t7 * t7 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 76ULL ] = t7
* 0.0001 ; t0 [ 77ULL ] = - 15.0 ; t0 [ 78ULL ] = N_Channel_MOSFET_B_v ; t0 [
79ULL ] = 15.0 ; t0 [ 80ULL ] = - 15.0 ; t0 [ 81ULL ] = - X_idx_35 + X_idx_36
; t0 [ 82ULL ] = N_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 83ULL ] =
N_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 84ULL ] = X_idx_0 ; t0 [ 85ULL ] =
X_idx_0 ; t0 [ 86ULL ] = X_idx_34 ; t0 [ 87ULL ] =
N_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 88ULL ] =
N_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 89ULL ] = X_idx_6 ; t0 [ 90ULL ] =
X_idx_6 ; t0 [ 91ULL ] = X_idx_35 ; t0 [ 92ULL ] =
N_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 93ULL ] = N_Channel_MOSFET_B_v ; t0
[ 94ULL ] = X_idx_35 * X_idx_35 * 1.0E-5 * 1000.0 ; t0 [ 95ULL ] = X_idx_35 *
0.01 ; t0 [ 96ULL ] = t9 ; t0 [ 97ULL ] = N_Channel_MOSFET2_capacitor_GD_p_v
; t0 [ 98ULL ] = 15.0 ; t0 [ 99ULL ] = t9 * t9 * 1.0E-6 * 1000.0 ; t0 [
100ULL ] = t9 * 0.001 ; t0 [ 101ULL ] = N_Channel_MOSFET2_capacitor_GD_n_v ;
t0 [ 102ULL ] = N_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 103ULL ] =
N_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 104ULL ] = 298.15 ; t0 [ 105ULL ] =
X_idx_36 ; t0 [ 106ULL ] = 0.0 ; t0 [ 107ULL ] = X_idx_36 * t10 * 0.001 *
1000.0 ; t0 [ 108ULL ] = t10 ; t0 [ 109ULL ] = X_idx_6 ; t0 [ 110ULL ] = t11
; t0 [ 111ULL ] = N_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 112ULL ] = - 15.0
; t0 [ 113ULL ] = t11 * t11 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 114ULL ]
= t11 * 0.0001 ; t0 [ 115ULL ] = - 15.0 ; t0 [ 116ULL ] = t12 ; t0 [ 117ULL ]
= 0.0 ; t0 [ 118ULL ] = - 15.0 ; t0 [ 119ULL ] = - X_idx_45 + X_idx_46 ; t0 [
120ULL ] = N_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 121ULL ] =
N_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 122ULL ] = X_idx_7 ; t0 [ 123ULL ]
= X_idx_7 ; t0 [ 124ULL ] = X_idx_44 ; t0 [ 125ULL ] =
N_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 126ULL ] =
N_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 127ULL ] = X_idx_8 ; t0 [ 128ULL ]
= X_idx_8 ; t0 [ 129ULL ] = X_idx_45 ; t0 [ 130ULL ] =
N_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 131ULL ] = t12 ; t0 [ 132ULL ] =
X_idx_45 * X_idx_45 * 1.0E-5 * 1000.0 ; t0 [ 133ULL ] = X_idx_45 * 0.01 ; t0
[ 134ULL ] = t13 ; t0 [ 135ULL ] = N_Channel_MOSFET3_capacitor_GD_p_v ; t0 [
136ULL ] = 0.0 ; t0 [ 137ULL ] = t13 * t13 * 1.0E-6 * 1000.0 ; t0 [ 138ULL ]
= t13 * 0.001 ; t0 [ 139ULL ] = N_Channel_MOSFET3_capacitor_GD_n_v ; t0 [
140ULL ] = N_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 141ULL ] =
N_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 142ULL ] = 298.15 ; t0 [ 143ULL ] =
X_idx_46 ; t0 [ 144ULL ] = 0.0 ; t0 [ 145ULL ] = X_idx_46 * t14 * 0.001 *
1000.0 ; t0 [ 146ULL ] = t14 ; t0 [ 147ULL ] = X_idx_8 ; t0 [ 148ULL ] = t15
; t0 [ 149ULL ] = N_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 150ULL ] = - 15.0
; t0 [ 151ULL ] = t15 * t15 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 152ULL ]
= t15 * 0.0001 ; t0 [ 153ULL ] = - 15.0 ; t0 [ 154ULL ] = t16 ; t0 [ 155ULL ]
= 0.0 ; t0 [ 156ULL ] = - 15.0 ; t0 [ 157ULL ] = - X_idx_48 + X_idx_49 ; t0 [
158ULL ] = N_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 159ULL ] =
N_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 160ULL ] = X_idx_9 ; t0 [ 161ULL ]
= X_idx_9 ; t0 [ 162ULL ] = X_idx_47 ; t0 [ 163ULL ] =
N_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 164ULL ] =
N_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 165ULL ] = X_idx_10 ; t0 [ 166ULL ]
= X_idx_10 ; t0 [ 167ULL ] = X_idx_48 ; t0 [ 168ULL ] =
N_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 169ULL ] = t16 ; t0 [ 170ULL ] =
X_idx_48 * X_idx_48 * 1.0E-5 * 1000.0 ; t0 [ 171ULL ] = X_idx_48 * 0.01 ; t0
[ 172ULL ] = t17 ; t0 [ 173ULL ] = N_Channel_MOSFET4_capacitor_GD_p_v ; t0 [
174ULL ] = 0.0 ; t0 [ 175ULL ] = t17 * t17 * 1.0E-6 * 1000.0 ; t0 [ 176ULL ]
= t17 * 0.001 ; t0 [ 177ULL ] = N_Channel_MOSFET4_capacitor_GD_n_v ; t0 [
178ULL ] = N_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 179ULL ] =
N_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 180ULL ] = 298.15 ; t0 [ 181ULL ] =
X_idx_49 ; t0 [ 182ULL ] = 0.0 ; t0 [ 183ULL ] = X_idx_49 * t18 * 0.001 *
1000.0 ; t0 [ 184ULL ] = t18 ; t0 [ 185ULL ] = X_idx_10 ; t0 [ 186ULL ] = t19
; t0 [ 187ULL ] = N_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 188ULL ] = - 15.0
; t0 [ 189ULL ] = t19 * t19 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 190ULL ]
= t19 * 0.0001 ; t0 [ 191ULL ] = - 15.0 ; t0 [ 192ULL ] = t20 ; t0 [ 193ULL ]
= 0.0 ; t0 [ 194ULL ] = - 15.0 ; t0 [ 195ULL ] = - X_idx_51 + X_idx_52 ; t0 [
196ULL ] = N_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 197ULL ] =
N_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 198ULL ] = X_idx_11 ; t0 [ 199ULL ]
= X_idx_11 ; t0 [ 200ULL ] = X_idx_50 ; t0 [ 201ULL ] =
N_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 202ULL ] =
N_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 203ULL ] = X_idx_12 ; t0 [ 204ULL ]
= X_idx_12 ; t0 [ 205ULL ] = X_idx_51 ; t0 [ 206ULL ] =
N_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 207ULL ] = t20 ; t0 [ 208ULL ] =
X_idx_51 * X_idx_51 * 1.0E-5 * 1000.0 ; t0 [ 209ULL ] = X_idx_51 * 0.01 ; t0
[ 210ULL ] = t21 ; t0 [ 211ULL ] = N_Channel_MOSFET5_capacitor_GD_p_v ; t0 [
212ULL ] = 0.0 ; t0 [ 213ULL ] = t21 * t21 * 1.0E-6 * 1000.0 ; t0 [ 214ULL ]
= t21 * 0.001 ; t0 [ 215ULL ] = N_Channel_MOSFET5_capacitor_GD_n_v ; t0 [
216ULL ] = N_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 217ULL ] =
N_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 218ULL ] = 298.15 ; t0 [ 219ULL ] =
X_idx_52 ; t0 [ 220ULL ] = 0.0 ; t0 [ 221ULL ] = X_idx_52 * t22 * 0.001 *
1000.0 ; t0 [ 222ULL ] = t22 ; t0 [ 223ULL ] = X_idx_12 ; t0 [ 224ULL ] = t23
; t0 [ 225ULL ] = N_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 226ULL ] = - 15.0
; t0 [ 227ULL ] = t23 * t23 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 228ULL ]
= t23 * 0.0001 ; t0 [ 229ULL ] = - 15.0 ; t0 [ 230ULL ] = t24 ; t0 [ 231ULL ]
= 0.0 ; t0 [ 232ULL ] = - 15.0 ; t0 [ 233ULL ] = - X_idx_54 + X_idx_55 ; t0 [
234ULL ] = N_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 235ULL ] =
N_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 236ULL ] = X_idx_13 ; t0 [ 237ULL ]
= X_idx_13 ; t0 [ 238ULL ] = X_idx_53 ; t0 [ 239ULL ] =
N_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 240ULL ] =
N_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 241ULL ] = X_idx_14 ; t0 [ 242ULL ]
= X_idx_14 ; t0 [ 243ULL ] = X_idx_54 ; t0 [ 244ULL ] =
N_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 245ULL ] = t24 ; t0 [ 246ULL ] =
X_idx_54 * X_idx_54 * 1.0E-5 * 1000.0 ; t0 [ 247ULL ] = X_idx_54 * 0.01 ; t0
[ 248ULL ] = t25 ; t0 [ 249ULL ] = N_Channel_MOSFET6_capacitor_GD_p_v ; t0 [
250ULL ] = 0.0 ; t0 [ 251ULL ] = t25 * t25 * 1.0E-6 * 1000.0 ; t0 [ 252ULL ]
= t25 * 0.001 ; t0 [ 253ULL ] = N_Channel_MOSFET6_capacitor_GD_n_v ; t0 [
254ULL ] = N_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 255ULL ] =
N_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 256ULL ] = 298.15 ; t0 [ 257ULL ] =
X_idx_55 ; t0 [ 258ULL ] = 0.0 ; t0 [ 259ULL ] = X_idx_55 * t26 * 0.001 *
1000.0 ; t0 [ 260ULL ] = t26 ; t0 [ 261ULL ] = X_idx_14 ; t0 [ 262ULL ] = t27
; t0 [ 263ULL ] = N_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 264ULL ] = - 15.0
; t0 [ 265ULL ] = t27 * t27 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 266ULL ]
= t27 * 0.0001 ; t0 [ 267ULL ] = - 15.0 ; t0 [ 268ULL ] = t28 ; t0 [ 269ULL ]
= 0.0 ; t0 [ 270ULL ] = - 15.0 ; t0 [ 271ULL ] = - X_idx_57 + X_idx_58 ; t0 [
272ULL ] = N_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 273ULL ] =
N_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 274ULL ] = X_idx_15 ; t0 [ 275ULL ]
= X_idx_15 ; t0 [ 276ULL ] = X_idx_56 ; t0 [ 277ULL ] =
N_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 278ULL ] =
N_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 279ULL ] = X_idx_16 ; t0 [ 280ULL ]
= X_idx_16 ; t0 [ 281ULL ] = X_idx_57 ; t0 [ 282ULL ] =
N_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 283ULL ] = t28 ; t0 [ 284ULL ] =
X_idx_57 * X_idx_57 * 1.0E-5 * 1000.0 ; t0 [ 285ULL ] = X_idx_57 * 0.01 ; t0
[ 286ULL ] = t29 ; t0 [ 287ULL ] = N_Channel_MOSFET7_capacitor_GD_p_v ; t0 [
288ULL ] = 0.0 ; t0 [ 289ULL ] = t29 * t29 * 1.0E-6 * 1000.0 ; t0 [ 290ULL ]
= t29 * 0.001 ; t0 [ 291ULL ] = N_Channel_MOSFET7_capacitor_GD_n_v ; t0 [
292ULL ] = N_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 293ULL ] =
N_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 294ULL ] = 298.15 ; t0 [ 295ULL ] =
X_idx_58 ; t0 [ 296ULL ] = 0.0 ; t0 [ 297ULL ] = X_idx_58 * t30 * 0.001 *
1000.0 ; t0 [ 298ULL ] = t30 ; t0 [ 299ULL ] = X_idx_16 ; t0 [ 300ULL ] = t31
; t0 [ 301ULL ] = N_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 302ULL ] = - 15.0
; t0 [ 303ULL ] = t31 * t31 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 304ULL ]
= t31 * 0.0001 ; t0 [ 305ULL ] = - 15.0 ; t0 [ 306ULL ] = t32 ; t0 [ 307ULL ]
= 0.0 ; t0 [ 308ULL ] = - 15.0 ; t0 [ 309ULL ] = 0.015 + ( ( ( ( ( ( ( ( (
X_idx_2 * 0.001 + X_idx_0 * - 0.001 ) + X_idx_37 * - 1.000001 ) + X_idx_38 *
- 1.0000011 ) + X_idx_34 * - 1.0E-6 ) + X_idx_35 * 1.1E-5 ) + X_idx_36 * -
1.0E-6 ) + X_idx_62 * - 0.001 ) + X_idx_60 ) + X_idx_61 ) ; t0 [ 310ULL ] =
N_Channel_MOSFET8_capacitor_GD_n_v ; t0 [ 311ULL ] =
N_Channel_MOSFET8_capacitor_GD_p_v ; t0 [ 312ULL ] = X_idx_17 ; t0 [ 313ULL ]
= X_idx_17 ; t0 [ 314ULL ] = X_idx_59 ; t0 [ 315ULL ] =
N_Channel_MOSFET8_capacitor_GS_n_v ; t0 [ 316ULL ] =
N_Channel_MOSFET8_capacitor_GD_p_v ; t0 [ 317ULL ] = X_idx_18 ; t0 [ 318ULL ]
= X_idx_18 ; t0 [ 319ULL ] = - 0.015 + ( ( ( ( ( ( ( ( X_idx_2 * - 0.001 +
X_idx_0 * 0.001 ) + X_idx_37 * 1.000001 ) + X_idx_38 * 1.0000011 ) + X_idx_34
* 1.0E-6 ) + X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6 ) + - X_idx_61 ) +
X_idx_62 * 0.001 ) ; t0 [ 320ULL ] = N_Channel_MOSFET8_capacitor_GD_n_v ; t0
[ 321ULL ] = t32 ; t0 [ 322ULL ] = N_Channel_MOSFET8_drain_resistor_i *
N_Channel_MOSFET8_drain_resistor_i * 1.0E-5 * 1000.0 ; t0 [ 323ULL ] =
N_Channel_MOSFET8_drain_resistor_i * 0.01 ; t0 [ 324ULL ] = 0.015 + ( ( ( ( (
( ( ( ( ( X_idx_2 * 0.001 + X_idx_0 * - 0.001 ) + X_idx_37 * - 1.000001 ) +
X_idx_38 * - 1.0000011 ) + X_idx_34 * - 1.0E-6 ) + X_idx_35 * 1.1E-5 ) +
X_idx_36 * - 1.0E-6 ) + X_idx_62 * - 0.001 ) + X_idx_59 ) + X_idx_60 ) +
X_idx_61 ) ; t0 [ 325ULL ] = N_Channel_MOSFET8_capacitor_GD_p_v ; t0 [ 326ULL
] = 0.0 ; t0 [ 327ULL ] = t33 * t33 * 1.0E-6 * 1000.0 ; t0 [ 328ULL ] = t33 *
0.001 ; t0 [ 329ULL ] = N_Channel_MOSFET8_capacitor_GD_n_v ; t0 [ 330ULL ] =
N_Channel_MOSFET8_capacitor_GD_p_v ; t0 [ 331ULL ] =
N_Channel_MOSFET8_capacitor_GS_n_v ; t0 [ 332ULL ] = 298.15 ; t0 [ 333ULL ] =
X_idx_60 ; t0 [ 334ULL ] = 0.0 ; t0 [ 335ULL ] = X_idx_60 * t34 * 0.001 *
1000.0 ; t0 [ 336ULL ] = t34 ; t0 [ 337ULL ] = X_idx_18 ; t0 [ 338ULL ] = t35
; t0 [ 339ULL ] = N_Channel_MOSFET8_capacitor_GS_n_v ; t0 [ 340ULL ] = - 15.0
; t0 [ 341ULL ] = t35 * t35 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 342ULL ]
= t35 * 0.0001 ; t0 [ 343ULL ] = 15.0 ; t0 [ 344ULL ] = t4 ; t0 [ 345ULL ] =
t4 ; t0 [ 346ULL ] = 15.0 ; t0 [ 347ULL ] = - X_idx_63 + X_idx_64 ; t0 [
348ULL ] = P_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 349ULL ] =
P_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 350ULL ] = X_idx_19 ; t0 [ 351ULL ]
= X_idx_19 ; t0 [ 352ULL ] = ( - X_idx_42 + - X_idx_64 ) + - X_idx_41 ; t0 [
353ULL ] = P_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 354ULL ] =
P_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 355ULL ] = X_idx_20 ; t0 [ 356ULL ]
= X_idx_20 ; t0 [ 357ULL ] = X_idx_63 ; t0 [ 358ULL ] =
P_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 359ULL ] = t4 ; t0 [ 360ULL ] =
X_idx_63 * X_idx_63 * 1.0E-5 * 1000.0 ; t0 [ 361ULL ] = X_idx_63 * 0.01 ; t0
[ 362ULL ] = t37 ; t0 [ 363ULL ] = P_Channel_MOSFET_capacitor_GD_p_v ; t0 [
364ULL ] = t4 ; t0 [ 365ULL ] = t37 * t37 * 1.0E-6 * 1000.0 ; t0 [ 366ULL ] =
t37 * 0.001 ; t0 [ 367ULL ] = P_Channel_MOSFET_capacitor_GD_n_v ; t0 [ 368ULL
] = P_Channel_MOSFET_capacitor_GD_p_v ; t0 [ 369ULL ] =
P_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 370ULL ] = 298.15 ; t0 [ 371ULL ] =
X_idx_64 ; t0 [ 372ULL ] = 0.0 ; t0 [ 373ULL ] = X_idx_64 * t38 * 0.001 *
1000.0 ; t0 [ 374ULL ] = t38 ; t0 [ 375ULL ] = X_idx_20 ; t0 [ 376ULL ] = t39
; t0 [ 377ULL ] = P_Channel_MOSFET_capacitor_GS_n_v ; t0 [ 378ULL ] = 15.0 ;
t0 [ 379ULL ] = t39 * t39 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 380ULL ] =
t39 * 0.0001 ; t0 [ 381ULL ] = 15.0 ; t0 [ 382ULL ] = N_Channel_MOSFET_D_v ;
t0 [ 383ULL ] = t4 ; t0 [ 384ULL ] = 15.0 ; t0 [ 385ULL ] = - X_idx_40 +
X_idx_65 ; t0 [ 386ULL ] = P_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 387ULL ]
= P_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 388ULL ] = X_idx_21 ; t0 [ 389ULL
] = X_idx_21 ; t0 [ 390ULL ] = ( - X_idx_65 + X_idx_40 ) + X_idx_41 ; t0 [
391ULL ] = P_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 392ULL ] =
P_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 393ULL ] = X_idx_3 ; t0 [ 394ULL ]
= X_idx_3 ; t0 [ 395ULL ] = X_idx_40 ; t0 [ 396ULL ] =
P_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 397ULL ] = N_Channel_MOSFET_D_v ;
t0 [ 398ULL ] = X_idx_40 * X_idx_40 * 1.0E-5 * 1000.0 ; t0 [ 399ULL ] =
X_idx_40 * 0.01 ; t0 [ 400ULL ] = X_idx_41 ; t0 [ 401ULL ] =
P_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 402ULL ] = t4 ; t0 [ 403ULL ] =
X_idx_41 * X_idx_41 * 1.0E-6 * 1000.0 ; t0 [ 404ULL ] = X_idx_41 * 0.001 ; t0
[ 405ULL ] = P_Channel_MOSFET1_capacitor_GD_n_v ; t0 [ 406ULL ] =
P_Channel_MOSFET1_capacitor_GD_p_v ; t0 [ 407ULL ] =
P_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 408ULL ] = 298.15 ; t0 [ 409ULL ] =
X_idx_65 ; t0 [ 410ULL ] = 0.0 ; t0 [ 411ULL ] = X_idx_65 * t42 * 0.001 *
1000.0 ; t0 [ 412ULL ] = t42 ; t0 [ 413ULL ] = X_idx_3 ; t0 [ 414ULL ] = t43
; t0 [ 415ULL ] = P_Channel_MOSFET1_capacitor_GS_n_v ; t0 [ 416ULL ] = 15.0 ;
t0 [ 417ULL ] = t43 * t43 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 418ULL ] =
t43 * 0.0001 ; t0 [ 419ULL ] = 15.0 ; t0 [ 420ULL ] = t12 ; t0 [ 421ULL ] =
N_Channel_MOSFET_D_v ; t0 [ 422ULL ] = 15.0 ; t0 [ 423ULL ] = - X_idx_66 +
X_idx_67 ; t0 [ 424ULL ] = P_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 425ULL ]
= P_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 426ULL ] = X_idx_22 ; t0 [ 427ULL
] = X_idx_22 ; t0 [ 428ULL ] = ( ( - X_idx_37 + - X_idx_40 ) + - X_idx_67 ) +
X_idx_66 ; t0 [ 429ULL ] = P_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 430ULL ]
= P_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 431ULL ] = X_idx_23 ; t0 [ 432ULL
] = X_idx_23 ; t0 [ 433ULL ] = X_idx_66 ; t0 [ 434ULL ] =
P_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 435ULL ] = t12 ; t0 [ 436ULL ] =
X_idx_66 * X_idx_66 * 1.0E-5 * 1000.0 ; t0 [ 437ULL ] = X_idx_66 * 0.01 ; t0
[ 438ULL ] = t45 ; t0 [ 439ULL ] = P_Channel_MOSFET2_capacitor_GD_p_v ; t0 [
440ULL ] = N_Channel_MOSFET_D_v ; t0 [ 441ULL ] = t45 * t45 * 1.0E-6 * 1000.0
; t0 [ 442ULL ] = t45 * 0.001 ; t0 [ 443ULL ] =
P_Channel_MOSFET2_capacitor_GD_n_v ; t0 [ 444ULL ] =
P_Channel_MOSFET2_capacitor_GD_p_v ; t0 [ 445ULL ] =
P_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 446ULL ] = 298.15 ; t0 [ 447ULL ] =
X_idx_67 ; t0 [ 448ULL ] = 0.0 ; t0 [ 449ULL ] = X_idx_67 * t46 * 0.001 *
1000.0 ; t0 [ 450ULL ] = t46 ; t0 [ 451ULL ] = X_idx_23 ; t0 [ 452ULL ] = t47
; t0 [ 453ULL ] = P_Channel_MOSFET2_capacitor_GS_n_v ; t0 [ 454ULL ] = 15.0 ;
t0 [ 455ULL ] = t47 * t47 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 456ULL ] =
t47 * 0.0001 ; t0 [ 457ULL ] = 15.0 ; t0 [ 458ULL ] = t16 ; t0 [ 459ULL ] =
t12 ; t0 [ 460ULL ] = 15.0 ; t0 [ 461ULL ] = - X_idx_68 + X_idx_69 ; t0 [
462ULL ] = P_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 463ULL ] =
P_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 464ULL ] = X_idx_24 ; t0 [ 465ULL ]
= X_idx_24 ; t0 [ 466ULL ] = ( ( - X_idx_45 + - X_idx_66 ) + - X_idx_69 ) +
X_idx_68 ; t0 [ 467ULL ] = P_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 468ULL ]
= P_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 469ULL ] = X_idx_25 ; t0 [ 470ULL
] = X_idx_25 ; t0 [ 471ULL ] = X_idx_68 ; t0 [ 472ULL ] =
P_Channel_MOSFET3_capacitor_GD_n_v ; t0 [ 473ULL ] = t16 ; t0 [ 474ULL ] =
X_idx_68 * X_idx_68 * 1.0E-5 * 1000.0 ; t0 [ 475ULL ] = X_idx_68 * 0.01 ; t0
[ 476ULL ] = t49 ; t0 [ 477ULL ] = P_Channel_MOSFET3_capacitor_GD_p_v ; t0 [
478ULL ] = t12 ; t0 [ 479ULL ] = t49 * t49 * 1.0E-6 * 1000.0 ; t0 [ 480ULL ]
= t49 * 0.001 ; t0 [ 481ULL ] = P_Channel_MOSFET3_capacitor_GD_n_v ; t0 [
482ULL ] = P_Channel_MOSFET3_capacitor_GD_p_v ; t0 [ 483ULL ] =
P_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 484ULL ] = 298.15 ; t0 [ 485ULL ] =
X_idx_69 ; t0 [ 486ULL ] = 0.0 ; t0 [ 487ULL ] = X_idx_69 * t50 * 0.001 *
1000.0 ; t0 [ 488ULL ] = t50 ; t0 [ 489ULL ] = X_idx_25 ; t0 [ 490ULL ] = t51
; t0 [ 491ULL ] = P_Channel_MOSFET3_capacitor_GS_n_v ; t0 [ 492ULL ] = 15.0 ;
t0 [ 493ULL ] = t51 * t51 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 494ULL ] =
t51 * 0.0001 ; t0 [ 495ULL ] = 15.0 ; t0 [ 496ULL ] = t20 ; t0 [ 497ULL ] =
t16 ; t0 [ 498ULL ] = 15.0 ; t0 [ 499ULL ] = - X_idx_70 + X_idx_71 ; t0 [
500ULL ] = P_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 501ULL ] =
P_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 502ULL ] = X_idx_26 ; t0 [ 503ULL ]
= X_idx_26 ; t0 [ 504ULL ] = ( ( - X_idx_48 + - X_idx_68 ) + - X_idx_71 ) +
X_idx_70 ; t0 [ 505ULL ] = P_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 506ULL ]
= P_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 507ULL ] = X_idx_27 ; t0 [ 508ULL
] = X_idx_27 ; t0 [ 509ULL ] = X_idx_70 ; t0 [ 510ULL ] =
P_Channel_MOSFET4_capacitor_GD_n_v ; t0 [ 511ULL ] = t20 ; t0 [ 512ULL ] =
X_idx_70 * X_idx_70 * 1.0E-5 * 1000.0 ; t0 [ 513ULL ] = X_idx_70 * 0.01 ; t0
[ 514ULL ] = t53 ; t0 [ 515ULL ] = P_Channel_MOSFET4_capacitor_GD_p_v ; t0 [
516ULL ] = t16 ; t0 [ 517ULL ] = t53 * t53 * 1.0E-6 * 1000.0 ; t0 [ 518ULL ]
= t53 * 0.001 ; t0 [ 519ULL ] = P_Channel_MOSFET4_capacitor_GD_n_v ; t0 [
520ULL ] = P_Channel_MOSFET4_capacitor_GD_p_v ; t0 [ 521ULL ] =
P_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 522ULL ] = 298.15 ; t0 [ 523ULL ] =
X_idx_71 ; t0 [ 524ULL ] = 0.0 ; t0 [ 525ULL ] = X_idx_71 * t54 * 0.001 *
1000.0 ; t0 [ 526ULL ] = t54 ; t0 [ 527ULL ] = X_idx_27 ; t0 [ 528ULL ] = t55
; t0 [ 529ULL ] = P_Channel_MOSFET4_capacitor_GS_n_v ; t0 [ 530ULL ] = 15.0 ;
t0 [ 531ULL ] = t55 * t55 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 532ULL ] =
t55 * 0.0001 ; t0 [ 533ULL ] = 15.0 ; t0 [ 534ULL ] = t24 ; t0 [ 535ULL ] =
t20 ; t0 [ 536ULL ] = 15.0 ; t0 [ 537ULL ] = - X_idx_72 + X_idx_73 ; t0 [
538ULL ] = P_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 539ULL ] =
P_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 540ULL ] = X_idx_28 ; t0 [ 541ULL ]
= X_idx_28 ; t0 [ 542ULL ] = ( ( - X_idx_51 + - X_idx_70 ) + - X_idx_73 ) +
X_idx_72 ; t0 [ 543ULL ] = P_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 544ULL ]
= P_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 545ULL ] = X_idx_29 ; t0 [ 546ULL
] = X_idx_29 ; t0 [ 547ULL ] = X_idx_72 ; t0 [ 548ULL ] =
P_Channel_MOSFET5_capacitor_GD_n_v ; t0 [ 549ULL ] = t24 ; t0 [ 550ULL ] =
X_idx_72 * X_idx_72 * 1.0E-5 * 1000.0 ; t0 [ 551ULL ] = X_idx_72 * 0.01 ; t0
[ 552ULL ] = t57 ; t0 [ 553ULL ] = P_Channel_MOSFET5_capacitor_GD_p_v ; t0 [
554ULL ] = t20 ; t0 [ 555ULL ] = t57 * t57 * 1.0E-6 * 1000.0 ; t0 [ 556ULL ]
= t57 * 0.001 ; t0 [ 557ULL ] = P_Channel_MOSFET5_capacitor_GD_n_v ; t0 [
558ULL ] = P_Channel_MOSFET5_capacitor_GD_p_v ; t0 [ 559ULL ] =
P_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 560ULL ] = 298.15 ; t0 [ 561ULL ] =
X_idx_73 ; t0 [ 562ULL ] = 0.0 ; t0 [ 563ULL ] = X_idx_73 * t58 * 0.001 *
1000.0 ; t0 [ 564ULL ] = t58 ; t0 [ 565ULL ] = X_idx_29 ; t0 [ 566ULL ] = t59
; t0 [ 567ULL ] = P_Channel_MOSFET5_capacitor_GS_n_v ; t0 [ 568ULL ] = 15.0 ;
t0 [ 569ULL ] = t59 * t59 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 570ULL ] =
t59 * 0.0001 ; t0 [ 571ULL ] = 15.0 ; t0 [ 572ULL ] = t28 ; t0 [ 573ULL ] =
t24 ; t0 [ 574ULL ] = 15.0 ; t0 [ 575ULL ] = - X_idx_74 + X_idx_75 ; t0 [
576ULL ] = P_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 577ULL ] =
P_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 578ULL ] = X_idx_30 ; t0 [ 579ULL ]
= X_idx_30 ; t0 [ 580ULL ] = ( ( - X_idx_54 + - X_idx_72 ) + - X_idx_75 ) +
X_idx_74 ; t0 [ 581ULL ] = P_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 582ULL ]
= P_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 583ULL ] = X_idx_31 ; t0 [ 584ULL
] = X_idx_31 ; t0 [ 585ULL ] = X_idx_74 ; t0 [ 586ULL ] =
P_Channel_MOSFET6_capacitor_GD_n_v ; t0 [ 587ULL ] = t28 ; t0 [ 588ULL ] =
X_idx_74 * X_idx_74 * 1.0E-5 * 1000.0 ; t0 [ 589ULL ] = X_idx_74 * 0.01 ; t0
[ 590ULL ] = t61 ; t0 [ 591ULL ] = P_Channel_MOSFET6_capacitor_GD_p_v ; t0 [
592ULL ] = t24 ; t0 [ 593ULL ] = t61 * t61 * 1.0E-6 * 1000.0 ; t0 [ 594ULL ]
= t61 * 0.001 ; t0 [ 595ULL ] = P_Channel_MOSFET6_capacitor_GD_n_v ; t0 [
596ULL ] = P_Channel_MOSFET6_capacitor_GD_p_v ; t0 [ 597ULL ] =
P_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 598ULL ] = 298.15 ; t0 [ 599ULL ] =
X_idx_75 ; t0 [ 600ULL ] = 0.0 ; t0 [ 601ULL ] = X_idx_75 * t62 * 0.001 *
1000.0 ; t0 [ 602ULL ] = t62 ; t0 [ 603ULL ] = X_idx_31 ; t0 [ 604ULL ] = t63
; t0 [ 605ULL ] = P_Channel_MOSFET6_capacitor_GS_n_v ; t0 [ 606ULL ] = 15.0 ;
t0 [ 607ULL ] = t63 * t63 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 608ULL ] =
t63 * 0.0001 ; t0 [ 609ULL ] = 15.0 ; t0 [ 610ULL ] = t32 ; t0 [ 611ULL ] =
t28 ; t0 [ 612ULL ] = 15.0 ; t0 [ 613ULL ] = - X_idx_61 + X_idx_76 ; t0 [
614ULL ] = P_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 615ULL ] =
P_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 616ULL ] = X_idx_32 ; t0 [ 617ULL ]
= X_idx_32 ; t0 [ 618ULL ] = ( ( - X_idx_57 + - X_idx_74 ) + - X_idx_76 ) +
X_idx_61 ; t0 [ 619ULL ] = P_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 620ULL ]
= P_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 621ULL ] = X_idx_33 ; t0 [ 622ULL
] = X_idx_33 ; t0 [ 623ULL ] = X_idx_61 ; t0 [ 624ULL ] =
P_Channel_MOSFET7_capacitor_GD_n_v ; t0 [ 625ULL ] = t32 ; t0 [ 626ULL ] =
X_idx_61 * X_idx_61 * 1.0E-5 * 1000.0 ; t0 [ 627ULL ] = X_idx_61 * 0.01 ; t0
[ 628ULL ] = t65 ; t0 [ 629ULL ] = P_Channel_MOSFET7_capacitor_GD_p_v ; t0 [
630ULL ] = t28 ; t0 [ 631ULL ] = t65 * t65 * 1.0E-6 * 1000.0 ; t0 [ 632ULL ]
= t65 * 0.001 ; t0 [ 633ULL ] = P_Channel_MOSFET7_capacitor_GD_n_v ; t0 [
634ULL ] = P_Channel_MOSFET7_capacitor_GD_p_v ; t0 [ 635ULL ] =
P_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 636ULL ] = 298.15 ; t0 [ 637ULL ] =
X_idx_76 ; t0 [ 638ULL ] = 0.0 ; t0 [ 639ULL ] = X_idx_76 * t66 * 0.001 *
1000.0 ; t0 [ 640ULL ] = t66 ; t0 [ 641ULL ] = X_idx_33 ; t0 [ 642ULL ] = t67
; t0 [ 643ULL ] = P_Channel_MOSFET7_capacitor_GS_n_v ; t0 [ 644ULL ] = 15.0 ;
t0 [ 645ULL ] = t67 * t67 * 1.0000000000000001E-7 * 1000.0 ; t0 [ 646ULL ] =
t67 * 0.0001 ; t0 [ 647ULL ] = - 0.015 + piece39 ; t0 [ 648ULL ] =
N_Channel_MOSFET_G_v ; t0 [ 649ULL ] = X_idx_62 ; t0 [ 650ULL ] = ( ( ( ( ( (
( ( X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) + X_idx_37 * 9.9999999991773336E-7
) + X_idx_38 * 1.0999999999177335E-6 ) + X_idx_34 * 1.0E-6 ) + X_idx_35 * -
1.1E-5 ) + X_idx_36 * 1.0E-6 ) + X_idx_62 * 0.001 ) + - 0.015 ) * 1000.0 ; t0
[ 651ULL ] = - 0.015 + ( ( ( ( ( ( ( X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) +
X_idx_37 * 1.000001 ) + X_idx_38 * 1.0000011 ) + X_idx_34 * 1.0E-6 ) +
X_idx_35 * - 1.1E-5 ) + X_idx_36 * 1.0E-6 ) + X_idx_62 * 0.001 ) ; t0 [
652ULL ] = t32 ; t0 [ 653ULL ] = N_Channel_MOSFET_G_v ; t0 [ 654ULL ] = ( ( (
( ( ( ( ( X_idx_2 * - 0.001 + X_idx_0 * 0.001 ) + X_idx_37 * 1.000001 ) +
X_idx_38 * 1.0000011 ) + X_idx_34 * 1.0E-6 ) + X_idx_35 * - 1.1E-5 ) +
X_idx_36 * 1.0E-6 ) + X_idx_62 * 0.001 ) + - 0.015 ) * 10000.0 ; t0 [ 655ULL
] = X_idx_62 ; t0 [ 656ULL ] = 0.0 ; t0 [ 657ULL ] = X_idx_62 ; t0 [ 658ULL ]
= X_idx_62 ; t0 [ 659ULL ] = t32 ; t0 [ 660ULL ] = 0.0 ; t0 [ 661ULL ] = t32
; t0 [ 662ULL ] = t32 ; t0 [ 663ULL ] = ( ( ( ( ( ( ( ( ( - X_idx_37 + -
X_idx_42 ) + - X_idx_34 ) + - X_idx_36 ) + - X_idx_45 ) + - X_idx_48 ) + -
X_idx_51 ) + - X_idx_54 ) + - X_idx_57 ) + X_idx_35 ) + X_idx_61 ; t0 [
664ULL ] = 0.0 ; t0 [ 665ULL ] = 15.0 ; t0 [ 666ULL ] = 15.0 ; t0 [ 667ULL ]
= 0.015 + - piece39 ; t0 [ 668ULL ] = 0.0 ; t0 [ 669ULL ] = X_idx_62 ; t0 [
670ULL ] = X_idx_62 ; t0 [ 671ULL ] = ( ( ( ( ( ( ( ( ( ( ( ( - X_idx_34 + -
X_idx_36 ) + - X_idx_44 ) + - X_idx_46 ) + - X_idx_47 ) + - X_idx_49 ) + -
X_idx_50 ) + - X_idx_52 ) + - X_idx_53 ) + - X_idx_55 ) + - X_idx_56 ) + -
X_idx_58 ) + - X_idx_59 ) + - X_idx_60 ; t0 [ 672ULL ] = - 15.0 ; t0 [ 673ULL
] = 0.0 ; t0 [ 674ULL ] = 15.0 ; for ( b = 0 ; b < 675 ; b ++ ) { out . mX [
b ] = t0 [ b ] ; } ( void ) sys ; ( void ) t72 ; return 0 ; }
