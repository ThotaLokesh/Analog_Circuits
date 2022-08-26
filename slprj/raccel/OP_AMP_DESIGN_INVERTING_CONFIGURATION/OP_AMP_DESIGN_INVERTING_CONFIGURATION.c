#include "rt_logging_mmi.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_capi.h"
#include <math.h>
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_private.h"
#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , & stopRequested ) ; }
rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 1 ; const char_T
* gbl_raccel_Version = "9.6 (R2021b) 14-May-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S
, const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; MassMatrix rtMassMatrix ; static SimStruct model_S
; SimStruct * const rtS = & model_S ; void MdlInitialize ( void ) { int_T
tmp_e ; int_T tmp_f ; int_T tmp_g ; int_T tmp_i ; int_T tmp_j ; int_T tmp_m ;
boolean_T tmp ; boolean_T tmp_p ; SimStruct * S ; void * diag ; tmp = false ;
tmp_p = false ; if ( tmp_p || tmp ) { tmp_e = strcmp ( ssGetSolverName ( rtS
) , "daessc" ) ; tmp_i = strcmp ( ssGetSolverName ( rtS ) , "ode14x" ) ;
tmp_m = strcmp ( ssGetSolverName ( rtS ) , "ode15s" ) ; tmp_g = strcmp (
ssGetSolverName ( rtS ) , "ode1be" ) ; tmp_j = strcmp ( ssGetSolverName ( rtS
) , "ode23t" ) ; tmp_f = strcmp ( ssGetSolverName ( rtS ) , "odeN" ) ; if ( (
boolean_T ) ( ( tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 ) & ( tmp_g != 0
) & ( tmp_j != 0 ) & ( tmp_f != 0 ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "daessc" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } { static int_T modelMassMatrixIr [ 34 ]
= { 4 , 0 , 1 , 21 , 2 , 3 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15
, 16 , 17 , 18 , 19 , 20 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 ,
32 , 33 } ; static int_T modelMassMatrixJc [ 78 ] = { 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 ,
22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 34 , 34 , 34
, 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 ,
34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34
, 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 } ; static real_T
modelMassMatrixPr [ 34 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 }
; ( void ) memcpy ( rtMassMatrix . ir , modelMassMatrixIr , 34 * sizeof (
int_T ) ) ; ( void ) memcpy ( rtMassMatrix . jc , modelMassMatrixJc , 78 *
sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix . pr , modelMassMatrixPr
, 34 * sizeof ( real_T ) ) ; } } void MdlStart ( void ) { CXPtMax *
_rtXPerturbMax ; CXPtMin * _rtXPerturbMin ; NeModelParameters modelParameters
; NeModelParameters modelParameters_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_p ; real_T time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_m ; boolean_T
tmp_p ; boolean_T val ; { bool externalInputIsInDatasetFormat = false ; void
* pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; tmp = nesl_lease_simulator
( "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration_1" , 0 , 0 ) ;
rtDW . pz3pdarcwz = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
pz3pdarcwz ) ; if ( tmp_p ) {
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_gateway ( ) ; tmp =
nesl_lease_simulator (
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration_1" , 0 , 0 ) ;
rtDW . pz3pdarcwz = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS
, "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration_100" , ( void *
* ) ( & rtDW . pz3pdarcwz ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . hwc205sw25 = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . jgcr2ovqpi = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters .
mSolverTolerance = 0.001 ; modelParameters . mVariableStepSolver = true ;
modelParameters . mIsUsingODEN = false ; modelParameters . mFixedStepSize =
0.001 ; modelParameters . mStartTime = 0.0 ; modelParameters .
mLoadInitialState = false ; modelParameters . mUseSimState = false ;
modelParameters . mLinTrimCompile = false ; modelParameters . mLoggingMode =
SSC_LOGGING_NONE ; modelParameters . mRTWModifiedTimeStamp = 5.77314355E+8 ;
modelParameters . mZcDisabled = false ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; val = false ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; val = ( tmp_p &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val ;
modelParameters . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jgcr2ovqpi ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . pz3pdarcwz , &
modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . hwc205sw25 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 77 ;
simulationData -> mData -> mContStates . mX = & rtX . gib4uxfgho [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lts0pz5s0t ; simulationData -> mData ->
mModeVector . mN = 85 ; simulationData -> mData -> mModeVector . mX = & rtDW
. jna21lquio [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp_p ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp_p ; tmp_p = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_m = 0 ; simulationData
-> mData -> mInputValues . mN = 0 ; simulationData -> mData -> mInputOffsets
. mN = 1 ; simulationData -> mData -> mInputOffsets . mX = & tmp_m ;
simulationData -> mData -> mNumjacDxLo . mN = 77 ; simulationData -> mData ->
mNumjacDxLo . mX = & _rtXPerturbMin -> gib4uxfgho [ 0 ] ; simulationData ->
mData -> mNumjacDxHi . mN = 77 ; simulationData -> mData -> mNumjacDxHi . mX
= & _rtXPerturbMax -> gib4uxfgho [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jgcr2ovqpi ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pz3pdarcwz ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration_1" , 1 , 0 ) ;
rtDW . kwngz1apbg = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
kwngz1apbg ) ; if ( tmp_p ) {
OP_AMP_DESIGN_INVERTING_CONFIGURATION_d319c82e_1_gateway ( ) ; tmp =
nesl_lease_simulator (
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration_1" , 1 , 0 ) ;
rtDW . kwngz1apbg = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS
, "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration_110" , ( void *
* ) ( & rtDW . kwngz1apbg ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . fercoq4xdj = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . iendxmsxfa = ( void * ) diagnosticManager
; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_p .
mSolverTolerance = 0.001 ; modelParameters_p . mVariableStepSolver = true ;
modelParameters_p . mIsUsingODEN = false ; modelParameters_p . mFixedStepSize
= 0.001 ; modelParameters_p . mStartTime = 0.0 ; modelParameters_p .
mLoadInitialState = false ; modelParameters_p . mUseSimState = false ;
modelParameters_p . mLinTrimCompile = false ; modelParameters_p .
mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p . mRTWModifiedTimeStamp =
5.77314355E+8 ; modelParameters_p . mZcDisabled = false ; tmp_e = 0.001 ;
modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; val = false ; tmp_p = slIsRapidAcceleratorSimulating (
) ; if ( tmp_p ) { tmp_p = ssGetGlobalInitialStatesAvailable ( rtS ) ; val =
( tmp_p && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p .
mLoadInitialState = val ; modelParameters_p . mZcDisabled = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . iendxmsxfa ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
rtDW . kwngz1apbg , & modelParameters_p , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p
) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS
, msg_e ) ; } } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg ; char * msg_p ; real_T tmp_i [ 162 ] ; real_T
time ; real_T time_p ; int32_T tmp_e ; int_T tmp_m [ 2 ] ; int_T tmp_p ;
boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW . hwc205sw25 ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 77 ; simulationData -> mData -> mContStates . mX = & rtX .
gib4uxfgho [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . lts0pz5s0t ;
simulationData -> mData -> mModeVector . mN = 85 ; simulationData -> mData ->
mModeVector . mX = & rtDW . jna21lquio [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ;
tmp_p = 0 ; simulationData -> mData -> mInputValues . mN = 0 ; simulationData
-> mData -> mInputOffsets . mN = 1 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_p ; simulationData -> mData -> mOutputs . mN = 162 ;
simulationData -> mData -> mOutputs . mX = & rtB . nxvv4e2bp1 [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . jgcr2ovqpi ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; tmp_e = ne_simulator_method ( ( NeslSimulator * )
rtDW . pz3pdarcwz , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ;
if ( tmp_e != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . fercoq4xdj ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . hmczpnoz43 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . hpak2frsxz ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; simulationData ->
mData -> mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_m [ 0 ] = 0 ;
memcpy ( & tmp_i [ 0 ] , & rtB . nxvv4e2bp1 [ 0 ] , 162U * sizeof ( real_T )
) ; tmp_m [ 1 ] = 162 ; simulationData -> mData -> mInputValues . mN = 162 ;
simulationData -> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 2 ;
simulationData -> mData -> mOutputs . mX = & rtB . aj3l5kclho [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . iendxmsxfa ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( ( NeslSimulator * ) rtDW . kwngz1apbg ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_p
= rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_p )
; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
time ; int32_T tmp_e ; int_T tmp_p ; boolean_T tmp ; simulationData = (
NeslSimulationData * ) rtDW . hwc205sw25 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 77 ;
simulationData -> mData -> mContStates . mX = & rtX . gib4uxfgho [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lts0pz5s0t ; simulationData -> mData ->
mModeVector . mN = 85 ; simulationData -> mData -> mModeVector . mX = & rtDW
. jna21lquio [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_p = 0 ; simulationData
-> mData -> mInputValues . mN = 0 ; simulationData -> mData -> mInputOffsets
. mN = 1 ; simulationData -> mData -> mInputOffsets . mX = & tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jgcr2ovqpi ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_e = ne_simulator_method ( ( NeslSimulator * ) rtDW . pz3pdarcwz ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T time ; int32_T tmp_e ; int_T tmp_p ; boolean_T tmp ;
_rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData = (
NeslSimulationData * ) rtDW . hwc205sw25 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 77 ;
simulationData -> mData -> mContStates . mX = & rtX . gib4uxfgho [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lts0pz5s0t ; simulationData -> mData ->
mModeVector . mN = 85 ; simulationData -> mData -> mModeVector . mX = & rtDW
. jna21lquio [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_p = 0 ; simulationData
-> mData -> mInputValues . mN = 0 ; simulationData -> mData -> mInputOffsets
. mN = 1 ; simulationData -> mData -> mInputOffsets . mX = & tmp_p ;
simulationData -> mData -> mDx . mN = 77 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> gib4uxfgho [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jgcr2ovqpi ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pz3pdarcwz ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_e != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { } void MdlForcingFunction ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T time ; int32_T tmp_e ; int_T tmp_p ; boolean_T tmp ;
_rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData = (
NeslSimulationData * ) rtDW . hwc205sw25 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 77 ;
simulationData -> mData -> mContStates . mX = & rtX . gib4uxfgho [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lts0pz5s0t ; simulationData -> mData ->
mModeVector . mN = 85 ; simulationData -> mData -> mModeVector . mX = & rtDW
. jna21lquio [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_p = 0 ; simulationData
-> mData -> mInputValues . mN = 0 ; simulationData -> mData -> mInputOffsets
. mN = 1 ; simulationData -> mData -> mInputOffsets . mX = & tmp_p ;
simulationData -> mData -> mDx . mN = 77 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> gib4uxfgho [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jgcr2ovqpi ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pz3pdarcwz ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_e
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; real_T time ; real_T * tmp_e ; real_T * tmp_i
; int32_T tmp_m ; int_T tmp_p ; boolean_T tmp ; simulationData = (
NeslSimulationData * ) rtDW . hwc205sw25 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 77 ;
simulationData -> mData -> mContStates . mX = & rtX . gib4uxfgho [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . lts0pz5s0t ; simulationData -> mData ->
mModeVector . mN = 85 ; simulationData -> mData -> mModeVector . mX = & rtDW
. jna21lquio [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_p = 0 ; simulationData
-> mData -> mInputValues . mN = 0 ; simulationData -> mData -> mInputOffsets
. mN = 1 ; simulationData -> mData -> mInputOffsets . mX = & tmp_p ; tmp_e =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_e , rtDW . ip5qlnvaw5
) ; simulationData -> mData -> mMassMatrixPr . mN = 34 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jgcr2ovqpi ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pz3pdarcwz ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; ZCV * _rtZCSV ; char * msg ; real_T time ; int32_T tmp_e ;
int_T tmp_p ; boolean_T tmp ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector
( rtS ) ) ; simulationData = ( NeslSimulationData * ) rtDW . hwc205sw25 ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 77 ; simulationData -> mData -> mContStates . mX = & rtX .
gib4uxfgho [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . lts0pz5s0t ;
simulationData -> mData -> mModeVector . mN = 85 ; simulationData -> mData ->
mModeVector . mX = & rtDW . jna21lquio [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ;
tmp_p = 0 ; simulationData -> mData -> mInputValues . mN = 0 ; simulationData
-> mData -> mInputOffsets . mN = 1 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_p ; simulationData -> mData -> mNonSampledZCs . mN = 85 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> amn5edf0a0 ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jgcr2ovqpi ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_e = ne_simulator_method ( ( NeslSimulator * ) rtDW . pz3pdarcwz ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_e !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . jgcr2ovqpi ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . hwc205sw25 ) ; nesl_erase_simulator (
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . iendxmsxfa ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . fercoq4xdj ) ; nesl_erase_simulator (
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; } static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData
( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static
uint_T mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) ; static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) ; static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray *
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 7 ] = { "rtDW.lts0pz5s0t" , "rtDW.hmczpnoz43" ,
"rtDW.jna21lquio" , "rtDW.hpak2frsxz" , "rtDW.ip5qlnvaw5" , "rtDW.mgz5xlajnv"
, "rtDW.pxnbmemc2v" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
7 , rtdwDataFieldNames ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray ( rtdwData , 0 ,
0 , ( const void * ) & ( rtDW . lts0pz5s0t ) , sizeof ( rtDW . lts0pz5s0t ) )
; mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray ( rtdwData , 0
, 1 , ( const void * ) & ( rtDW . hmczpnoz43 ) , sizeof ( rtDW . hmczpnoz43 )
) ; mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray ( rtdwData ,
0 , 2 , ( const void * ) & ( rtDW . jna21lquio ) , sizeof ( rtDW . jna21lquio
) ) ; mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray ( rtdwData
, 0 , 3 , ( const void * ) & ( rtDW . hpak2frsxz ) , sizeof ( rtDW .
hpak2frsxz ) ) ; mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray
( rtdwData , 0 , 4 , ( const void * ) & ( rtDW . ip5qlnvaw5 ) , sizeof ( rtDW
. ip5qlnvaw5 ) ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray ( rtdwData , 0 ,
5 , ( const void * ) & ( rtDW . mgz5xlajnv ) , sizeof ( rtDW . mgz5xlajnv ) )
; mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cacheDataAsMxArray ( rtdwData , 0
, 6 , ( const void * ) & ( rtDW . pxnbmemc2v ) , sizeof ( rtDW . pxnbmemc2v )
) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_SetDWork ( const mxArray * ssDW ) {
( void ) ssDW ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( ( void * )
& ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( ( void * )
& ( rtDW . lts0pz5s0t ) , rtdwData , 0 , 0 , sizeof ( rtDW . lts0pz5s0t ) ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( ( void * )
& ( rtDW . hmczpnoz43 ) , rtdwData , 0 , 1 , sizeof ( rtDW . hmczpnoz43 ) ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( ( void * )
& ( rtDW . jna21lquio ) , rtdwData , 0 , 2 , sizeof ( rtDW . jna21lquio ) ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( ( void * )
& ( rtDW . hpak2frsxz ) , rtdwData , 0 , 3 , sizeof ( rtDW . hpak2frsxz ) ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( ( void * )
& ( rtDW . ip5qlnvaw5 ) , rtdwData , 0 , 4 , sizeof ( rtDW . ip5qlnvaw5 ) ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( ( void * )
& ( rtDW . mgz5xlajnv ) , rtdwData , 0 , 5 , sizeof ( rtDW . mgz5xlajnv ) ) ;
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_restoreDataFromMxArray ( ( void * )
& ( rtDW . pxnbmemc2v ) , rtdwData , 0 , 6 , sizeof ( rtDW . pxnbmemc2v ) ) ;
} } mxArray *
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_GetSimStateDisallowedBlocks ( ) {
mxArray * data = mxCreateCellMatrix ( 5 , 3 ) ; mwIndex subs [ 2 ] , offset ;
{ static const char * blockType [ 5 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , } ; static const char * blockPath [ 5 ] = {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration/EVAL_KEY/STATE_1"
,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
, "OP_AMP_DESIGN_INVERTING_CONFIGURATION/Scope" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Solver Configuration/EVAL_KEY/STATE_1"
, } ; static const int reason [ 5 ] = { 0 , 0 , 0 , 5 , 5 , } ; for ( subs [
0 ] = 0 ; subs [ 0 ] < 5 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 77 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
1 ) ; ssSetNumBlocks ( rtS , 31 ) ; ssSetNumBlockIO ( rtS , 2 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3461545584U ) ; ssSetChecksumVal ( rtS , 1 ,
2443424883U ) ; ssSetChecksumVal ( rtS , 2 , 703012654U ) ; ssSetChecksumVal
( rtS , 3 , 897972491U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { rtDW . ip5qlnvaw5 = 0 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 20 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
OP_AMP_DESIGN_INVERTING_CONFIGURATION_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION" ) ; ssSetPath ( rtS ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 0.1 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , } ;
static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , } ; static boolean_T rt_LoggedStateIsVarDims [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , } ; static const char_T *
rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET7" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/N-Channel MOSFET8" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/Voltage Source1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET1" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET2" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET3" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET4" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET5" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET6" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION/P-Channel MOSFET7" , } ; static const
char_T * rt_LoggedStateNames [ ] = {
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET2.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET1.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET1.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET1.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET2.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET3.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET3.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET4.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET4.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET5.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET5.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET6.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET6.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET7.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET7.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET8.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET8.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET1.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET2.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET2.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET3.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET3.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET4.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET4.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET5.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET5.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET6.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET6.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET7.capacitor_GD.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET7.capacitor_GS.vc" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET2.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET2.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET2.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET.source_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET1.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET1.gate_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET1.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET1.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET3.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET3.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET3.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET4.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET4.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET4.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET5.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET5.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET5.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET6.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET6.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET6.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET7.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET7.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET7.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET8.capacitor_GS.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.N_Channel_MOSFET8.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET7.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.Voltage_Source1.v" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET1.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET2.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET2.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET3.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET3.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET4.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET4.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET5.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET5.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET6.drain_resistor.i" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET6.mos.ids" ,
"OP_AMP_DESIGN_INVERTING_CONFIGURATION.P_Channel_MOSFET7.mos.ids" , } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , }
; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 77 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 77 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . gib4uxfgho [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . gib4uxfgho [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . gib4uxfgho [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . gib4uxfgho [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . gib4uxfgho [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . gib4uxfgho [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . gib4uxfgho [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . gib4uxfgho [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . gib4uxfgho [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . gib4uxfgho [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . gib4uxfgho [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . gib4uxfgho [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . gib4uxfgho [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . gib4uxfgho [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . gib4uxfgho [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . gib4uxfgho [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . gib4uxfgho [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . gib4uxfgho [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . gib4uxfgho [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . gib4uxfgho [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . gib4uxfgho [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . gib4uxfgho [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . gib4uxfgho [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . gib4uxfgho [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . gib4uxfgho [ 24 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . gib4uxfgho [ 25 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . gib4uxfgho [ 26 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . gib4uxfgho [ 27 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . gib4uxfgho [ 28 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . gib4uxfgho [ 29 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . gib4uxfgho [ 30 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . gib4uxfgho [ 31 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . gib4uxfgho [ 32 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . gib4uxfgho [ 33 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . gib4uxfgho [ 34 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . gib4uxfgho [ 35 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . gib4uxfgho [ 36 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . gib4uxfgho [ 37 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . gib4uxfgho [ 38 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . gib4uxfgho [ 39 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . gib4uxfgho [ 40 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . gib4uxfgho [ 41 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . gib4uxfgho [ 42 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . gib4uxfgho [ 43 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . gib4uxfgho [ 44 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . gib4uxfgho [ 45 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . gib4uxfgho [ 46 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . gib4uxfgho [ 47 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . gib4uxfgho [ 48 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . gib4uxfgho [ 49 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . gib4uxfgho [ 50 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . gib4uxfgho [ 51 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . gib4uxfgho [ 52 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . gib4uxfgho [ 53 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . gib4uxfgho [ 54 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . gib4uxfgho [ 55 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . gib4uxfgho [ 56 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . gib4uxfgho [ 57 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . gib4uxfgho [ 58 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . gib4uxfgho [ 59 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . gib4uxfgho [ 60 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . gib4uxfgho [ 61 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . gib4uxfgho [ 62 ] ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . gib4uxfgho [ 63 ] ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . gib4uxfgho [ 64 ] ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . gib4uxfgho [ 65 ] ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . gib4uxfgho [ 66 ] ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . gib4uxfgho [ 67 ] ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . gib4uxfgho [ 68 ] ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . gib4uxfgho [ 69 ] ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . gib4uxfgho [ 70 ] ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX . gib4uxfgho [ 71 ] ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtX . gib4uxfgho [ 72 ] ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtX . gib4uxfgho [ 73 ] ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtX . gib4uxfgho [ 74 ] ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtX . gib4uxfgho [ 75 ] ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtX . gib4uxfgho [ 76 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 77 ] ; static real_T absTol [ 77 ] = { 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ; static
uint8_T absTolControl [ 77 ] = { 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U } ; static real_T contStateJacPerturbBoundMinVec
[ 77 ] ; static real_T contStateJacPerturbBoundMaxVec [ 77 ] ; static uint8_T
zcAttributes [ 85 ] = { ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) } ; { int i ; for
( i = 0 ; i < 77 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.002 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "daessc" ) ; ssSetVariableStepSolver (
rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset ( rtS , true ) ;
ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector ( rtS ,
absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ;
ssSetMassMatrixNzMax ( rtS , 34 ) ; ssSetModelMassMatrix ( rtS ,
MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 34 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 85 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 85 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 34 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 77 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 34 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 3461545584U ) ;
ssSetChecksumVal ( rtS , 1 , 2443424883U ) ; ssSetChecksumVal ( rtS , 2 ,
703012654U ) ; ssSetChecksumVal ( rtS , 3 , 897972491U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_OP_AMP_DESIGN_INVERTING_CONFIGURATION_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = - 1 ; void MdlOutputsParameterSampleTime
( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
