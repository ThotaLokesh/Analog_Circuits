#include "ne_ds.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_zc.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_tdxy_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_y.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_nldv.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_eq_tol.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sclv.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_all.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_exp.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_mode.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_var_tol.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_qx_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_vmm.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxm_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_m.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_log.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_imax.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_act.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_imin.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxicrm_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_vpf.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_m_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_slf.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_tdxf_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_a_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_slv.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_vmf.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxf_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_ic.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_slf0.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxf.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_f.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxicr_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_il.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_a.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxdelt_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_vsf.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_lv.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dnf_v_x.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_mdxy_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxy_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxcer_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_icrm_p.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds.h"
#include "ssc_ml_fun.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_external_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sys_struct.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_externals.h"
static int32_T ds_dxm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dum_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dpm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dpm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_duf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dpdxf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dpdxf ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dwf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dwf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dnf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dnf ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_cer
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxcer ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_icr_im ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_id ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_icr_il ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_icrm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicrm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddicrm ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_mduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_tduy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxy ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_duy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duy ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dty_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dty ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_cache_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_update2_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update2_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lock_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lock_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_lock2_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_lock2_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_sfo
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfp ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_assert ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_passert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_iassert ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_t ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_v0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_del_tmax ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxdelt ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dudelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dudelt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtdelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dtdelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_l ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_i
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_j ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dp_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qx ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_q1 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qu_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_q1_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dimin ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dimax ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static NeDsMethodOutput * ds_output_m_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_m ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxm ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dum ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtm ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_a ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_b_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_b ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_c ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_f (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vsf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpdxf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dpdxf ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_tduf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dnf_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf_v_x ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_cer ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxcer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_y ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mode ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_cache_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_log ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_assert ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_v0 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_tmax (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_exp ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_act (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dp_l ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dp_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_j ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qx ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qu ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_q1 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_eq_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lv ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slv ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_nldv (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_imin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_imax ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dimin ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static void
release_reference ( NeDynamicSystem * ds ) ; static void get_reference (
NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics (
NeDynamicSystem * ds , boolean_T ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out ,
boolean_T kp ) ; static void rtpmap ( const NeDynamicSystem * ds , const
PmIntVector * inl , const PmIntVector * ini , const PmIntVector * inj , const
PmRealVector * inr , PmIntVector * outl , PmIntVector * outi , PmIntVector *
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 77 ] =
{ { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 0U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 2U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 3U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 4U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 5U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 6U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 7U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 8U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 9U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 10U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 11U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 12U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 13U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 14U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 15U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 16U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 17U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 18U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 19U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 20U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 21U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 22U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 23U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 24U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 25U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 26U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 27U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 28U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 29U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 30U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 31U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 32U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 33U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 11U , 34U , FALSE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 45U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 11U , 46U , FALSE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 57U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 11U , 58U , FALSE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 69U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 11U , 70U , FALSE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 81U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 11U , 82U , FALSE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 93U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 11U , 94U , FALSE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 105U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 11U , 106U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 117U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 11U , 118U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 129U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 11U , 130U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 141U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 142U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 11U , 143U , FALSE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 154U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 155U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 11U , 156U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 167U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 11U , 168U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 179U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 180U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 11U , 181U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 192U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 193U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 11U , 194U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 205U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 206U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 11U , 207U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 218U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 219U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 11U , 220U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 231U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 232U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 11U , 233U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 244U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor1" , 1U , 245U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source1" , 1U , 246U , FALSE ,
1.0 , "1" , } } ; static NeCERData * s_cer_data = NULL ; static NeICRData *
s_icr_data = NULL ; static NeVariableData s_variable_data [ 77 ] = { {
"N_Channel_MOSFET2.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET1.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET1.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET1.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET2.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET3.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET3.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET4.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET4.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET5.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET5.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET6.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET6.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET7.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET7.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET8.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET8.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET1.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET2.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET2.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET3.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET3.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET4.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET4.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET5.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET5.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET6.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET6.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET7.capacitor_GD.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"P_Channel_MOSFET7.capacitor_GS.vc" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"N_Channel_MOSFET2.capacitor_GS.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET2.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET2.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"N_Channel_MOSFET.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET.source_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET1.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"P_Channel_MOSFET1.gate_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET1.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET1.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"N_Channel_MOSFET3.capacitor_GS.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET3.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET3.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"N_Channel_MOSFET4.capacitor_GS.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET4.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET4.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"N_Channel_MOSFET5.capacitor_GS.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET5.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET5.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"N_Channel_MOSFET6.capacitor_GS.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET6.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET6.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"N_Channel_MOSFET7.capacitor_GS.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET7.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET7.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"N_Channel_MOSFET8.capacitor_GS.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"N_Channel_MOSFET8.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET7.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"Voltage_Source1.v" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Voltage" , } , {
"P_Channel_MOSFET.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"P_Channel_MOSFET.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET1.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET2.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"P_Channel_MOSFET2.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET3.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"P_Channel_MOSFET3.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET4.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"P_Channel_MOSFET4.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET5.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"P_Channel_MOSFET5.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET6.drain_resistor.i" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" , } , {
"P_Channel_MOSFET6.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"P_Channel_MOSFET7.mos.ids" , 0U , 0 ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Drain-source current" , } } ;
static NeVariableData * s_discrete_data = NULL ; static NeObservableData
s_observable_data [ 711 ] = { { "Electrical_Reference.V.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Electrical Reference" , 1U , 1U , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET1.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET1.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET1.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET1.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET1.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET1.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET1.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET1.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET1.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET1.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET1.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET1.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET1.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET1.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET1.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET1.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET1.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET2.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET2.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET2.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET2.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET2.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET2.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET2.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET2.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET2.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET2.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET2.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET2.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET2.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET2.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET2.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET2.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET2.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET3.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET3.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET3.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET3.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET3.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET3.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET3.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET3.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET3.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET3.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET3.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET3.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET3.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET3.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET3.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET3.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET3.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET4.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET4.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET4.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET4.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET4.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET4.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET4.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET4.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET4.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET4.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET4.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET4.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET4.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET4.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET4.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET4.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET4.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET5.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET5.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET5.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET5.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET5.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET5.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET5.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET5.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET5.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET5.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET5.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET5.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET5.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET5.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET5.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET5.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET5.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET6.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET6.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET6.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET6.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET6.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET6.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET6.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET6.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET6.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET6.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET6.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET6.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET6.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET6.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET6.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET6.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET6.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET7.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET7.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET7.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET7.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET7.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET7.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET7.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET7.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET7.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET7.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET7.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET7.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET7.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET7.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET7.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET7.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET7.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET8.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET8.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET8.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET8.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"N_Channel_MOSFET8.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"N_Channel_MOSFET8.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET8.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET8.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET8.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET8.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"N_Channel_MOSFET8.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"N_Channel_MOSFET8.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"N_Channel_MOSFET8.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET8.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"N_Channel_MOSFET8.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"N_Channel_MOSFET8.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"N_Channel_MOSFET8.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"N_Channel_MOSFET8.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"N_Channel_MOSFET8.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"P_Channel_MOSFET.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"P_Channel_MOSFET.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"P_Channel_MOSFET.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"P_Channel_MOSFET.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"P_Channel_MOSFET.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET1.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET1.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET1.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET1.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET1.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET1.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET1.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET1.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"P_Channel_MOSFET1.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"P_Channel_MOSFET1.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"P_Channel_MOSFET1.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET1.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"P_Channel_MOSFET1.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"P_Channel_MOSFET1.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET1.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET1.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET1.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET2.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET2.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET2.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET2.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET2.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET2.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET2.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET2.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"P_Channel_MOSFET2.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"P_Channel_MOSFET2.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"P_Channel_MOSFET2.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET2.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"P_Channel_MOSFET2.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"P_Channel_MOSFET2.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET2.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET2.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET2.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET3.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET3.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET3.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET3.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET3.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET3.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET3.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET3.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"P_Channel_MOSFET3.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"P_Channel_MOSFET3.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"P_Channel_MOSFET3.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET3.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"P_Channel_MOSFET3.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"P_Channel_MOSFET3.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET3.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET3.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET3.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET4.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET4.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET4.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET4.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET4.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET4.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET4.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET4.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"P_Channel_MOSFET4.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"P_Channel_MOSFET4.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"P_Channel_MOSFET4.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET4.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"P_Channel_MOSFET4.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"P_Channel_MOSFET4.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET4.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET4.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET4.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET5.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET5.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET5.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET5.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET5.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET5.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET5.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET5.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"P_Channel_MOSFET5.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"P_Channel_MOSFET5.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"P_Channel_MOSFET5.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET5.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"P_Channel_MOSFET5.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"P_Channel_MOSFET5.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET5.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET5.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET5.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET6.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET6.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET6.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET6.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET6.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET6.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET6.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET6.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"P_Channel_MOSFET6.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"P_Channel_MOSFET6.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"P_Channel_MOSFET6.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET6.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"P_Channel_MOSFET6.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"P_Channel_MOSFET6.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET6.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET6.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET6.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.B.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.capacitor_GD.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET7.capacitor_GD.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.capacitor_GD.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.capacitor_GD.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET7.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET7.capacitor_GS.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.capacitor_GS.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.capacitor_GS.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"P_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "kW" ,
1.0e-6 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"P_Channel_MOSFET7.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET7.drain_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.drain_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.drain_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET7.drain_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET7.gate_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.gate_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.gate_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET7.gate_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.mos.D.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.mos.G.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.mos.S.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.mos.T" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"P_Channel_MOSFET7.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"P_Channel_MOSFET7.mos.igs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source current" , } , {
"P_Channel_MOSFET7.mos.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET7.mos.vds" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"P_Channel_MOSFET7.mos.vgs" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gate-source voltage" , } , {
"P_Channel_MOSFET7.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"P_Channel_MOSFET7.source_resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.source_resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"P_Channel_MOSFET7.source_resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"P_Channel_MOSFET7.source_resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor" , 1U , 1U , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Resistor.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Resistor.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor" , 1U , 1U , "A^2*Ohm" ,
1.0e-6 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"Resistor1.i" , "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor1" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Resistor1.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor1" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor1.p.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor1" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor1.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor1" , 1U , 1U , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Resistor1.power_dissipated" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor1" , 1U , 1U , "A^2*Ohm" ,
1.0e-6 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"Voltage_Sensor1.V" , "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Sensor1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor1.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Sensor1" , 1U , 1U , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor1.p.v"
, "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Sensor1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor1_V" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/PS-Simulink\nConverter1" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor1_V" , } , {
"Voltage_Sensor2.V" , "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Sensor2"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor2.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Sensor2" , 1U , 1U , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor2.p.v"
, "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Sensor2" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor2_V" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/PS-Simulink\nConverter" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor2_V" , } , {
"Voltage_Source.i" , "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source" ,
1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)"
, } , { "Voltage_Source.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source" , 1U , 1U , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Source.p.v"
, "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Source.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source" , 1U , 1U , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Source1.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source1" , 1U , 1U , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)" , } , {
"Voltage_Source1.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source1" , 1U , 1U , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Source1.p.v"
, "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source1" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Source1.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source1" , 1U , 1U , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Source3.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source3" , 1U , 1U , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)" , } , {
"Voltage_Source3.n.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source3" , 1U , 1U , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Source3.p.v"
, "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source3" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Source3.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source3" , 1U , 1U , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } } ; static NeModeData *
s_major_mode_data = NULL ; static NeZCData s_zc_data [ 85 ] = { {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 0U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 2U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 3U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 4U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 5U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 6U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 7U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 8U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 9U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 10U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 11U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 12U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 13U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 14U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 15U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 16U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 17U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 18U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 19U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 20U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 21U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 22U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 23U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 24U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 25U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 26U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 27U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 28U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 29U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 30U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 31U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 32U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 33U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 34U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 35U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 36U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 37U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 38U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 39U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 40U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 41U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 42U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 43U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 44U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 45U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 46U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 47U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 48U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 49U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 50U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 51U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 52U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 53U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 54U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 55U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 56U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 57U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 58U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 59U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 60U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 61U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 62U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 63U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 64U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 65U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 66U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 67U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 68U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 69U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 70U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 71U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 72U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 73U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 74U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 75U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 76U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 77U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 78U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 79U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 80U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 81U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 82U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 83U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_TRUE , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 84U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 85 ] = { {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 208 ] = { {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 0U ,
"N_Channel_MOSFET.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 1U ,
"N_Channel_MOSFET.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 2U ,
"N_Channel_MOSFET.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 3U ,
"N_Channel_MOSFET.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 4U ,
"N_Channel_MOSFET.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 5U ,
"N_Channel_MOSFET.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 6U ,
"N_Channel_MOSFET.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 7U ,
"N_Channel_MOSFET.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 8U ,
"N_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 9U ,
"N_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 10U ,
"N_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 11U ,
"N_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 12U ,
"N_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 13U ,
"N_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 14U ,
"N_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 15U ,
"N_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 16U ,
"N_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 17U ,
"N_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 18U ,
"N_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 19U ,
"N_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 20U ,
"N_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 21U ,
"N_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 22U ,
"N_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 23U ,
"N_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 24U ,
"N_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 25U ,
"N_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 26U ,
"N_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 27U ,
"N_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 28U ,
"N_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 29U ,
"N_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 30U ,
"N_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 31U ,
"N_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 32U ,
"N_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 33U ,
"N_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 34U ,
"N_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 35U ,
"N_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 36U ,
"N_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 37U ,
"N_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 38U ,
"N_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 39U ,
"N_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 40U ,
"N_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 41U ,
"N_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 42U ,
"N_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 43U ,
"N_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 44U ,
"N_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 45U ,
"N_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 46U ,
"N_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 47U ,
"N_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 48U ,
"N_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 49U ,
"N_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 50U ,
"N_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 51U ,
"N_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 52U ,
"N_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 53U ,
"N_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 54U ,
"N_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 55U ,
"N_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 56U ,
"N_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 57U ,
"N_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 58U ,
"N_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 59U ,
"N_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 60U ,
"N_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 61U ,
"N_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 62U ,
"N_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 63U ,
"N_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 64U ,
"N_Channel_MOSFET8.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 65U ,
"N_Channel_MOSFET8.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 66U ,
"N_Channel_MOSFET8.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 67U ,
"N_Channel_MOSFET8.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 68U ,
"N_Channel_MOSFET8.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 69U ,
"N_Channel_MOSFET8.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 70U ,
"N_Channel_MOSFET8.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 71U ,
"N_Channel_MOSFET8.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 72U ,
"P_Channel_MOSFET.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 73U ,
"P_Channel_MOSFET.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 74U ,
"P_Channel_MOSFET.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 75U ,
"P_Channel_MOSFET.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 76U ,
"P_Channel_MOSFET.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 77U ,
"P_Channel_MOSFET.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 78U ,
"P_Channel_MOSFET.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 79U ,
"P_Channel_MOSFET.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 80U ,
"P_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 81U ,
"P_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 82U ,
"P_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 83U ,
"P_Channel_MOSFET1.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 84U ,
"P_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 85U ,
"P_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 86U ,
"P_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 87U ,
"P_Channel_MOSFET1.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 88U ,
"P_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 89U ,
"P_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 90U ,
"P_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 91U ,
"P_Channel_MOSFET2.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 92U ,
"P_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 93U ,
"P_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 94U ,
"P_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 95U ,
"P_Channel_MOSFET2.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 96U ,
"P_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 97U ,
"P_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 98U ,
"P_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 99U ,
"P_Channel_MOSFET3.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 100U ,
"P_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 101U ,
"P_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 102U ,
"P_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 103U ,
"P_Channel_MOSFET3.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 104U ,
"P_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 105U ,
"P_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 106U ,
"P_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 107U ,
"P_Channel_MOSFET4.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 108U ,
"P_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 109U ,
"P_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 110U ,
"P_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 111U ,
"P_Channel_MOSFET4.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 112U ,
"P_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 113U ,
"P_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 114U ,
"P_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 115U ,
"P_Channel_MOSFET5.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 116U ,
"P_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 117U ,
"P_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 118U ,
"P_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 119U ,
"P_Channel_MOSFET5.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 120U ,
"P_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 121U ,
"P_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 122U ,
"P_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 123U ,
"P_Channel_MOSFET6.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 124U ,
"P_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 125U ,
"P_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 126U ,
"P_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 127U ,
"P_Channel_MOSFET6.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 128U ,
"P_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 129U ,
"P_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 130U ,
"P_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 131U ,
"P_Channel_MOSFET7.capacitor_GD.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 132U ,
"P_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 133U ,
"P_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 134U ,
"P_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 135U ,
"P_Channel_MOSFET7.capacitor_GS.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor" , 1U , 136U ,
"Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor" , 1U , 137U ,
"Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor1" , 1U , 138U ,
"Resistor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Resistor1" , 1U , 139U ,
"Resistor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 140U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 141U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 142U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" , 1U , 143U ,
"N_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 144U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 145U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 146U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" , 1U , 147U ,
"N_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 148U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 149U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 150U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" , 1U , 151U ,
"N_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 152U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 153U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 154U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" , 1U , 155U ,
"N_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 156U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 157U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 158U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" , 1U , 159U ,
"N_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 160U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 161U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 162U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" , 1U , 163U ,
"N_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 164U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 165U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 166U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" , 1U , 167U ,
"N_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 168U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 169U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 170U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" , 1U , 171U ,
"N_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 172U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 173U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 174U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" , 1U , 175U ,
"N_Channel_MOSFET8.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 176U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 177U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 178U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" , 1U , 179U ,
"P_Channel_MOSFET.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 180U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 181U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 182U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" , 1U , 183U ,
"P_Channel_MOSFET1.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 184U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 185U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 186U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" , 1U , 187U ,
"P_Channel_MOSFET2.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 188U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 189U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 190U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" , 1U , 191U ,
"P_Channel_MOSFET3.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 192U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 193U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 194U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" , 1U , 195U ,
"P_Channel_MOSFET4.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 196U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 197U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 198U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" , 1U , 199U ,
"P_Channel_MOSFET5.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 200U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 201U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 202U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" , 1U , 203U ,
"P_Channel_MOSFET6.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 204U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 205U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 206U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , 1U , 207U ,
"P_Channel_MOSFET7.mos" ,
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } } ; static
NeRange s_assert_range [ 208 ] = { {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 247 ] = { {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+passive/res.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+sources/voltage_source.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeRange *
s_cer_range = NULL ; static NeRange * s_icr_range = NULL ; static
NeParameterData * s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData *
s_real_parameter_data = NULL ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 77 ;
out -> mM_P . mNumRow = 77 ; out -> mM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 34 ) ;
return out ; } static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 34 ; out -> mM . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 34 ) ; return out
; } static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 34 ; out -> mVMM . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 34
) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 77 ; out ->
mDXM_P . mNumRow = 34 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 0 ; out ->
mDDM_P . mNumRow = 34 ; out -> mDDM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 0 ; out ->
mDUM_P . mNumRow = 34 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 34 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM_P . mNumCol = 0 ; out ->
mDPM_P . mNumRow = 34 ; out -> mDPM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDPM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM . mN = 0 ; out -> mDPM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 77 ; out ->
mA_P . mNumRow = 77 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mA_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 333 )
; return out ; } static NeDsMethodOutput * ds_output_a ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 333 ; out -> mA . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 333 )
; return out ; } static NeDsMethodOutput * ds_output_b_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 0 ; out -> mB_P
. mNumRow = 77 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 1 ) ; out -> mB_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB . mN = 0 ; out -> mB . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_c_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mC_P . mNumCol = 1 ; out -> mC_P . mNumRow
= 77 ; out -> mC_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 2 ) ; out -> mC_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mC . mN = 0 ; out -> mC . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_f ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mF .
mN = 77 ; out -> mF . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 77 ) ; return out ; } static NeDsMethodOutput *
ds_output_vmf ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMF .
mN = 77 ; out -> mVMF . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 77 ) ; return out ; } static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVPF . mN = 77 ; out -> mVPF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 77 ) ; return out ; } static
NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVSF . mN = 77 ; out -> mVSF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 77 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSLF . mN = 77 ; out -> mSLF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 77 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 77 ; out -> mSLF0 . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 77
) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 77 ; out ->
mDXF_P . mNumRow = 77 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 51 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 51 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
51 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 0 ; out ->
mDUF_P . mNumRow = 77 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 0 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 77 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 1 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 77 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF_P . mNumCol = 0 ; out ->
mDPDXF_P . mNumRow = 51 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDPDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF . mN = 0 ; out -> mDPDXF
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 77 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 0 ; out ->
mTDUF_P . mNumRow = 77 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 77 ; out ->
mTDXF_P . mNumRow = 77 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 384 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 105 ; out ->
mDNF_P . mNumRow = 77 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 106 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 1 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 77 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 77 ) ; return out ; } static NeDsMethodOutput * ds_output_cer
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCER . mN = 0 ; out ->
mCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER . mN = 0 ; out
-> mDXCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER_P . mNumCol =
77 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out ->
mDXCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 77 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 77 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 0 ; out -> mICR . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 0 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 0 ; out
-> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 0 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 77 ; out ->
mDXICR_P . mNumRow = 0 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 0 ; out ->
mDDICR_P . mNumRow = 0 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 0 ; out ->
mTDUICR_P . mNumRow = 0 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mTDUICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 77 ; out ->
mICRM_P . mNumRow = 0 ; out -> mICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mICRM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out -> mICRM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol = 77 ; out
-> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mDXICRM_P .
mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out ->
mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
0 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 0
; out -> mMDUY_P . mNumRow = 2 ; out -> mMDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mMDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 77
; out -> mMDXY_P . mNumRow = 2 ; out -> mMDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out ->
mMDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 0
; out -> mTDUY_P . mNumRow = 2 ; out -> mTDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mTDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 77
; out -> mTDXY_P . mNumRow = 2 ; out -> mTDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out ->
mTDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 13 ) ; return out ; } static NeDsMethodOutput * ds_output_y (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 2 ; out ->
mY . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 2 ) ; return out ; } static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 77 ; out ->
mDXY_P . mNumRow = 2 ; out -> mDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 78 ) ; out -> mDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 13 ; out -> mDXY .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
13 ) ; return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 0 ; out ->
mDUY_P . mNumRow = 2 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 2 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 85 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
85 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 85 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 85 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 0 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update2_i
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_I . mN = 0 ;
out -> mUPDATE2_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK_R . mN = 0 ; out -> mLOCK_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 0 ; out -> mLOCK_I . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_lock2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_R . mN = 0 ; out ->
mLOCK2_R . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_I . mN = 0 ; out -> mLOCK2_I . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFO . mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFP . mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out -> mINIT_R . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_init_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out ->
mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 606 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 606 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 208 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 208 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 77 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 78 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 0 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 675 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 675 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 675 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 675 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 675 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 675
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 675 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 675 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 77 ; out -> mQX_P .
mNumRow = 77 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 78 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 0 ; out -> mQU_P .
mNumRow = 77 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 1 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 77 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 77 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 77 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 77 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 77 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 77 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 77 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 77 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 77 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 77 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 77 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 77 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 77 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 77 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 77 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 77 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 77 ; out -> mIMAX .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
77 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 0 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 0 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; if ( -- _ds ->
mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds -> mAlloc , _ds ) ; } }
static void get_reference ( NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ;
_ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt ; } static
NeDynamicSystem * diagnostics ( NeDynamicSystem * ds , boolean_T kp ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ( void ) kp ;
ne_ds_get_reference ( & _ds -> mBase ) ; return & _ds -> mBase ; } static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out , boolean_T kp ) { ( void ) ds ; ( void ) kp ; memcpy (
out -> mX , in -> mX . mX , sizeof ( real_T ) * out -> mN ) ; } static void
rtpmap ( const NeDynamicSystem * ds , const PmIntVector * inl , const
PmIntVector * ini , const PmIntVector * inj , const PmRealVector * inr ,
PmIntVector * outl , PmIntVector * outi , PmIntVector * outj , PmRealVector *
outr ) { ( void ) ds ; memcpy ( outl -> mX , inl -> mX , sizeof ( int32_T ) *
inl -> mN ) ; memcpy ( outi -> mX , ini -> mX , sizeof ( int32_T ) * ini ->
mN ) ; memcpy ( outj -> mX , inj -> mX , sizeof ( int32_T ) * inj -> mN ) ;
memcpy ( outr -> mX , inr -> mX , sizeof ( real_T ) * inr -> mN ) ; }
NeDynamicSystem * OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_dae_ds (
PmAllocator * allocator ) { NeDynamicSystem * ds ; _NeDynamicSystem * _ds ;
static NeDsIoInfo output_info [ 2 ] ; _ds = ( _NeDynamicSystem * ) allocator
-> mCallocFcn ( allocator , sizeof ( _NeDynamicSystem ) , 1 ) ; _ds -> mAlloc
= * allocator ; _ds -> mRefCnt = 1 ; ds = & _ds -> mBase ; ds ->
mNumVariables = 77 ; ds -> mNumDiscreteRealVariables = 0 ; ds ->
mNumDifferentialVariables = 34 ; ds -> mNumEquations = 77 ; ds ->
mNumCEResiduals = 0 ; ds -> mNumICResiduals = 0 ; ds -> mNumModes = 85 ; ds
-> mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds -> mNumIntCache = 0 ; ds
-> mNumObservables = 711 ; ds -> mNumObservableElements = 675 ; ds -> mNumZcs
= 85 ; ds -> mNumAsserts = 208 ; ds -> mNumAssertRanges = 208 ; ds ->
mNumParamAsserts = 0 ; ds -> mNumParamAssertRanges = 0 ; ds ->
mNumInitialAsserts = 0 ; ds -> mNumInitialAssertRanges = 0 ; ds -> mNumRanges
= 85 ; ds -> mNumEquationRanges = 247 ; ds -> mNumCERRanges = 0 ; ds ->
mNumICRRanges = 0 ; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0 ;
ds -> mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 0 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ NE_INPUT_IO_TYPE ] = 0 ; ds -> mNumIo [
NE_OUTPUT_IO_TYPE ] = 2 ; output_info [ 0 ] . mIdentifier =
"Voltage_Sensor1_V" ; output_info [ 0 ] . mM = 1 ; output_info [ 0 ] . mN = 1
; output_info [ 0 ] . mName = "Voltage_Sensor1_V" ; output_info [ 0 ] . mUnit
= "V" ; output_info [ 1 ] . mIdentifier = "Voltage_Sensor2_V" ; output_info [
1 ] . mM = 1 ; output_info [ 1 ] . mN = 1 ; output_info [ 1 ] . mName =
"Voltage_Sensor2_V" ; output_info [ 1 ] . mUnit = "V" ; ds -> mIo [
NE_OUTPUT_IO_TYPE ] = output_info ; ds -> mReleaseReference =
release_reference ; ds -> mGetReference = get_reference ; ds ->
mDiagnosticsDsFcn = diagnostics ; ds -> mExpandFcn = expand ; ds ->
mRtpMapFcn = rtpmap ; ds -> mMethods [ NE_DS_METHOD_M_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_m_p ; ds -> mMakeOutput [
NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_m ; ds -> mMakeOutput [
NE_DS_METHOD_M ] = ds_output_m ; ds -> mMethods [ NE_DS_METHOD_VMM ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_vmm ; ds -> mMakeOutput [
NE_DS_METHOD_VMM ] = ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxm_p ; ds -> mMakeOutput
[ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds -> mMethods [ NE_DS_METHOD_DXM
] = ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM ] = ds_output_dxm ; ds ->
mMethods [ NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDM_P ] = ds_output_ddm_p ; ds -> mMethods [ NE_DS_METHOD_DDM ]
= ds_ddm ; ds -> mMakeOutput [ NE_DS_METHOD_DDM ] = ds_output_ddm ; ds ->
mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [ NE_DS_METHOD_DUM ]
= ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] = ds_output_dum ; ds ->
mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [ NE_DS_METHOD_DTM ]
= ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] = ds_output_dtm ; ds ->
mMethods [ NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DPM_P ] = ds_output_dpm_p ; ds -> mMethods [ NE_DS_METHOD_DPM ]
= ds_dpm ; ds -> mMakeOutput [ NE_DS_METHOD_DPM ] = ds_output_dpm ; ds ->
mMethods [ NE_DS_METHOD_A_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_a_p ; ds -> mMakeOutput [
NE_DS_METHOD_A_P ] = ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_a ; ds -> mMakeOutput [
NE_DS_METHOD_A ] = ds_output_a ; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p
; ds -> mMakeOutput [ NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [
NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b
; ds -> mMethods [ NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [
NE_DS_METHOD_C_P ] = ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c
; ds -> mMakeOutput [ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [
NE_DS_METHOD_F ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_f ; ds
-> mMakeOutput [ NE_DS_METHOD_F ] = ds_output_f ; ds -> mMethods [
NE_DS_METHOD_VMF ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_vmf
; ds -> mMakeOutput [ NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [
NE_DS_METHOD_VPF ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_vpf
; ds -> mMakeOutput [ NE_DS_METHOD_VPF ] = ds_output_vpf ; ds -> mMethods [
NE_DS_METHOD_VSF ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_vsf
; ds -> mMakeOutput [ NE_DS_METHOD_VSF ] = ds_output_vsf ; ds -> mMethods [
NE_DS_METHOD_SLF ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_slf
; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] = ds_output_slf ; ds -> mMethods [
NE_DS_METHOD_SLF0 ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_slf0 ; ds -> mMakeOutput
[ NE_DS_METHOD_SLF0 ] = ds_output_slf0 ; ds -> mMethods [ NE_DS_METHOD_DXF_P
] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXF_P ] = ds_output_dxf_p ; ds -> mMethods [
NE_DS_METHOD_DXF ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxf
; ds -> mMakeOutput [ NE_DS_METHOD_DXF ] = ds_output_dxf ; ds -> mMethods [
NE_DS_METHOD_DUF_P ] = ds_duf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUF_P ] =
ds_output_duf_p ; ds -> mMethods [ NE_DS_METHOD_DUF ] = ds_duf ; ds ->
mMakeOutput [ NE_DS_METHOD_DUF ] = ds_output_duf ; ds -> mMethods [
NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTF_P ] =
ds_output_dtf_p ; ds -> mMethods [ NE_DS_METHOD_DTF ] = ds_dtf ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF ] = ds_output_dtf ; ds -> mMethods [
NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DDF_P ] =
ds_output_ddf_p ; ds -> mMethods [ NE_DS_METHOD_DDF ] = ds_ddf ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF ] = ds_output_ddf ; ds -> mMethods [
NE_DS_METHOD_DPDXF_P ] = ds_dpdxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p ; ds -> mMethods [
NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF ] =
ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_tdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = ds_dnf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DNF_P ] =
ds_output_dnf_p ; ds -> mMethods [ NE_DS_METHOD_DNF ] = ds_dnf ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds -> mMethods [
NE_DS_METHOD_DNF_V_X ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dnf_v_x ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxcer_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods [
NE_DS_METHOD_IC ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_ic ;
ds -> mMakeOutput [ NE_DS_METHOD_IC ] = ds_output_ic ; ds -> mMethods [
NE_DS_METHOD_ICR ] = ds_icr ; ds -> mMakeOutput [ NE_DS_METHOD_ICR ] =
ds_output_icr ; ds -> mMethods [ NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds ->
mMakeOutput [ NE_DS_METHOD_ICR_IM ] = ds_output_icr_im ; ds -> mMethods [
NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_ID ]
= ds_output_icr_id ; ds -> mMethods [ NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IL ] = ds_output_icr_il ; ds -> mMethods [
NE_DS_METHOD_DXICR ] = ds_dxicr ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR ] =
ds_output_dxicr ; ds -> mMethods [ NE_DS_METHOD_DXICR_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxicr_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods [
NE_DS_METHOD_DDICR ] = ds_ddicr ; ds -> mMakeOutput [ NE_DS_METHOD_DDICR ] =
ds_output_ddicr ; ds -> mMethods [ NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods
[ NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_icrm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_ICRM_P ] = ds_output_icrm_p ; ds -> mMethods [
NE_DS_METHOD_ICRM ] = ds_icrm ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM ] =
ds_output_icrm ; ds -> mMethods [ NE_DS_METHOD_DXICRM_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxicrm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DXICRM ]
= ds_output_dxicrm ; ds -> mMethods [ NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM ] = ds_output_ddicrm ; ds -> mMethods [
NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDUY_P ]
= ds_output_mduy_p ; ds -> mMethods [ NE_DS_METHOD_MDXY_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_mdxy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_tdxy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [
NE_DS_METHOD_Y ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_y ; ds
-> mMakeOutput [ NE_DS_METHOD_Y ] = ds_output_y ; ds -> mMethods [
NE_DS_METHOD_DXY_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxy_p ; ds -> mMakeOutput
[ NE_DS_METHOD_DXY_P ] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY
] = ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] = ds_output_dxy ; ds ->
mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [ NE_DS_METHOD_DUY ]
= ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] = ds_output_duy ; ds ->
mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [ NE_DS_METHOD_DTY ]
= ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] = ds_output_dty ; ds ->
mMethods [ NE_DS_METHOD_MODE ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_mode ; ds -> mMakeOutput
[ NE_DS_METHOD_MODE ] = ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_zc ; ds -> mMakeOutput [
NE_DS_METHOD_ZC ] = ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] =
ds_cache_r ; ds -> mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ;
ds -> mMethods [ NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = ds_update2_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_I ] = ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = ds_lock_r ; ds -> mMakeOutput [ NE_DS_METHOD_LOCK_R ]
= ds_output_lock_r ; ds -> mMethods [ NE_DS_METHOD_LOCK_I ] = ds_lock_i ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = ds_lock2_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods [
NE_DS_METHOD_LOCK2_I ] = ds_lock2_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_log
; ds -> mMakeOutput [ NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [
NE_DS_METHOD_ASSERT ] = ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ]
= ds_output_assert ; ds -> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ;
ds -> mMakeOutput [ NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds ->
mMethods [ NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_dxdelt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_exp ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds -> mMethods [
NE_DS_METHOD_OBS_ACT ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_act ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods [
NE_DS_METHOD_OBS_ALL ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_all ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_obs_il ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [
NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_qx_p ; ds -> mMakeOutput
[ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [ NE_DS_METHOD_QU_P ]
= ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] = ds_output_qu_p ; ds ->
mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds -> mMakeOutput [
NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [ NE_DS_METHOD_Q1_P ] =
ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] = ds_output_q1_p ; ds ->
mMethods [ NE_DS_METHOD_VAR_TOL ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_eq_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_EQ_TOL ] = ds_output_eq_tol ; ds -> mMethods [
NE_DS_METHOD_LV ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_lv ;
ds -> mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_slv
; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] = ds_output_slv ; ds -> mMethods [
NE_DS_METHOD_NLDV ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_nldv ; ds -> mMakeOutput
[ NE_DS_METHOD_NLDV ] = ds_output_nldv ; ds -> mMethods [ NE_DS_METHOD_SCLV ]
= OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_sclv ; ds ->
mMakeOutput [ NE_DS_METHOD_SCLV ] = ds_output_sclv ; ds -> mMethods [
NE_DS_METHOD_IMIN ] =
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_imin ; ds -> mMakeOutput
[ NE_DS_METHOD_IMIN ] = ds_output_imin ; ds -> mMethods [ NE_DS_METHOD_IMAX ]
= OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_ds_imax ; ds ->
mMakeOutput [ NE_DS_METHOD_IMAX ] = ds_output_imax ; ds -> mMethods [
NE_DS_METHOD_DIMIN ] = ds_dimin ; ds -> mMakeOutput [ NE_DS_METHOD_DIMIN ] =
ds_output_dimin ; ds -> mMethods [ NE_DS_METHOD_DIMAX ] = ds_dimax ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMAX ] = ds_output_dimax ; ds -> mEquationData =
s_equation_data ; ds -> mCERData = s_cer_data ; ds -> mICRData = s_icr_data ;
ds -> mVariableData = s_variable_data ; ds -> mDiscreteData = s_discrete_data
; ds -> mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mCERRanges = s_cer_range ; ds -> mICRRanges =
s_icr_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ; ds
-> mNumLargeArray = 0 ; return ( NeDynamicSystem * ) _ds ; } static int32_T
ds_assert ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmIntVector out ; int32_T t0 [ 208 ] ; int32_T b ;
( void ) t1 ; out = t2 -> mASSERT ; for ( b = 0 ; b < 208 ; b ++ ) { t0 [ b ]
= 1 ; } for ( b = 0 ; b < 208 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void
) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_passert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_iassert ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_cer ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxcer ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_v ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_del_v0 ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_del_tmax ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_t ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxdelt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dudelt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dudelt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUDELT_P ; out . mNumCol = 0ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtdelt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dtdelt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDTDELT_P ; out . mNumCol = 1ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_cache_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_init_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_lock_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_cache_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_init_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_update_i ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_lock_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update2_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_lock2_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_update2_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_lock2_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_sfp ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_sfo ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_duf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUF_P ; out . mNumCol = 0ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; real_T T_idx_0 ; T_idx_0 = t1 -> mT . mX [ 0 ] ;
out = t2 -> mDTF ; T_idx_0 = cos ( T_idx_0 * 376.99111843077515 ) *
188.49555921538757 ; out . mX [ 0 ] = - T_idx_0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_dtf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDTF_P ; out . mNumCol = 1ULL ; out . mNumRow =
77ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mIr [ 0 ] = 76 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDDF_P ; out . mNumCol = 0ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_b ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_b_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mB_P ; out . mNumCol = 0ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_c ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_c_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mC_P ; out . mNumCol = 1ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_tduf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out =
t2 -> mTDUF_P ; out . mNumCol = 0ULL ; out . mNumRow = 77ULL ; out . mJc [ 0
] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dwf (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dwf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDWF_P ; out . mNumCol = 0ULL ; out . mNumRow =
77ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dpdxf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dpdxf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDPDXF_P ; out .
mNumCol = 0ULL ; out . mNumRow = 51ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_dnf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmRealVector out ; ( void ) t1 ; out = t2 -> mDNF ; out . mX [ 0 ] = - 1.0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dnf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { static int32_T _cg_const_1 [ 106 ] = { 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
} ; PmSparsityPattern out ; int32_T b ; ( void ) t1 ; out = t2 -> mDNF_P ;
out . mNumCol = 105ULL ; out . mNumRow = 77ULL ; for ( b = 0 ; b < 106 ; b ++
) { out . mJc [ b ] = _cg_const_1 [ b ] ; } out . mIr [ 0 ] = 76 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_im ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_icr_id ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_il ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxicr ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_ddicr ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDDICR_P ; out .
mNumCol = 0ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_tduicr_p ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDUICR_P ; out . mNumCol =
0ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_icrm ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicrm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddicrm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_ddicrm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDDICRM_P ; out . mNumCol = 0ULL ; out . mNumRow =
0ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_dimin ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_dimax ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_ddm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDDM_P ; out . mNumCol = 0ULL ; out . mNumRow =
34ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dum ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dum_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDUM_P ; out .
mNumCol = 0ULL ; out . mNumRow = 34ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_dtm ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtm_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTM_P ; out .
mNumCol = 1ULL ; out . mNumRow = 34ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dpm (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dpm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDPM_P ; out . mNumCol = 0ULL ; out . mNumRow =
34ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dp_l ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dp_j ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dp_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qx ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qu ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_qt ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_q1 ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qu_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQU_P ; out .
mNumCol = 0ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_qt_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQT_P ; out . mNumCol =
1ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_q1_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQ1_P ; out .
mNumCol = 1ULL ; out . mNumRow = 77ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxy (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t12 ,
NeDsMethodOutput * t13 ) { PmRealVector out ; ( void ) t12 ; out = t13 ->
mDXY ; out . mX [ 0 ] = 1.1E-5 ; out . mX [ 1 ] = - 1.1E-5 ; out . mX [ 2 ] =
- 1.0 ; out . mX [ 3 ] = 1.1E-8 ; out . mX [ 4 ] = - 1.2099999999999998E-7 ;
out . mX [ 5 ] = 1.1E-8 ; out . mX [ 6 ] = 0.011000010999999999 ; out . mX [
7 ] = 0.0110000121 ; out . mX [ 8 ] = - 0.001 ; out . mX [ 9 ] = - 0.001 ;
out . mX [ 10 ] = - 0.011 ; out . mX [ 11 ] = 1.0 ; out . mX [ 12 ] = 1.1E-5
; ( void ) sys ; ( void ) t13 ; return 0 ; } static int32_T ds_duy ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_duy_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUY_P ; out . mNumCol = 0ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_mduy_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mMDUY_P ; out .
mNumCol = 0ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_tduy_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDUY_P ; out . mNumCol =
0ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_dty ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dty_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTY_P ; out .
mNumCol = 1ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
