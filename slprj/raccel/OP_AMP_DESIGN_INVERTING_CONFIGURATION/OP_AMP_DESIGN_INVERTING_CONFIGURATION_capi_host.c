#include "OP_AMP_DESIGN_INVERTING_CONFIGURATION_capi_host.h"
static OP_AMP_DESIGN_INVERTING_CONFIGURATION_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        OP_AMP_DESIGN_INVERTING_CONFIGURATION_host_InitializeDataMapInfo(&(root), "OP_AMP_DESIGN_INVERTING_CONFIGURATION");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
