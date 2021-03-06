/*
 * Copyright (c) 2014 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

#ifndef QDM_QEO_REGISTRATIONREQUEST_H_
#define QDM_QEO_REGISTRATIONREQUEST_H_

#include <qeo/types.h>
#include "qeo_types.h"


/**
 * Basic device info published by any unregistered Qeo-enabled device.
 */
typedef struct {
    /**
     * [Key] The device identification generated by Qeo.
     */
    org_qeo_system_DeviceId_t deviceId;
    /**
     * [Key] The PEM-encoded public key generated by the remote device requesting a registration.
     */
    char * rsaPublicKey;
    /**
     * [Key] Version number indicating the encryption/padding algorithm supported.
     */
    int16_t version;
    /**
     * [Key] The manufacturer of the device (human readable string).
     */
    char * manufacturer;
    /**
     * [Key] Model name of the device (human readable string).
     */
    char * modelName;
    /**
     * [Key] Descriptive name of the device.
     */
    char * userFriendlyName;
    /**
     * [Key] Suggested user name.
     */
    char * userName;
    /**
     * Registration status. Enumeration of the following states: UNREGISTERED, REGISTERING.
     */
    int16_t registrationStatus;
    /**
     * Error code. Enumeration of the following errors: NONE, CANCELLED, REMOTE_REGISTRATION_TIMEOUT, PLATFORM_FAILURE, INVALID_OTP, INTERNAL_ERROR, NETWORK_FAILURE, SSL_HANDSHAKE_FAILURE, RECEIVED_INVALID_CREDENTIALS, STORE_FAILURE, UNKNOWN.
     */
    int16_t errorCode;
    /**
     * Error message in case of registration failure.
     */
    char * errorMessage;
} org_qeo_system_RegistrationRequest_t;
extern const DDS_TypeSupport_meta org_qeo_system_RegistrationRequest_type[];


#endif /* QDM_QEO_REGISTRATIONREQUEST_H_ */

