/* BFD support for Athena.
   Copyright (C) 2022 d0p1.

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"

const bfd_arch_info_type bfd_athena_arch =
{
	/* word size */
	32,

	/* address size */
	32,

	/* byte size */
	8,

	/* arch enum */
	bfd_arch_athena,

	/* machine num */
	bfd_mach_athena,

	/* arch name */
	"athena",

	/* printable name */
	"Athena",

	/* alligment */
	4,

	/* is default */
	true,

	/* default check compat */
	bfd_default_compatible,

	/* */
	bfd_default_scan,

	/* memory alloc */
	bfd_arch_default_fill,

	NULL,
	
	0
};
