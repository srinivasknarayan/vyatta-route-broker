/*
 * Copyright (c) 2018, AT&T Intellectual Property.  All rights reserved.
 *
 * SPDX-License-Identifier: MPL-2.0
 */

#ifndef __ROUTE_BROKER_DP_DATA__
#define  __ROUTE_BROKER_DP_DATA__

#include <czmq.h>
#include <zmq.h>

/*
 * Create a new dataplane client for the broker.
 */
void broker_dp_data_client(zsock_t *pipe, void *arg);

#endif /* __ROUTE_BROKER_DP_DATA__ */
