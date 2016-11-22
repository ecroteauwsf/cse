// Copyright (c) 1997-2016 The CSE Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file.

#include "cnglob.h"
#include "ancrec.h"
#include "rccn.h"

RC BATTERY::bt_CkF()
{
	RC rc = RCOK;
	return rc;
}	// BATTERY::bt_CkF

RC BATTERY::bt_Init()
{
	RC rc = RCOK;
	bt_soe = 42.0;
	return rc;
}	// BATTERY::bt_Init

RC BATTERY::RunDup(		// copy input to run record; check and initialize
	const record* pSrc,		// input record
	int options/*=0*/)
{
	RC rc = record::RunDup(pSrc, options);
	return rc;
}	// BATTERY::RunDup
