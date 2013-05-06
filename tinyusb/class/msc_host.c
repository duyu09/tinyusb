/**************************************************************************/
/*!
    @file     msc_host.c
    @author   hathach (tinyusb.org)

    @section LICENSE

    Software License Agreement (BSD License)

    Copyright (c) 2013, hathach (tinyusb.org)
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
    3. Neither the name of the copyright holders nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    INCLUDING NEGLIGENCE OR OTHERWISE ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

    This file is part of the tinyusb stack.
*/
/**************************************************************************/

#include "tusb_option.h"

#if MODE_HOST_SUPPORTED & TUSB_CFG_HOST_MSC

#define _TINY_USB_SOURCE_FILE_

//--------------------------------------------------------------------+
// INCLUDE
//--------------------------------------------------------------------+
#include "common/common.h"
#include "msc_host.h"

//--------------------------------------------------------------------+
// MACRO CONSTANT TYPEDEF
//--------------------------------------------------------------------+

//--------------------------------------------------------------------+
// INTERNAL OBJECT & FUNCTION DECLARATION
//--------------------------------------------------------------------+

//--------------------------------------------------------------------+
// IMPLEMENTATION
//--------------------------------------------------------------------+
void msch_init(void)
{

}

tusb_error_t msch_open_subtask(uint8_t dev_addr, tusb_descriptor_interface_t const *descriptor, uint16_t *p_length)
{
  return TUSB_ERROR_NONE;
}

void msch_isr(pipe_handle_t pipe_hdl, tusb_event_t event)
{

}

void msch_close(uint8_t dev_addr)
{

}


#endif
