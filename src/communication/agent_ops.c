/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */
/**
 * \file agent_ops.c
 * \brief Finite State Machine agent operations
 * Copyright (C) 2011 Signove Tecnologia Corporation.
 * All rights reserved.
 * Contact: Signove Tecnologia Corporation (contact@signove.com)
 *
 * $LICENSE_TEXT:BEGIN$
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation and appearing
 * in the file LICENSE included in the packaging of this file; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 * $LICENSE_TEXT:END$
 *
 * IEEE 11073 Communication Model - Finite State Machine implementation
 *
 * \author Elvis Pfutzenreuter
 * \date May 31, 2011
 */

#include "fsm.h"
#include "communication.h"

void communication_agent_aare_rejected_permanent_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_rors_cmip_get_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roer_no_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_cmip_get_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_event_report_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_confirmed_error_report_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_all_except_confirmed_error_report_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_get_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_set_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_confirmed_set_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_confirmed_action_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

void communication_agent_roiv_action_respond_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
}

extern void (specialization_populate_event_report)(APDU *apdu, void *args[]);

void communication_agent_send_event_tx(FSMContext *ctx, fsm_events evt, FSMEventData *data)
{
	APDU apdu;
	// EPX FIXME EPX arguments should come from top-level app
	specialization_populate_event_report(&apdu, 0);
	communication_send_apdu(ctx, &apdu);
}