/*******************************************************************************
 * Copyright (c) 2021, 2021 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

#ifndef omrgetsysname_h
#define omrgetsysname_h

#include "omrcomp.h"

/**
 * Get the zOS SYSNAME sysparm.
 *
 * @param[in] portLibrary The port library.
 * @param[in/out] sysname Pointer to string to populate with the SYSNAME.
 * 		On z/OS an empty string is returned if the SYSNAME is not available.
 * 		Other platforms return the "%sysname" token.
 * @param[in] length The length of the data area addressed by sysname.
 *
 * @return 0 on success, size of required buffer when the buffer is not big enough
 */
uintptr_t omrget_sysname(struct OMRPortLibrary *portLibrary, char *sysname, uintptr_t length);

#endif /* omrgetsysname_h */