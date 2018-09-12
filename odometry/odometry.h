/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_odometry__
#define __USER_CODE_H_odometry__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void odometry_startup();

void odometry_PI_mc_in(const asn1SccBase_commands_Motion2D *);

extern void odometry_RI_updateRigidBodyState(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
