#ifndef RTW_HEADER_OP_AMP_DESIGN_INVERTING_CONFIGURATION_h_
#define RTW_HEADER_OP_AMP_DESIGN_INVERTING_CONFIGURATION_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef OP_AMP_DESIGN_INVERTING_CONFIGURATION_COMMON_INCLUDES_
#define OP_AMP_DESIGN_INVERTING_CONFIGURATION_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_gateway.h"
#endif
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME OP_AMP_DESIGN_INVERTING_CONFIGURATION
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (2) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (77)   
#elif NCSTATES != 77
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T nxvv4e2bp1 [ 162 ] ; real_T aj3l5kclho [ 2 ] ; } B ;
typedef struct { real_T lts0pz5s0t ; real_T hmczpnoz43 ; void * pz3pdarcwz ;
void * hwc205sw25 ; void * jgcr2ovqpi ; void * fjfw0dcaf2 ; void * ky5vpfqkwx
; void * kwngz1apbg ; void * fercoq4xdj ; void * iendxmsxfa ; void *
a3oxffzyld ; void * bxa5thdurk ; struct { void * LoggedData [ 2 ] ; }
lgrubzxtrp ; int_T jna21lquio [ 85 ] ; int_T hpak2frsxz ; int32_T ip5qlnvaw5
; boolean_T mgz5xlajnv ; boolean_T pxnbmemc2v ; } DW ; typedef struct {
real_T gib4uxfgho [ 77 ] ; } X ; typedef struct { real_T gib4uxfgho [ 77 ] ;
} XDot ; typedef struct { boolean_T gib4uxfgho [ 77 ] ; } XDis ; typedef
struct { real_T gib4uxfgho [ 77 ] ; } CStateAbsTol ; typedef struct { real_T
gib4uxfgho [ 77 ] ; } CXPtMin ; typedef struct { real_T gib4uxfgho [ 77 ] ; }
CXPtMax ; typedef struct { real_T amn5edf0a0 ; real_T hpryzwbef1 ; real_T
lfw20r3w5p ; real_T cu4dn245qz ; real_T dwg5tlzwxh ; real_T jxhj4o3cex ;
real_T bco4ecq0ro ; real_T cg0bq15mjw ; real_T idswl1vy0j ; real_T fttcqas0af
; real_T iyoptnhcie ; real_T p1bjhad2yk ; real_T oycsjrro5s ; real_T
dhg3bisc5g ; real_T b4gjk3ksof ; real_T d2yxr1gwkm ; real_T pynosfxrj5 ;
real_T cbrxdqla1k ; real_T dfi2eodun2 ; real_T lnddejkusi ; real_T cxzl5fs3qm
; real_T f0qasd3cum ; real_T kfoi0cndqz ; real_T fcqiz1knrq ; real_T
avg2542r5w ; real_T ly4yurscq2 ; real_T csk4nig01h ; real_T k5m3qelwqy ;
real_T neqcb3d34w ; real_T kx3jttehgc ; real_T gbpjtdk2i1 ; real_T iuielj0or4
; real_T bfzkmhumk4 ; real_T aame5mgbbc ; real_T mw4p2aezdv ; real_T
georu22c5e ; real_T gxwvcdagpv ; real_T hslx2gemns ; real_T huthnc3b12 ;
real_T ceymwomefi ; real_T ot0r31iy04 ; real_T g0pnufictw ; real_T j5ozltzrtd
; real_T elnrkvujcu ; real_T kgku5x3mdz ; real_T dnjyzinwdn ; real_T
hqmz1xtkr4 ; real_T hwnwvxkd51 ; real_T j302ellww0 ; real_T dp1d4gwtcw ;
real_T ftvrki2ush ; real_T gareencrkk ; real_T lcwmw0o3rb ; real_T cc1fe4dkk4
; real_T asy022rkfj ; real_T hptvipogx3 ; real_T mhbiy0h3rz ; real_T
cmll1tv2wr ; real_T beflhsom1r ; real_T f3nc0rkie5 ; real_T mekwmn5pkg ;
real_T kpzqkbriab ; real_T j12jyymlws ; real_T hadd1eg2fd ; real_T gbg0hvlzxb
; real_T nc4ovpgabg ; real_T frnsevjisa ; real_T msqp44dory ; real_T
ja22mbtc5d ; real_T isylha4qn5 ; real_T eliczjbiop ; real_T ko5dxixkve ;
real_T mlme3ysmam ; real_T gvq23qwpu4 ; real_T blzbcgnfsy ; real_T pz5dk5obbt
; real_T eixks5nzr3 ; real_T glvjktoc3f ; real_T ltcjxvbt0n ; real_T
k1fo3cieud ; real_T ij04lat1uy ; real_T nvvyhaggsp ; real_T d1wujdwvac ;
real_T e0pdgfw0k5 ; real_T k5ec1id1du ; } ZCV ; typedef struct { int_T ir [
34 ] ; int_T jc [ 78 ] ; real_T pr [ 34 ] ; } MassMatrix ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern MassMatrix rtMassMatrix ; extern mxArray *
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_GetDWork ( ) ; extern void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_SetDWork ( const mxArray * ssDW ) ;
extern mxArray *
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
OP_AMP_DESIGN_INVERTING_CONFIGURATION_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
