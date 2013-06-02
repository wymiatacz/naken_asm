/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2010-2013 by Michael Kohn
 *
 */

#include "table_thumb.h"

struct _table_thumb table_thumb[] =
{
  { "lsl", 0x0000, 0xf800, OP_SHIFT, -1 },
  { "lsr", 0x0800, 0xf800, OP_SHIFT, -1 },
  { "asr", 0x1000, 0xf800, OP_SHIFT, -1 },
  { NULL, 0, 0, 0, 0 }
};

