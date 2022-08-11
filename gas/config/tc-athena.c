/* tc-athena.c -- Assemble for the Athena ISA

   Copyright (C) 2022 d0p1.

   This file is part of GAS.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the license, or
   (at your option) any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "as.h"
#include "bfd.h"


const char *md_shortopts = "";
struct option md_longopts[] = {};
size_t md_longopts_size = sizeof(md_longopts);

const char comment_chars[] = "";
const char line_comment_chars[] = "//";
const char line_separator_chars[] = ";";

const char EXP_CHARS[] = "";
const char FLT_CHARS[] = "";

const pseudo_typeS md_pseudo_table[] =
{
	{ NULL, NULL, 0 }
};

int md_parse_option(int c, const char *arg)
{
	(void)c;
	(void)arg;
	return (0);
}

void md_show_usage(FILE *stream)
{
	fprintf(stream, "Athena Hello\n");
}

void md_begin(void)
{

}

void md_assemble(char *insn_str)
{
	(void)insn_str;
}

symbolS *md_undefined_symbol(char *name)
{
	(void)name;

	return (NULL);
}

const char *md_atof(int type, char *lit, int *size)
{
	(void)type;
	(void)lit;
	(void)size;
	return (NULL);
}

valueT md_section_align(asection *seg, valueT val)
{
	(void)seg;
	(void)val;

	return (0);
}

void md_convert_frag(bfd *abfd, asection *seg, fragS *fragp)
{
	(void)abfd;
	(void)seg;
	(void)fragp;
}

void md_apply_fix(fixS *fixp, valueT *val, segT seg)
{
	(void)fixp;
	(void)val;
	(void)seg;
}

arelent *tc_gen_reloc(asection *seg, fixS *fixp)
{
	(void)seg;
	(void)fixp;

	return (NULL);
}

long md_pcrel_from(fixS *fixp)
{
	(void)fixp;
	return 0;
}

int md_estimate_size_before_relax(fragS *fragp, asection *seg)
{
	(void)fragp;
	(void)seg;

	as_fatal(_("wtf bro"));
	return (0);
}
