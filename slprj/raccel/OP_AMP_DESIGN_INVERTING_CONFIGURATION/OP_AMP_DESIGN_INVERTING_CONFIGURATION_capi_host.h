#ifndef RTW_HEADER_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cap_host_h__
#define RTW_HEADER_OP_AMP_DESIGN_INVERTING_CONFIGURATION_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
OP_AMP_DESIGN_INVERTING_CONFIGURATION_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void OP_AMP_DESIGN_INVERTING_CONFIGURATION_host_InitializeDataMapInfo (
OP_AMP_DESIGN_INVERTING_CONFIGURATION_host_DataMapInfo_T * dataMap , const
char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
