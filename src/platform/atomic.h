/*!The Treasure Platform Library
 * 
 * TPlat is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TPlat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TPlat; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2011, ruki All rights reserved.
 *
 * \author		ruki
 * \file		atomic.h
 *
 */
#ifndef TB_PLATFORM_ATOMIC_H
#define TB_PLATFORM_ATOMIC_H


/* /////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

#if defined(TB_COMPILER_IS_GCC) && \
		(__GNUC__ >= 4 && __GNUC_MINOR__ >= 1)
# 	include "compiler/gcc/atomic.h"
#elif defined(TB_CONFIG_OS_WINDOWS)
//# 	include "windows/atomic.h"
#endif

#include "arch/atomic.h"
#include "stub/atomic.h"


#endif
