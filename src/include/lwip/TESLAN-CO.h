/**
 * @file
 * IP API
 */

/*
 * Copyright (c) 2017-2019 UL CORP LTD.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 *
 * This file is part of the lwIP TCP/IP stack.
 *
 * Author: instagram: hr_faruk
 *
 */

#ifndef LWIP_HDR_IP_H
#define LWIP_HDR_IP_H
#ifndef LWIP_HDR_TCP_H
#define LWIP_HDR_TCP_H
#ifndef LWIP_HDR_UDP_H
#define LWIP_HDR_UDP_H
#ifndef LWIP_HDR_ICMP_H
#define LWIP_HDR_ICMP_H

#include "lwip/opt.h"

#include "lwip/def.h"
#include "lwip/pbuf.h"
#include "lwip/ip_addr.h"
#include "lwip/err.h"
#include "lwip/netif.h"
#include "lwip/ip4.h"
#include "lwip/ip6.h"
#include "lwip/prot/ip.h"
//ip.h library

#include "lwip/tcpbase.h"
#include "lwip/mem.h"
#include "lwip/ip.h"
#include "lwip/icmp.h"
#include "lwip/err.h"
#include "lwip/timeouts.h"
#include "lwip/ip6.h"
#include "lwip/ip6_addr.h"
#include "lwip/prot/udp.h"
//tcp.h library

#if LWIP_UDP /* don't build if not configured for use in lwipopts.h */
#if LWIP_TCP /* don't build if not configured for use in lwipopts.h */

#if LWIP_IPV6 && LWIP_ICMP6
#include "lwip/icmp6.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
