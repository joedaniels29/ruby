
#include <stdlib.h>

#pragma GCC visibility push(default)
void *ruby_xmalloc(size_t);
void *ruby_xmalloc2(size_t, size_t);
void *ruby_xcalloc(size_t, size_t);
void *ruby_xrealloc(void *, size_t);
void *ruby_xrealloc2(void *, size_t, size_t);
void ruby_xfree(void *);
/* MB_CUR_MAX will not work well in C locale */
#pragma GCC visibility pop
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

typedef __builtin_va_list va_list;

/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */

/* Hack required to make standard headers work, at least on Ubuntu */

typedef __builtin_va_list __gnuc_va_list;

#pragma GCC visibility push(default)

/* Make alloca work the best possible way.  */
typedef unsigned long VALUE;
typedef unsigned long ID;
typedef char ruby_check_sizeof_int[4 == sizeof(int) ? 1 : -1];
typedef char ruby_check_sizeof_long[8 == sizeof(long) ? 1 : -1];

typedef char ruby_check_sizeof_long_long[8 == sizeof(long long) ? 1 : -1];

typedef char ruby_check_sizeof_voidp[8 == sizeof(void *) ? 1 : -1];
/*===---- limits.h - Standard header for integer sizes --------------------===*\
 *
 * Copyright (c) 2009 Chris Lattner
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
\*===----------------------------------------------------------------------===*/

/* The system's limits.h may, in turn, try to #include_next GCC's limits.h.
   Avert this #include_next madness. */

/* System headers include a number of constants from POSIX in <limits.h>.
   Include it if we're hosted. */

/*
 * Copyright (c) 2000, 2004-2007, 2009 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
/*	$NetBSD: limits.h,v 1.8 1996/10/21 05:10:50 jtc Exp $	*/

/*
 * Copyright (c) 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)limits.h	8.2 (Berkeley) 1/4/94
 */

/* This is the `system' limits.h, independent of any particular
   compiler.  GCC provides its own limits.h which can be found in
   /usr/lib/gcc, although it is not very informative.
   This file is public domain.  */

/*
 * Copyright (c) 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)limits.h	8.3 (Berkeley) 1/4/94
 */

/*
 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 *
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */

/*
 * According to ANSI (section 2.2.4.2), the values below must be usable by
 * #if preprocessing directives.  Additionally, the expression must have the
 * same type as would an expression that is an object of the corresponding
 * type converted according to the integral promotions.  The subtraction for
 * INT_MIN and LONG_MIN is so the value is not unsigned; 2147483648 is an
 * unsigned int for 32-bit two's complement ANSI compilers (section 3.1.3.2).
 * These numbers work for pcc as well.  The UINT_MAX and ULONG_MAX values
 * are written as hex so that GCC will be quiet about large integer constants.
 */
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*	$NetBSD: syslimits.h,v 1.15 1997/06/25 00:48:09 lukem Exp $	*/

/*
 * Copyright (c) 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)syslimits.h	8.1 (Berkeley) 6/2/93
 */

/*
 * Note: CHILD_MAX *must* be less than hard_maxproc, which is set at
 * compile time; you *cannot* set it higher than the hard limit!!
 */
/* = ((PRIO_MAX - PRIO_MIN) / 2) + 1 */
/* range: 0 - 39 [(2 * NZERO) - 1] */
/* 0 is not actually used */
/* Actually for XSI Visible */

/* Removed in Issue 6 */
/* NZERO to be defined here. TBD. See also sys/param.h  */

/* Many system headers try to "help us out" by defining these.  No really, we
   know how big each datatype is. */
/* C90/99 5.2.4.2.1 */
/* C99 5.2.4.2.1: Added long long.
   C++11 18.3.3.2: same contents as the Standard C Library header <limits.h>.
 */
/* LONG_LONG_MIN/LONG_LONG_MAX/ULONG_LONG_MAX are a GNU extension.  It's too bad
   that we don't have something like #pragma poison that could be used to
   deprecate a macro - the code should just use LLONG_MAX and friends.
 */
VALUE rb_int2inum(long);

VALUE rb_uint2inum(VALUE);

VALUE rb_ll2inum(long long);

VALUE rb_ull2inum(unsigned long long);
__attribute__((__noreturn__)) void rb_out_of_int(long num);

static inline int rb_long2int_inline(long n) {
  int i = (int)n;
  if ((long)i != n)
    rb_out_of_int(n);

  return i;
}
static inline long rb_fix2long(VALUE x) {
  return ((long)(((long)(x)) >> (int)(1)));
}

static inline unsigned long rb_fix2ulong(VALUE x) {
  return ((unsigned long)((long)(((long)(x)) >> (int)(1))));
}
ID rb_sym2id(VALUE);
VALUE rb_id2sym(ID);
/* Module#methods, #singleton_methods and so on return Symbols */

/* special constants - i.e. non-zero and non-fixnum constants */
enum ruby_special_consts {

  RUBY_Qfalse = 0x00, /* ...0000 0000 */
  RUBY_Qtrue = 0x14,  /* ...0001 0100 */
  RUBY_Qnil = 0x08,   /* ...0000 1000 */
  RUBY_Qundef = 0x34, /* ...0011 0100 */

  RUBY_IMMEDIATE_MASK = 0x07,
  RUBY_FIXNUM_FLAG = 0x01, /* ...xxxx xxx1 */
  RUBY_FLONUM_MASK = 0x03,
  RUBY_FLONUM_FLAG = 0x02, /* ...xxxx xx10 */
  RUBY_SYMBOL_FLAG = 0x0c, /* ...0000 1100 */
  RUBY_SPECIAL_SHIFT = 8
};
enum ruby_value_type {
  RUBY_T_NONE = 0x00,

  RUBY_T_OBJECT = 0x01,
  RUBY_T_CLASS = 0x02,
  RUBY_T_MODULE = 0x03,
  RUBY_T_FLOAT = 0x04,
  RUBY_T_STRING = 0x05,
  RUBY_T_REGEXP = 0x06,
  RUBY_T_ARRAY = 0x07,
  RUBY_T_HASH = 0x08,
  RUBY_T_STRUCT = 0x09,
  RUBY_T_BIGNUM = 0x0a,
  RUBY_T_FILE = 0x0b,
  RUBY_T_DATA = 0x0c,
  RUBY_T_MATCH = 0x0d,
  RUBY_T_COMPLEX = 0x0e,
  RUBY_T_RATIONAL = 0x0f,

  RUBY_T_NIL = 0x11,
  RUBY_T_TRUE = 0x12,
  RUBY_T_FALSE = 0x13,
  RUBY_T_SYMBOL = 0x14,
  RUBY_T_FIXNUM = 0x15,
  RUBY_T_UNDEF = 0x16,

  RUBY_T_IMEMO = 0x1a,
  RUBY_T_NODE = 0x1b,
  RUBY_T_ICLASS = 0x1c,
  RUBY_T_ZOMBIE = 0x1d,

  RUBY_T_MASK = 0x1f
};
static inline int rb_type(VALUE obj);
/* RB_GC_GUARD_PTR() is an intermediate macro, and has no effect by
 * itself.  don't use it directly */
void rb_check_type(VALUE, int);

VALUE rb_str_to_str(VALUE);
VALUE rb_string_value(volatile VALUE *);
char *rb_string_value_ptr(volatile VALUE *);
char *rb_string_value_cstr(volatile VALUE *);

void rb_check_safe_obj(VALUE);
VALUE rb_str_export(VALUE);

VALUE rb_str_export_locale(VALUE);

VALUE rb_get_path(VALUE);

VALUE rb_get_path_no_checksafe(VALUE);

void rb_secure(int);
int rb_safe_level(void);
void rb_set_safe_level(int);
void rb_set_safe_level_force(int);
void rb_secure_update(VALUE);
__attribute__((__noreturn__)) void rb_insecure_operation(void);

VALUE rb_errinfo(void);
void rb_set_errinfo(VALUE);

long rb_num2long(VALUE);
unsigned long rb_num2ulong(VALUE);
static inline long rb_num2long_inline(VALUE x) {
  if ((((int)(long)(x)) & RUBY_FIXNUM_FLAG))
    return ((long)(((long)(x)) >> (int)(1)));
  else
    return rb_num2long(x);
}

static inline unsigned long rb_num2ulong_inline(VALUE x) {
  if ((((int)(long)(x)) & RUBY_FIXNUM_FLAG))
    return ((unsigned long)((long)(((long)(x)) >> (int)(1))));
  else
    return rb_num2ulong(x);
}

long rb_num2int(VALUE);
long rb_fix2int(VALUE);

static inline int rb_num2int_inline(VALUE x) {
  if ((((int)(long)(x)) & RUBY_FIXNUM_FLAG))
    return (int)rb_fix2int(x);
  else
    return (int)rb_num2int(x);
}

unsigned long rb_num2uint(VALUE);

unsigned long rb_fix2uint(VALUE);
short rb_num2short(VALUE);
unsigned short rb_num2ushort(VALUE);
short rb_fix2short(VALUE);
unsigned short rb_fix2ushort(VALUE);

static inline short rb_num2short_inline(VALUE x) {
  if ((((int)(long)(x)) & RUBY_FIXNUM_FLAG))
    return rb_fix2short(x);
  else
    return rb_num2short(x);
}

long long rb_num2ll(VALUE);
unsigned long long rb_num2ull(VALUE);
static inline long long rb_num2ll_inline(VALUE x) {
  if ((((int)(long)(x)) & RUBY_FIXNUM_FLAG))
    return ((long)(((long)(x)) >> (int)(1)));
  else
    return rb_num2ll(x);
}
double rb_num2dbl(VALUE);

VALUE rb_uint2big(VALUE);
VALUE rb_int2big(long);

VALUE rb_newobj(void);
VALUE rb_newobj_of(VALUE, VALUE);
VALUE rb_obj_setup(VALUE obj, VALUE klass, VALUE type);
enum ruby_fl_type {
  RUBY_FL_WB_PROTECTED = (1 << 5),
  RUBY_FL_PROMOTED0 = (1 << 5),
  RUBY_FL_PROMOTED1 = (1 << 6),
  RUBY_FL_PROMOTED = RUBY_FL_PROMOTED0 | RUBY_FL_PROMOTED1,
  RUBY_FL_FINALIZE = (1 << 7),
  RUBY_FL_TAINT = (1 << 8),
  RUBY_FL_UNTRUSTED = RUBY_FL_TAINT,
  RUBY_FL_EXIVAR = (1 << 10),
  RUBY_FL_FREEZE = (1 << 11),

  RUBY_FL_USHIFT = 12,

  RUBY_FL_USER0 = (1 << (RUBY_FL_USHIFT + 0)),
  RUBY_FL_USER1 = (1 << (RUBY_FL_USHIFT + 1)),
  RUBY_FL_USER2 = (1 << (RUBY_FL_USHIFT + 2)),
  RUBY_FL_USER3 = (1 << (RUBY_FL_USHIFT + 3)),
  RUBY_FL_USER4 = (1 << (RUBY_FL_USHIFT + 4)),
  RUBY_FL_USER5 = (1 << (RUBY_FL_USHIFT + 5)),
  RUBY_FL_USER6 = (1 << (RUBY_FL_USHIFT + 6)),
  RUBY_FL_USER7 = (1 << (RUBY_FL_USHIFT + 7)),
  RUBY_FL_USER8 = (1 << (RUBY_FL_USHIFT + 8)),
  RUBY_FL_USER9 = (1 << (RUBY_FL_USHIFT + 9)),
  RUBY_FL_USER10 = (1 << (RUBY_FL_USHIFT + 10)),
  RUBY_FL_USER11 = (1 << (RUBY_FL_USHIFT + 11)),
  RUBY_FL_USER12 = (1 << (RUBY_FL_USHIFT + 12)),
  RUBY_FL_USER13 = (1 << (RUBY_FL_USHIFT + 13)),
  RUBY_FL_USER14 = (1 << (RUBY_FL_USHIFT + 14)),
  RUBY_FL_USER15 = (1 << (RUBY_FL_USHIFT + 15)),
  RUBY_FL_USER16 = (1 << (RUBY_FL_USHIFT + 16)),
  RUBY_FL_USER17 = (1 << (RUBY_FL_USHIFT + 17)),
  RUBY_FL_USER18 = (1 << (RUBY_FL_USHIFT + 18)),

  RUBY_FL_USER19 = (1 << (RUBY_FL_USHIFT + 19)),

  RUBY_ELTS_SHARED = RUBY_FL_USER2,
  RUBY_FL_DUPPED = (RUBY_T_MASK | RUBY_FL_EXIVAR | RUBY_FL_TAINT),
  RUBY_FL_SINGLETON = RUBY_FL_USER0
};

struct RBasic {
  VALUE flags;
  const VALUE klass;
}

__attribute__((aligned(sizeof(VALUE))))

;

VALUE rb_obj_hide(VALUE obj);
VALUE rb_obj_reveal(
    VALUE obj,
    VALUE klass); /* do not use this API to change klass information */
enum {
  ROBJECT_EMBED_LEN_MAX = 3,
  ROBJECT_EMBED = RUBY_FL_USER1,

  ROBJECT_ENUM_END
};

struct RObject {
  struct RBasic basic;
  union {
    struct {
      long numiv; /* only uses 32-bits */
      VALUE *ivptr;
      void *iv_index_tbl; /* shortcut for RCLASS_IV_INDEX_TBL(rb_obj_class(obj))
                             */
    } heap;
    VALUE ary[ROBJECT_EMBED_LEN_MAX];
  } as;
};
struct RClassDeprecated {
  struct RBasic basic;
} __attribute__((__deprecated__("RClass is internal use only")));
enum {
  RMODULE_IS_OVERLAID = RUBY_FL_USER2,
  RMODULE_IS_REFINEMENT = RUBY_FL_USER3,
  RMODULE_INCLUDED_INTO_REFINEMENT = RUBY_FL_USER4,

  RMODULE_ENUM_END
};

double rb_float_value(VALUE);
VALUE rb_float_new(double);
VALUE rb_float_new_in_heap(double);
enum {
  RSTRING_NOEMBED = RUBY_FL_USER1,
  RSTRING_EMBED_LEN_MASK = (RUBY_FL_USER2 | RUBY_FL_USER3 | RUBY_FL_USER4 |
                            RUBY_FL_USER5 | RUBY_FL_USER6),
  RSTRING_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT + 2),
  RSTRING_EMBED_LEN_MAX = (int)((sizeof(VALUE) * 3) / sizeof(char) - 1),
  RSTRING_FSTR = RUBY_FL_USER17,

  RSTRING_ENUM_END
};
struct RString {
  struct RBasic basic;
  union {
    struct {
      long len;
      char *ptr;
      union {
        long capa;
        VALUE shared;
      } aux;
    } heap;
    char ary[RSTRING_EMBED_LEN_MAX + 1];
  } as;
};
enum {
  RARRAY_EMBED_LEN_MAX = 3,
  RARRAY_EMBED_FLAG = RUBY_FL_USER1,
  /* RUBY_FL_USER2 is for ELTS_SHARED */
  RARRAY_EMBED_LEN_MASK = (RUBY_FL_USER4 | RUBY_FL_USER3),
  RARRAY_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT + 3),

  RARRAY_ENUM_END
};
struct RArray {
  struct RBasic basic;
  union {
    struct {
      long len;
      union {
        long capa;
        VALUE shared;
      } aux;
      const VALUE *ptr;
    } heap;
    const VALUE ary[RARRAY_EMBED_LEN_MAX];
  } as;
};
struct RRegexp {
  struct RBasic basic;
  struct re_pattern_buffer *ptr;
  const VALUE src;
  unsigned long usecnt;
};

/* RHASH_TBL allocates st_table if not available. */

struct RFile {
  struct RBasic basic;
  struct rb_io_t *fptr;
};

struct RData {
  struct RBasic basic;
  void (*dmark)(void *);
  void (*dfree)(void *);
  void *data;
};

typedef struct rb_data_type_struct rb_data_type_t;

struct rb_data_type_struct {
  const char *wrap_struct_name;
  struct {
    void (*dmark)(void *);
    void (*dfree)(void *);
    size_t (*dsize)(const void *);
    void *reserved[2]; /* For future extension.
                                 This array *must* be filled with ZERO. */
  } function;
  const rb_data_type_t *parent;
  void *data;  /* This area can be used for any purpose
                         by a programmer who define the type. */
  VALUE flags; /* RUBY_FL_WB_PROTECTED */
};

struct RTypedData {
  struct RBasic basic;
  const rb_data_type_t *type;
  VALUE typed_flag; /* 1 or not */
  void *data;
};

/*
#define RUBY_DATA_FUNC(func) ((void (*)(void*))(func))
*/
typedef void (*RUBY_DATA_FUNC)(void *);
VALUE rb_data_object_wrap(VALUE, void *, RUBY_DATA_FUNC, RUBY_DATA_FUNC);
VALUE rb_data_object_zalloc(VALUE, size_t, RUBY_DATA_FUNC, RUBY_DATA_FUNC);
VALUE rb_data_typed_object_wrap(VALUE klass, void *datap,
                                const rb_data_type_t *);
VALUE rb_data_typed_object_zalloc(VALUE klass, size_t size,
                                  const rb_data_type_t *type);
int rb_typeddata_inherited_p(const rb_data_type_t *child,
                             const rb_data_type_t *parent);
int rb_typeddata_is_kind_of(VALUE, const rb_data_type_t *);
void *rb_check_typeddata(VALUE, const rb_data_type_t *);

/* bits for rb_data_type_struct::flags */
enum {
  RSTRUCT_EMBED_LEN_MAX = 3,
  RSTRUCT_EMBED_LEN_MASK = (RUBY_FL_USER2 | RUBY_FL_USER1),
  RSTRUCT_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT + 1),

  RSTRUCT_ENUM_END
};

struct RStruct {
  struct RBasic basic;
  union {
    struct {
      long len;
      const VALUE *ptr;
    } heap;
    const VALUE ary[RSTRUCT_EMBED_LEN_MAX];
  } as;
};
void rb_freeze_singleton_class(VALUE klass);

static inline void rb_obj_freeze_inline(VALUE x) {
  if ((!(((VALUE)(x)&RUBY_IMMEDIATE_MASK) ||
         !!(((VALUE)(x) & ~((VALUE)RUBY_Qnil)) == 0)) &&
       (int)(((struct RBasic *)(x))->flags & RUBY_T_MASK) != RUBY_T_NODE)) {
    (void)(((struct RBasic *)(x))->flags |= RUBY_FL_FREEZE);
    if ((((struct RBasic *)(x))->klass) &&
        !(((struct RBasic *)(x))->flags & RUBY_FL_SINGLETON)) {
      rb_freeze_singleton_class(x);
    }
  }
}
static inline void *rb_data_object_get(VALUE obj) {
  rb_check_type((VALUE)(obj), (RUBY_T_DATA));
  return ((struct RData *)obj)->data;
}
static inline VALUE rb_data_object_make(VALUE klass, RUBY_DATA_FUNC mark_func,
                                        RUBY_DATA_FUNC free_func, void **datap,
                                        size_t size) {
  VALUE result =
      rb_data_object_zalloc((klass), (size), (RUBY_DATA_FUNC)(mark_func),
                            (RUBY_DATA_FUNC)(free_func));
  (void)((*datap) = (void *)(((struct RData *)(result))->data));
  ;
  return result;
}

static inline VALUE rb_data_typed_object_make(VALUE klass,
                                              const rb_data_type_t *type,
                                              void **datap, size_t size) {
  VALUE result = rb_data_typed_object_zalloc(klass, size, type);
  (void)((*datap) = (void *)(((struct RData *)(result))->data));
  ;
  return result;
}

__attribute__((__deprecated__("by "
                              "rb_data_object_wrap"))) static inline VALUE
rb_data_object_alloc(VALUE, void *, RUBY_DATA_FUNC, RUBY_DATA_FUNC);
static inline VALUE rb_data_object_alloc(VALUE klass, void *data,
                                         RUBY_DATA_FUNC dmark,
                                         RUBY_DATA_FUNC dfree) {
  return rb_data_object_wrap(klass, data, dmark, dfree);
}

__attribute__((__deprecated__("by "
                              "rb_data_typed_object_wrap"))) static inline VALUE
rb_data_typed_object_alloc(VALUE, void *, const rb_data_type_t *);
static inline VALUE rb_data_typed_object_alloc(VALUE klass, void *datap,
                                               const rb_data_type_t *type) {
  return rb_data_typed_object_wrap(klass, datap, type);
}
void rb_gc_writebarrier(VALUE a, VALUE b);
void rb_gc_writebarrier_unprotect(VALUE obj);
/* Write barrier (WB) interfaces:
 * - RB_OBJ_WRITE(a, slot, b): WB for new reference from `a' to `b'.
 *     Write `b' into `*slot'. `slot' is a pointer in `a'.
 * - RB_OBJ_WRITTEN(a, oldv, b): WB for new reference from `a' to `b'.
 *     This doesn't write any values, but only a WB declaration.
 *     `oldv' is replaced value with `b' (not used in current Ruby).
 *
 * NOTE: The following core interfaces can be changed in the future.
 *       Please catch up if you want to insert WB into C-extensions
 *       correctly.
 */
static inline VALUE rb_obj_wb_unprotect(VALUE x, const char *filename
                                        __attribute__((unused)),
                                        int line __attribute__((unused))) {

  rb_gc_writebarrier_unprotect(x);

  return x;
}

static inline VALUE rb_obj_written(VALUE a, VALUE oldv __attribute__((unused)),
                                   VALUE b,
                                   const char *filename __attribute__((unused)),
                                   int line __attribute__((unused))) {

  if (!(((VALUE)(b)&RUBY_IMMEDIATE_MASK) ||
        !!(((VALUE)(b) & ~((VALUE)RUBY_Qnil)) == 0))) {
    rb_gc_writebarrier(a, b);
  }

  return a;
}

static inline VALUE rb_obj_write(VALUE a, VALUE *slot, VALUE b,
                                 const char *filename __attribute__((unused)),
                                 int line __attribute__((unused))) {

  *slot = b;

  rb_obj_written(a, ((VALUE)RUBY_Qundef) /* undefined value for placeholder */
                 /* ignore `oldv' now */,
                 b, filename, line);

  return a;
}
static inline VALUE rb_long2num_inline(long v) {
  if ((((v) < (9223372036854775807L >> 1) + 1) &&
       ((v) >= (((long)(-9223372036854775807L - 1L)) >> (int)(1)))))
    return (((VALUE)(v)) << 1 | RUBY_FIXNUM_FLAG);
  else
    return rb_int2big(v);
}

static inline VALUE rb_ulong2num_inline(unsigned long v) {
  if (((v) < (9223372036854775807L >> 1) + 1))
    return (((VALUE)(v)) << 1 | RUBY_FIXNUM_FLAG);
  else
    return rb_uint2big(v);
}

static inline char rb_num2char_inline(VALUE x) {
  if ((((RUBY_T_STRING) == RUBY_T_FIXNUM)
           ? (((int)(long)(x)) & RUBY_FIXNUM_FLAG)
           : ((RUBY_T_STRING) == RUBY_T_TRUE)
                 ? ((x) == RUBY_Qtrue)
                 : ((RUBY_T_STRING) == RUBY_T_FALSE)
                       ? ((x) == RUBY_Qfalse)
                       : ((RUBY_T_STRING) == RUBY_T_NIL)
                             ? ((x) == RUBY_Qnil)
                             : ((RUBY_T_STRING) == RUBY_T_UNDEF)
                                   ? ((x) == RUBY_Qundef)
                                   : ((RUBY_T_STRING) == RUBY_T_SYMBOL)
                                         ? ((((VALUE)(x) &
                                              ~((~(VALUE)0)
                                                << RUBY_SPECIAL_SHIFT)) ==
                                             RUBY_SYMBOL_FLAG) ||
                                            (!(((VALUE)(
                                                   x)&RUBY_IMMEDIATE_MASK) ||
                                               !!(((VALUE)(x) &
                                                   ~((VALUE)RUBY_Qnil)) ==
                                                  0)) &&
                                             (int)(((struct RBasic *)(x))
                                                       ->flags &
                                                   RUBY_T_MASK) ==
                                                 (RUBY_T_SYMBOL)))
                                         : ((RUBY_T_STRING) == RUBY_T_FLOAT)
                                               ? (((((int)(long)(x)) &
                                                    RUBY_FLONUM_MASK) ==
                                                   RUBY_FLONUM_FLAG) ||
                                                  (!(((VALUE)(
                                                         x)&RUBY_IMMEDIATE_MASK) ||
                                                     !!(((VALUE)(x) &
                                                         ~((VALUE)RUBY_Qnil)) ==
                                                        0)) &&
                                                   (int)(((struct RBasic *)(x))
                                                             ->flags &
                                                         RUBY_T_MASK) ==
                                                       RUBY_T_FLOAT))
                                               : (!(((VALUE)(
                                                        x)&RUBY_IMMEDIATE_MASK) ||
                                                    !!(((VALUE)(x) &
                                                        ~((VALUE)RUBY_Qnil)) ==
                                                       0)) &&
                                                  (int)(((struct RBasic *)(x))
                                                            ->flags &
                                                        RUBY_T_MASK) ==
                                                      (RUBY_T_STRING))) &&
      ((!(((struct RBasic *)(x))->flags & RSTRING_NOEMBED)
            ? (long)((((struct RBasic *)(x))->flags >>
                      RSTRING_EMBED_LEN_SHIFT) &
                     (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))
            : ((struct RString *)(x))->as.heap.len) >= 1))
    return (!(((struct RBasic *)(x))->flags & RSTRING_NOEMBED)
                ? ((struct RString *)(x))->as.ary
                : ((struct RString *)(x))->as.heap.ptr)[0];
  else
    return (char)(rb_num2int_inline(x) & 0xff);
}
void *rb_alloc_tmp_buffer(volatile VALUE *store, long len);
void rb_free_tmp_buffer(volatile VALUE *store);
__attribute__((__noreturn__)) void ruby_malloc_size_overflow(size_t, size_t);
static inline size_t ruby_xmalloc2_size(const size_t count,
                                        const size_t elsize) {
  if (count > 18446744073709551615ULL / elsize) {
    ruby_malloc_size_overflow(count, elsize);
  }
  return count * elsize;
}
/* allocates _n_ bytes temporary buffer and stores VALUE including it
 * in _v_.  _n_ may be evaluated twice. */
void rb_obj_infect(VALUE, VALUE);

typedef int ruby_glob_func(const char *, VALUE, void *);
void rb_glob(const char *, void (*)(const char *, VALUE, void *), VALUE);
int ruby_glob(const char *, int, ruby_glob_func *, VALUE);
int ruby_brace_glob(const char *, int, ruby_glob_func *, VALUE);

VALUE rb_define_class(const char *, VALUE);
VALUE rb_define_module(const char *);
VALUE rb_define_class_under(VALUE, const char *, VALUE);
VALUE rb_define_module_under(VALUE, const char *);

void rb_include_module(VALUE, VALUE);
void rb_extend_object(VALUE, VALUE);
void rb_prepend_module(VALUE, VALUE);

struct rb_global_variable;

typedef VALUE rb_gvar_getter_t(ID id, void *data,
                               struct rb_global_variable *gvar);
typedef void rb_gvar_setter_t(VALUE val, ID id, void *data,
                              struct rb_global_variable *gvar);
typedef void rb_gvar_marker_t(VALUE *var);

VALUE rb_gvar_undef_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_undef_setter(VALUE val, ID id, void *data,
                          struct rb_global_variable *gvar);
void rb_gvar_undef_marker(VALUE *var);

VALUE rb_gvar_val_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_val_setter(VALUE val, ID id, void *data,
                        struct rb_global_variable *gvar);
void rb_gvar_val_marker(VALUE *var);

VALUE rb_gvar_var_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_var_setter(VALUE val, ID id, void *data,
                        struct rb_global_variable *gvar);
void rb_gvar_var_marker(VALUE *var);

void rb_gvar_readonly_setter(VALUE val, ID id, void *data,
                             struct rb_global_variable *gvar);

void rb_define_variable(const char *, VALUE *);
void rb_define_virtual_variable(const char *, VALUE (*)(), void (*)());
void rb_define_hooked_variable(const char *, VALUE *, VALUE (*)(), void (*)());
void rb_define_readonly_variable(const char *, const VALUE *);
void rb_define_const(VALUE, const char *, VALUE);
void rb_define_global_const(const char *, VALUE);

void rb_define_method(VALUE, const char *, VALUE (*)(), int);
void rb_define_module_function(VALUE, const char *, VALUE (*)(), int);
void rb_define_global_function(const char *, VALUE (*)(), int);

void rb_undef_method(VALUE, const char *);
void rb_define_alias(VALUE, const char *, const char *);
void rb_define_attr(VALUE, const char *, int, int);

void rb_global_variable(VALUE *);
void rb_gc_register_mark_object(VALUE);
void rb_gc_register_address(VALUE *);
void rb_gc_unregister_address(VALUE *);

ID rb_intern(const char *);
ID rb_intern2(const char *, long);
ID rb_intern_str(VALUE str);
const char *rb_id2name(ID);
ID rb_check_id(volatile VALUE *);
ID rb_to_id(VALUE);
VALUE rb_id2str(ID);
VALUE rb_sym2str(VALUE);
VALUE rb_to_symbol(VALUE name);
VALUE rb_check_symbol(volatile VALUE *namep);
/* __builtin_constant_p and statement expression is available
 * since gcc-2.7.2.3 at least. */
const char *rb_class2name(VALUE);
const char *rb_obj_classname(VALUE);

void rb_p(VALUE);

VALUE rb_eval_string(const char *);
VALUE rb_eval_string_protect(const char *, int *);
VALUE rb_eval_string_wrap(const char *, int *);
VALUE rb_funcall(VALUE, ID, int, ...);
VALUE rb_funcallv(VALUE, ID, int, const VALUE *);
VALUE rb_funcallv_public(VALUE, ID, int, const VALUE *);

VALUE rb_funcall_passing_block(VALUE, ID, int, const VALUE *);
VALUE rb_funcall_with_block(VALUE, ID, int, const VALUE *, VALUE);
int rb_scan_args(int, const VALUE *, const char *, ...);
VALUE rb_call_super(int, const VALUE *);
VALUE rb_current_receiver(void);
int rb_get_kwargs(VALUE keyword_hash, const ID *table, int required,
                  int optional, VALUE *);
VALUE rb_extract_keywords(VALUE *orighash);

/* rb_scan_args() format allows ':' for optional hash */

VALUE rb_gv_set(const char *, VALUE);
VALUE rb_gv_get(const char *);
VALUE rb_iv_get(VALUE, const char *);
VALUE rb_iv_set(VALUE, const char *, VALUE);

VALUE rb_equal(VALUE, VALUE);

VALUE *rb_ruby_verbose_ptr(void);
VALUE *rb_ruby_debug_ptr(void);

/* for rb_readwrite_sys_fail first argument */
enum rb_io_wait_readwrite { RB_IO_WAIT_READABLE, RB_IO_WAIT_WRITABLE };

__attribute__((__noreturn__)) void rb_raise(VALUE, const char *, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((__noreturn__)) void rb_fatal(const char *, ...)
    __attribute__((format(printf, 1, 2)));
__attribute__((__noreturn__)) void rb_bug(const char *, ...)
    __attribute__((format(printf, 1, 2)));
__attribute__((__noreturn__)) void rb_bug_errno(const char *, int);
__attribute__((__noreturn__)) void rb_sys_fail(const char *);
__attribute__((__noreturn__)) void rb_sys_fail_str(VALUE);
__attribute__((__noreturn__)) void rb_mod_sys_fail(VALUE, const char *);
__attribute__((__noreturn__)) void rb_mod_sys_fail_str(VALUE, VALUE);
__attribute__((__noreturn__)) void
rb_readwrite_sys_fail(enum rb_io_wait_readwrite, const char *);
__attribute__((__noreturn__)) void rb_iter_break(void);
__attribute__((__noreturn__)) void rb_iter_break_value(VALUE);
__attribute__((__noreturn__)) void rb_exit(int);
__attribute__((__noreturn__)) void rb_notimplement(void);
VALUE rb_syserr_new(int, const char *);
VALUE rb_syserr_new_str(int n, VALUE arg);
__attribute__((__noreturn__)) void rb_syserr_fail(int, const char *);
__attribute__((__noreturn__)) void rb_syserr_fail_str(int, VALUE);
__attribute__((__noreturn__)) void rb_mod_syserr_fail(VALUE, int, const char *);
__attribute__((__noreturn__)) void rb_mod_syserr_fail_str(VALUE, int, VALUE);
__attribute__((__noreturn__)) void
rb_readwrite_syserr_fail(enum rb_io_wait_readwrite, int, const char *);

/* reports if `-W' specified */
void rb_warning(const char *, ...) __attribute__((format(printf, 1, 2)));
void rb_compile_warning(const char *, int, const char *, ...)
    __attribute__((format(printf, 3, 4)));
void rb_sys_warning(const char *, ...) __attribute__((format(printf, 1, 2)));
/* reports always */
void rb_warn(const char *, ...) __attribute__((format(printf, 1, 2)));
void rb_compile_warn(const char *, int, const char *, ...)
    __attribute__((format(printf, 3, 4)));

typedef VALUE rb_block_call_func(VALUE yielded_arg, VALUE callback_arg,
                                 int argc, const VALUE *argv, VALUE blockarg);

typedef VALUE (*rb_block_call_func_t)();

VALUE rb_each(VALUE);
VALUE rb_yield(VALUE);
VALUE rb_yield_values(int n, ...);
VALUE rb_yield_values2(int n, const VALUE *argv);
VALUE rb_yield_splat(VALUE);
VALUE rb_yield_block(VALUE, VALUE, int, const VALUE *,
                     VALUE); /* rb_block_call_func */
int rb_block_given_p(void);
void rb_need_block(void);
VALUE rb_iterate(VALUE (*)(VALUE), VALUE, VALUE (*)(), VALUE);
VALUE rb_block_call(VALUE, ID, int, const VALUE *, rb_block_call_func_t, VALUE);
VALUE rb_rescue(VALUE (*)(), VALUE, VALUE (*)(), VALUE);
VALUE rb_rescue2(VALUE (*)(), VALUE, VALUE (*)(), VALUE, ...);
VALUE rb_ensure(VALUE (*)(), VALUE, VALUE (*)(), VALUE);
VALUE rb_catch(const char *, VALUE (*)(), VALUE);
VALUE rb_catch_obj(VALUE, VALUE (*)(), VALUE);
__attribute__((__noreturn__)) void rb_throw(const char *, VALUE);
__attribute__((__noreturn__)) void rb_throw_obj(VALUE, VALUE);

VALUE rb_require(const char *);

extern VALUE rb_mKernel;
extern VALUE rb_mComparable;
extern VALUE rb_mEnumerable;
extern VALUE rb_mErrno;
extern VALUE rb_mFileTest;
extern VALUE rb_mGC;
extern VALUE rb_mMath;
extern VALUE rb_mProcess;
extern VALUE rb_mWaitReadable;
extern VALUE rb_mWaitWritable;

extern VALUE rb_cBasicObject;
extern VALUE rb_cObject;
extern VALUE rb_cArray;
extern VALUE rb_cBignum;
extern VALUE rb_cBinding;
extern VALUE rb_cClass;
extern VALUE rb_cCont;
extern VALUE rb_cDir;
extern VALUE rb_cData;
extern VALUE rb_cFalseClass;
extern VALUE rb_cEncoding;
extern VALUE rb_cEnumerator;
extern VALUE rb_cFile;
extern VALUE rb_cFixnum;
extern VALUE rb_cFloat;
extern VALUE rb_cHash;
extern VALUE rb_cInteger;
extern VALUE rb_cIO;
extern VALUE rb_cMatch;
extern VALUE rb_cMethod;
extern VALUE rb_cModule;
extern VALUE rb_cNameErrorMesg;
extern VALUE rb_cNilClass;
extern VALUE rb_cNumeric;
extern VALUE rb_cProc;
extern VALUE rb_cRandom;
extern VALUE rb_cRange;
extern VALUE rb_cRational;
extern VALUE rb_cComplex;
extern VALUE rb_cRegexp;
extern VALUE rb_cStat;
extern VALUE rb_cString;
extern VALUE rb_cStruct;
extern VALUE rb_cSymbol;
extern VALUE rb_cThread;
extern VALUE rb_cTime;
extern VALUE rb_cTrueClass;
extern VALUE rb_cUnboundMethod;

extern VALUE rb_eException;
extern VALUE rb_eStandardError;
extern VALUE rb_eSystemExit;
extern VALUE rb_eInterrupt;
extern VALUE rb_eSignal;
extern VALUE rb_eFatal;
extern VALUE rb_eArgError;
extern VALUE rb_eEOFError;
extern VALUE rb_eIndexError;
extern VALUE rb_eStopIteration;
extern VALUE rb_eKeyError;
extern VALUE rb_eRangeError;
extern VALUE rb_eIOError;
extern VALUE rb_eRuntimeError;
extern VALUE rb_eSecurityError;
extern VALUE rb_eSystemCallError;
extern VALUE rb_eThreadError;
extern VALUE rb_eTypeError;
extern VALUE rb_eZeroDivError;
extern VALUE rb_eNotImpError;
extern VALUE rb_eNoMemError;
extern VALUE rb_eNoMethodError;
extern VALUE rb_eFloatDomainError;
extern VALUE rb_eLocalJumpError;
extern VALUE rb_eSysStackError;
extern VALUE rb_eRegexpError;
extern VALUE rb_eEncodingError;
extern VALUE rb_eEncCompatError;

extern VALUE rb_eScriptError;
extern VALUE rb_eNameError;
extern VALUE rb_eSyntaxError;
extern VALUE rb_eLoadError;

extern VALUE rb_eMathDomainError;

extern VALUE rb_stdin, rb_stdout, rb_stderr;

static inline VALUE rb_class_of(VALUE obj) {
  if (((VALUE)(obj)&RUBY_IMMEDIATE_MASK)) {
    if ((((int)(long)(obj)) & RUBY_FIXNUM_FLAG))
      return rb_cFixnum;
    if (((((int)(long)(obj)) & RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG))
      return rb_cFloat;
    if (obj == RUBY_Qtrue)
      return rb_cTrueClass;
    if ((((VALUE)(obj) & ~((~(VALUE)0) << RUBY_SPECIAL_SHIFT)) ==
         RUBY_SYMBOL_FLAG))
      return rb_cSymbol;
  } else if (!!(((VALUE)(obj) & ~((VALUE)RUBY_Qnil)) == 0)) {
    if (obj == RUBY_Qnil)
      return rb_cNilClass;
    if (obj == RUBY_Qfalse)
      return rb_cFalseClass;
  }
  return ((struct RBasic *)(obj))->klass;
}

static inline int rb_type(VALUE obj) {
  if (((VALUE)(obj)&RUBY_IMMEDIATE_MASK)) {
    if ((((int)(long)(obj)) & RUBY_FIXNUM_FLAG))
      return RUBY_T_FIXNUM;
    if (((((int)(long)(obj)) & RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG))
      return RUBY_T_FLOAT;
    if (obj == RUBY_Qtrue)
      return RUBY_T_TRUE;
    if ((((VALUE)(obj) & ~((~(VALUE)0) << RUBY_SPECIAL_SHIFT)) ==
         RUBY_SYMBOL_FLAG))
      return RUBY_T_SYMBOL;
    if (obj == RUBY_Qundef)
      return RUBY_T_UNDEF;
  } else if (!!(((VALUE)(obj) & ~((VALUE)RUBY_Qnil)) == 0)) {
    if (obj == RUBY_Qnil)
      return RUBY_T_NIL;
    if (obj == RUBY_Qfalse)
      return RUBY_T_FALSE;
  }
  return (int)(((struct RBasic *)(obj))->flags & RUBY_T_MASK);
}
/**********************************************************************

  intern.h -

  $Author: ktsj $
  created at: Thu Jun 10 14:22:17 JST 1993

  Copyright (C) 1993-2007 Yukihiro Matsumoto
  Copyright (C) 2000  Network Applied Communication Laboratory, Inc.
  Copyright (C) 2000  Information-technology Promotion Agency, Japan

**********************************************************************/
/************************************************

  defines.h -

  $Author: naruse $
  created at: Wed May 18 00:21:44 JST 1994

************************************************/
/* This is a public domain general purpose hash table package
   originally written by Peter Moore @ UCB.

   The hash table data strutures were redesigned and the package was
   rewritten by Vladimir Makarov <vmakarov@redhat.com>.  */
/************************************************

  defines.h -

  $Author: naruse $
  created at: Wed May 18 00:21:44 JST 1994

************************************************/

#pragma GCC visibility push(default)

typedef unsigned long st_data_t;
typedef struct st_table st_table;

typedef st_data_t st_index_t;

/* Maximal value of unsigned integer type st_index_t.  */

typedef int st_compare_func(st_data_t, st_data_t);
typedef st_index_t st_hash_func(st_data_t);

typedef char
    st_check_for_sizeof_st_index_t[8 == (int)sizeof(st_index_t) ? 1 : -1];

struct st_hash_type {
  int (*compare)(/*st_data_t, st_data_t*/); /* st_compare_func* */
  st_index_t (*hash)(/*st_data_t*/);        /* st_hash_func* */
};
typedef struct st_table_entry st_table_entry;

struct st_table_entry; /* defined in st.c */

struct st_table {
  /* Cached features of the table -- see st.c for more details.  */
  unsigned char entry_power, bin_power, size_ind;
  /* How many times the table was rebuilt.  */
  unsigned int rebuilds_num;
  const struct st_hash_type *type;
  /* Number of entries currently in the table.  */
  st_index_t num_entries;
  /* Array of bins used for access by keys.  */
  st_index_t *bins;
  /* Start and bound index of entries in array entries.
     entries_starts and entries_bound are in interval
     [0,allocated_entries].  */
  st_index_t entries_start, entries_bound;
  /* Array of size 2^entry_power.  */
  st_table_entry *entries;
};

enum st_retval { ST_CONTINUE, ST_STOP, ST_DELETE, ST_CHECK };

st_table *st_init_table(const struct st_hash_type *);
st_table *st_init_table_with_size(const struct st_hash_type *, st_index_t);
st_table *st_init_numtable(void);
st_table *st_init_numtable_with_size(st_index_t);
st_table *st_init_strtable(void);
st_table *st_init_strtable_with_size(st_index_t);
st_table *st_init_strcasetable(void);
st_table *st_init_strcasetable_with_size(st_index_t);
int st_delete(st_table *, st_data_t *,
              st_data_t *); /* returns 0:notfound 1:deleted */
int st_delete_safe(st_table *, st_data_t *, st_data_t *, st_data_t);
int st_shift(st_table *, st_data_t *,
             st_data_t *); /* returns 0:notfound 1:deleted */
int st_insert(st_table *, st_data_t, st_data_t);
int st_insert2(st_table *, st_data_t, st_data_t, st_data_t (*)(st_data_t));
int st_lookup(st_table *, st_data_t, st_data_t *);
int st_get_key(st_table *, st_data_t, st_data_t *);
typedef int st_update_callback_func(st_data_t *key, st_data_t *value,
                                    st_data_t arg, int existing);
/* *key may be altered, but must equal to the old key, i.e., the
 * results of hash() are same and compare() returns 0, otherwise the
 * behavior is undefined */
int st_update(st_table *table, st_data_t key, st_update_callback_func *func,
              st_data_t arg);
int st_foreach(st_table *, int (*)(), st_data_t);
int st_foreach_check(st_table *, int (*)(), st_data_t, st_data_t);
st_index_t st_keys(st_table *table, st_data_t *keys, st_index_t size);
st_index_t st_keys_check(st_table *table, st_data_t *keys, st_index_t size,
                         st_data_t never);
st_index_t st_values(st_table *table, st_data_t *values, st_index_t size);
st_index_t st_values_check(st_table *table, st_data_t *values, st_index_t size,
                           st_data_t never);
void st_add_direct(st_table *, st_data_t, st_data_t);
void st_free_table(st_table *);
void st_cleanup_safe(st_table *, st_data_t);
void st_clear(st_table *);
st_table *st_copy(st_table *);
__attribute__((__const__)) int st_numcmp(st_data_t, st_data_t);
__attribute__((__const__)) st_index_t st_numhash(st_data_t);
__attribute__((__pure__)) int st_locale_insensitive_strcasecmp(const char *s1,
                                                               const char *s2);
__attribute__((__pure__)) int
st_locale_insensitive_strncasecmp(const char *s1, const char *s2, size_t n);

__attribute__((__pure__)) size_t st_memsize(const st_table *);
__attribute__((__pure__)) st_index_t st_hash(const void *ptr, size_t len,
                                             st_index_t h);
__attribute__((__const__)) st_index_t st_hash_uint32(st_index_t h, uint32_t i);
__attribute__((__const__)) st_index_t st_hash_uint(st_index_t h, st_index_t i);
__attribute__((__const__)) st_index_t st_hash_end(st_index_t h);
__attribute__((__const__)) st_index_t st_hash_start(st_index_t h);

#pragma GCC visibility pop

#pragma GCC visibility push(default)

/*
 * Functions and variables that are used by more than one source file of
 * the kernel.
 */

/* array.c */
void rb_mem_clear(register VALUE *, register long);
VALUE rb_assoc_new(VALUE, VALUE);
VALUE rb_check_array_type(VALUE);
VALUE rb_ary_new(void);
VALUE rb_ary_new_capa(long capa);
VALUE rb_ary_new_from_args(long n, ...);
VALUE rb_ary_new_from_values(long n, const VALUE *elts);
VALUE rb_ary_tmp_new(long);
void rb_ary_free(VALUE);
void rb_ary_modify(VALUE);
VALUE rb_ary_freeze(VALUE);
VALUE rb_ary_shared_with_p(VALUE, VALUE);
VALUE rb_ary_aref(int, const VALUE *, VALUE);
VALUE rb_ary_subseq(VALUE, long, long);
void rb_ary_store(VALUE, long, VALUE);
VALUE rb_ary_dup(VALUE);
VALUE rb_ary_resurrect(VALUE ary);
VALUE rb_ary_to_ary(VALUE);
VALUE rb_ary_to_s(VALUE);
VALUE rb_ary_cat(VALUE, const VALUE *, long);
VALUE rb_ary_push(VALUE, VALUE);
VALUE rb_ary_pop(VALUE);
VALUE rb_ary_shift(VALUE);
VALUE rb_ary_unshift(VALUE, VALUE);
VALUE rb_ary_entry(VALUE, long);
VALUE rb_ary_each(VALUE);
VALUE rb_ary_join(VALUE, VALUE);
VALUE rb_ary_reverse(VALUE);
VALUE rb_ary_rotate(VALUE, long);
VALUE rb_ary_sort(VALUE);
VALUE rb_ary_sort_bang(VALUE);
VALUE rb_ary_delete(VALUE, VALUE);
VALUE rb_ary_delete_at(VALUE, long);
VALUE rb_ary_clear(VALUE);
VALUE rb_ary_plus(VALUE, VALUE);
VALUE rb_ary_concat(VALUE, VALUE);
VALUE rb_ary_assoc(VALUE, VALUE);
VALUE rb_ary_rassoc(VALUE, VALUE);
VALUE rb_ary_includes(VALUE, VALUE);
VALUE rb_ary_cmp(VALUE, VALUE);
VALUE rb_ary_replace(VALUE copy, VALUE orig);
VALUE rb_get_values_at(VALUE, long, int, const VALUE *, VALUE (*)(VALUE, long));
VALUE rb_ary_resize(VALUE ary, long len);

/* bignum.c */
VALUE rb_big_new(size_t, int);
int rb_bigzero_p(VALUE x);
VALUE rb_big_clone(VALUE);
void rb_big_2comp(VALUE);
VALUE rb_big_norm(VALUE);
void rb_big_resize(VALUE big, size_t len);
VALUE rb_cstr_to_inum(const char *, int, int);
VALUE rb_str_to_inum(VALUE, int, int);
VALUE rb_cstr2inum(const char *, int);
VALUE rb_str2inum(VALUE, int);
VALUE rb_big2str(VALUE, int);
long rb_big2long(VALUE);

unsigned long rb_big2ulong(VALUE);

long long rb_big2ll(VALUE);
unsigned long long rb_big2ull(VALUE);

void rb_big_pack(VALUE val, unsigned long *buf, long num_longs);
VALUE rb_big_unpack(unsigned long *buf, long num_longs);
int rb_uv_to_utf8(char[6], unsigned long);
VALUE rb_dbl2big(double);
double rb_big2dbl(VALUE);
VALUE rb_big_cmp(VALUE, VALUE);
VALUE rb_big_eq(VALUE, VALUE);
VALUE rb_big_eql(VALUE, VALUE);
VALUE rb_big_plus(VALUE, VALUE);
VALUE rb_big_minus(VALUE, VALUE);
VALUE rb_big_mul(VALUE, VALUE);
VALUE rb_big_div(VALUE, VALUE);
VALUE rb_big_idiv(VALUE, VALUE);
VALUE rb_big_modulo(VALUE, VALUE);
VALUE rb_big_divmod(VALUE, VALUE);
VALUE rb_big_pow(VALUE, VALUE);
VALUE rb_big_and(VALUE, VALUE);
VALUE rb_big_or(VALUE, VALUE);
VALUE rb_big_xor(VALUE, VALUE);
VALUE rb_big_lshift(VALUE, VALUE);
VALUE rb_big_rshift(VALUE, VALUE);

/* For rb_integer_pack and rb_integer_unpack: */
/* "MS" in MSWORD and MSBYTE means "most significant" */
/* "LS" in LSWORD and LSBYTE means "least significant" */

/* For rb_integer_unpack: */

/* Combinations: */

int rb_integer_pack(VALUE val, void *words, size_t numwords, size_t wordsize,
                    size_t nails, int flags);
VALUE rb_integer_unpack(const void *words, size_t numwords, size_t wordsize,
                        size_t nails, int flags);
size_t rb_absint_size(VALUE val, int *nlz_bits_ret);
size_t rb_absint_numwords(VALUE val, size_t word_numbits, size_t *nlz_bits_ret);
int rb_absint_singlebit_p(VALUE val);

/* rational.c */
VALUE rb_rational_raw(VALUE, VALUE);

VALUE rb_rational_new(VALUE, VALUE);

VALUE rb_Rational(VALUE, VALUE);

VALUE rb_rational_num(VALUE rat);
VALUE rb_rational_den(VALUE rat);
VALUE rb_flt_rationalize_with_prec(VALUE, VALUE);
VALUE rb_flt_rationalize(VALUE);
/* complex.c */
VALUE rb_complex_raw(VALUE, VALUE);

VALUE rb_complex_new(VALUE, VALUE);

VALUE rb_complex_polar(VALUE, VALUE);
VALUE rb_Complex(VALUE, VALUE);

__attribute__((__deprecated__)) VALUE rb_complex_set_real(VALUE, VALUE);
__attribute__((__deprecated__)) VALUE rb_complex_set_imag(VALUE, VALUE);
/* class.c */
VALUE rb_class_new(VALUE);
VALUE rb_mod_init_copy(VALUE, VALUE);
VALUE rb_singleton_class_clone(VALUE);
void rb_singleton_class_attached(VALUE, VALUE);
void rb_check_inheritable(VALUE);
VALUE rb_define_class_id(ID, VALUE);
VALUE rb_define_class_id_under(VALUE, ID, VALUE);
VALUE rb_module_new(void);
VALUE rb_define_module_id(ID);
VALUE rb_define_module_id_under(VALUE, ID);
VALUE rb_mod_included_modules(VALUE);
VALUE rb_mod_include_p(VALUE, VALUE);
VALUE rb_mod_ancestors(VALUE);
VALUE rb_class_instance_methods(int, const VALUE *, VALUE);
VALUE rb_class_public_instance_methods(int, const VALUE *, VALUE);
VALUE rb_class_protected_instance_methods(int, const VALUE *, VALUE);
VALUE rb_class_private_instance_methods(int, const VALUE *, VALUE);
VALUE rb_obj_singleton_methods(int, const VALUE *, VALUE);
void rb_define_method_id(VALUE, ID, VALUE (*)(), int);
void rb_frozen_class_p(VALUE);
void rb_undef(VALUE, ID);
void rb_define_protected_method(VALUE, const char *, VALUE (*)(), int);
void rb_define_private_method(VALUE, const char *, VALUE (*)(), int);
void rb_define_singleton_method(VALUE, const char *, VALUE (*)(), int);
VALUE rb_singleton_class(VALUE);
/* compar.c */
int rb_cmpint(VALUE, VALUE, VALUE);
__attribute__((__noreturn__)) void rb_cmperr(VALUE, VALUE);
/* cont.c */
VALUE rb_fiber_new(VALUE (*)(), VALUE);
VALUE rb_fiber_resume(VALUE fib, int argc, const VALUE *argv);
VALUE rb_fiber_yield(int argc, const VALUE *argv);
VALUE rb_fiber_current(void);
VALUE rb_fiber_alive_p(VALUE);
/* enum.c */
VALUE rb_enum_values_pack(int, const VALUE *);
/* enumerator.c */
VALUE rb_enumeratorize(VALUE, VALUE, int, const VALUE *);
typedef VALUE rb_enumerator_size_func(VALUE, VALUE, VALUE);
VALUE rb_enumeratorize_with_size(VALUE, VALUE, int, const VALUE *,
                                 rb_enumerator_size_func *);
/* error.c */
VALUE rb_exc_new(VALUE, const char *, long);
VALUE rb_exc_new_cstr(VALUE, const char *);
VALUE rb_exc_new_str(VALUE, VALUE);

__attribute__((__noreturn__)) void rb_loaderror(const char *, ...)
    __attribute__((format(printf, 1, 2)));
__attribute__((__noreturn__)) void rb_loaderror_with_path(VALUE path,
                                                          const char *, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((__noreturn__)) void rb_name_error(ID, const char *, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((__noreturn__)) void rb_name_error_str(VALUE, const char *, ...)
    __attribute__((format(printf, 2, 3)));
__attribute__((__noreturn__)) void rb_invalid_str(const char *, const char *);
__attribute__((__noreturn__)) __attribute__((__deprecated__)) void
rb_compile_error(const char *, int, const char *, ...)
    __attribute__((format(printf, 3, 4)));
__attribute__((__noreturn__)) __attribute__((__deprecated__)) void
rb_compile_error_with_enc(const char *, int, void *, const char *, ...)
    __attribute__((format(printf, 4, 5)));
__attribute__((__noreturn__)) __attribute__((__deprecated__)) void
rb_compile_error_append(const char *, ...)
    __attribute__((format(printf, 1, 2)));
__attribute__((__noreturn__)) void rb_error_frozen(const char *);
__attribute__((__noreturn__)) void rb_error_frozen_object(VALUE);
__attribute__((__const__)) void rb_error_untrusted(VALUE);
void rb_check_frozen(VALUE);
__attribute__((__const__)) void rb_check_trusted(VALUE);
void rb_check_copyable(VALUE obj, VALUE orig);

/* eval.c */
int rb_sourceline(void);
const char *rb_sourcefile(void);
VALUE rb_check_funcall(VALUE, ID, int, const VALUE *);

__attribute__((__noreturn__)) void rb_error_arity(int, int, int);
static inline int rb_check_arity(int argc, int min, int max) {
  if ((argc < min) || (max != (-1) && argc > max))
    rb_error_arity(argc, min, max);
  return argc;
}

typedef struct {
  int maxfd;
  fd_set *fdset;
} rb_fdset_t;

void rb_fd_init(rb_fdset_t *);
void rb_fd_term(rb_fdset_t *);
void rb_fd_zero(rb_fdset_t *);
void rb_fd_set(int, rb_fdset_t *);
void rb_fd_clr(int, rb_fdset_t *);
int rb_fd_isset(int, const rb_fdset_t *);
void rb_fd_copy(rb_fdset_t *, const fd_set *, int);
void rb_fd_dup(rb_fdset_t *dst, const rb_fdset_t *src);

struct timeval;
int rb_fd_select(int, rb_fdset_t *, rb_fdset_t *, rb_fdset_t *,
                 struct timeval *);
__attribute__((__noreturn__)) void rb_exc_raise(VALUE);
__attribute__((__noreturn__)) void rb_exc_fatal(VALUE);
__attribute__((__noreturn__)) VALUE rb_f_exit(int, const VALUE *);
__attribute__((__noreturn__)) VALUE rb_f_abort(int, const VALUE *);
void rb_remove_method(VALUE, const char *);
void rb_remove_method_id(VALUE, ID);
__attribute__((__deprecated__)) static inline void rb_disable_super(void);
__attribute__((__deprecated__)) static inline void rb_enable_super(void);
static inline void rb_disable_super(void) { /* obsolete - no use */
}
static inline void rb_enable_super(void) {
  rb_warning("rb_enable_super() is obsolete");
}

typedef VALUE (*rb_alloc_func_t)(VALUE);
void rb_define_alloc_func(VALUE, rb_alloc_func_t);
void rb_undef_alloc_func(VALUE);
rb_alloc_func_t rb_get_alloc_func(VALUE);
__attribute__((__noreturn__)) __attribute__((__deprecated__)) void
rb_clear_cache(void);
void rb_clear_constant_cache(void);
void rb_clear_method_cache_by_class(VALUE);
void rb_alias(VALUE, ID, ID);
void rb_attr(VALUE, ID, int, int, int);
int rb_method_boundp(VALUE, ID, int);
int rb_method_basic_definition_p(VALUE, ID);
VALUE rb_eval_cmd(VALUE, VALUE, int);
int rb_obj_respond_to(VALUE, ID, int);
int rb_respond_to(VALUE, ID);
__attribute__((__noreturn__)) VALUE
rb_f_notimplement(int argc, const VALUE *argv, VALUE obj);

__attribute__((__noreturn__)) void rb_interrupt(void);
VALUE rb_apply(VALUE, ID, VALUE);
void rb_backtrace(void);
ID rb_frame_this_func(void);
VALUE rb_obj_instance_eval(int, const VALUE *, VALUE);
VALUE rb_obj_instance_exec(int, const VALUE *, VALUE);
VALUE rb_mod_module_eval(int, const VALUE *, VALUE);
VALUE rb_mod_module_exec(int, const VALUE *, VALUE);
void rb_load(VALUE, int);
void rb_load_protect(VALUE, int, int *);
__attribute__((__noreturn__)) void rb_jump_tag(int);
int rb_provided(const char *);
int rb_feature_provided(const char *, const char **);
void rb_provide(const char *);
VALUE rb_f_require(VALUE, VALUE);
VALUE rb_require_safe(VALUE, int);
void rb_obj_call_init(VALUE, int, const VALUE *);
VALUE rb_class_new_instance(int, const VALUE *, VALUE);
VALUE rb_block_proc(void);
VALUE rb_block_lambda(void);
VALUE rb_proc_new(VALUE (*)(/* VALUE yieldarg[, VALUE procarg] */), VALUE);
VALUE rb_obj_is_proc(VALUE);
VALUE rb_proc_call(VALUE, VALUE);
VALUE rb_proc_call_with_block(VALUE, int argc, const VALUE *argv, VALUE);
int rb_proc_arity(VALUE);
VALUE rb_proc_lambda_p(VALUE);
VALUE rb_binding_new(void);
VALUE rb_obj_method(VALUE, VALUE);
VALUE rb_obj_is_method(VALUE);
VALUE rb_method_call(int, const VALUE *, VALUE);
VALUE rb_method_call_with_block(int, const VALUE *, VALUE, VALUE);
int rb_mod_method_arity(VALUE, ID);
int rb_obj_method_arity(VALUE, ID);
VALUE rb_protect(VALUE (*)(VALUE), VALUE, int *);
void rb_set_end_proc(void (*)(VALUE), VALUE);
void rb_exec_end_proc(void);
void rb_thread_schedule(void);
void rb_thread_wait_fd(int);
int rb_thread_fd_writable(int);
void rb_thread_fd_close(int);
int rb_thread_alone(void);
void rb_thread_sleep(int);
void rb_thread_sleep_forever(void);
void rb_thread_sleep_deadly(void);
VALUE rb_thread_stop(void);
VALUE rb_thread_wakeup(VALUE);
VALUE rb_thread_wakeup_alive(VALUE);
VALUE rb_thread_run(VALUE);
VALUE rb_thread_kill(VALUE);
VALUE rb_thread_create(VALUE (*)(), void *);
int rb_thread_fd_select(int, rb_fdset_t *, rb_fdset_t *, rb_fdset_t *,
                        struct timeval *);
void rb_thread_wait_for(struct timeval);
VALUE rb_thread_current(void);
VALUE rb_thread_main(void);
VALUE rb_thread_local_aref(VALUE, ID);
VALUE rb_thread_local_aset(VALUE, ID, VALUE);
void rb_thread_atfork(void);
void rb_thread_atfork_before_exec(void);
VALUE rb_exec_recursive(VALUE (*)(VALUE, VALUE, int), VALUE, VALUE);
VALUE rb_exec_recursive_paired(VALUE (*)(VALUE, VALUE, int), VALUE, VALUE,
                               VALUE);
VALUE rb_exec_recursive_outer(VALUE (*)(VALUE, VALUE, int), VALUE, VALUE);
VALUE rb_exec_recursive_paired_outer(VALUE (*)(VALUE, VALUE, int), VALUE, VALUE,
                                     VALUE);
/* dir.c */
VALUE rb_dir_getwd(void);
/* file.c */
VALUE rb_file_s_expand_path(int, const VALUE *);
VALUE rb_file_expand_path(VALUE, VALUE);
VALUE rb_file_s_absolute_path(int, const VALUE *);
VALUE rb_file_absolute_path(VALUE, VALUE);
VALUE rb_file_dirname(VALUE fname);
int rb_find_file_ext_safe(VALUE *, const char *const *, int);
VALUE rb_find_file_safe(VALUE, int);
int rb_find_file_ext(VALUE *, const char *const *);
VALUE rb_find_file(VALUE);
VALUE rb_file_directory_p(VALUE, VALUE);
VALUE rb_str_encode_ospath(VALUE);
int rb_is_absolute_path(const char *);
/* gc.c */
__attribute__((__noreturn__)) void rb_memerror(void);
__attribute__((__pure__)) int rb_during_gc(void);
void rb_gc_mark_locations(const VALUE *, const VALUE *);
void rb_mark_tbl(struct st_table *);
void rb_mark_set(struct st_table *);
void rb_mark_hash(struct st_table *);
void rb_gc_mark_maybe(VALUE);
void rb_gc_mark(VALUE);
void rb_gc_force_recycle(VALUE);
void rb_gc(void);
void rb_gc_copy_finalizer(VALUE, VALUE);
void rb_gc_finalize_deferred(void);
void rb_gc_call_finalizer_at_exit(void);
VALUE rb_gc_enable(void);
VALUE rb_gc_disable(void);
VALUE rb_gc_start(void);
VALUE rb_define_finalizer(VALUE, VALUE);
VALUE rb_undefine_finalizer(VALUE);
size_t rb_gc_count(void);
size_t rb_gc_stat(VALUE);
VALUE rb_gc_latest_gc_info(VALUE);
void rb_gc_adjust_memory_usage(ssize_t);
/* hash.c */
void st_foreach_safe(struct st_table *, int (*)(), st_data_t);
VALUE rb_check_hash_type(VALUE);
void rb_hash_foreach(VALUE, int (*)(), VALUE);
VALUE rb_hash(VALUE);
VALUE rb_hash_new(void);
VALUE rb_hash_dup(VALUE);
VALUE rb_hash_freeze(VALUE);
VALUE rb_hash_aref(VALUE, VALUE);
VALUE rb_hash_lookup(VALUE, VALUE);
VALUE rb_hash_lookup2(VALUE, VALUE, VALUE);
VALUE rb_hash_fetch(VALUE, VALUE);
VALUE rb_hash_aset(VALUE, VALUE, VALUE);
VALUE rb_hash_clear(VALUE);
VALUE rb_hash_delete_if(VALUE);
VALUE rb_hash_delete(VALUE, VALUE);
VALUE rb_hash_set_ifnone(VALUE hash, VALUE ifnone);
typedef VALUE rb_hash_update_func(VALUE newkey, VALUE oldkey, VALUE value);
VALUE rb_hash_update_by(VALUE hash1, VALUE hash2, rb_hash_update_func *func);
struct st_table *rb_hash_tbl(VALUE);
int rb_path_check(const char *);
int rb_env_path_tainted(void);
VALUE rb_env_clear(void);
VALUE rb_hash_size(VALUE);
__attribute__((__deprecated__)) int rb_hash_iter_lev(VALUE);
__attribute__((__deprecated__)) VALUE rb_hash_ifnone(VALUE);
/* io.c */

extern VALUE rb_fs;
extern VALUE rb_output_fs;
extern VALUE rb_rs;
extern VALUE rb_default_rs;
extern VALUE rb_output_rs;
VALUE rb_io_write(VALUE, VALUE);
VALUE rb_io_gets(VALUE);
VALUE rb_io_getbyte(VALUE);
VALUE rb_io_ungetc(VALUE, VALUE);
VALUE rb_io_ungetbyte(VALUE, VALUE);
VALUE rb_io_close(VALUE);
VALUE rb_io_flush(VALUE);
VALUE rb_io_eof(VALUE);
VALUE rb_io_binmode(VALUE);
VALUE rb_io_ascii8bit_binmode(VALUE);
VALUE rb_io_addstr(VALUE, VALUE);
VALUE rb_io_printf(int, const VALUE *, VALUE);
VALUE rb_io_print(int, const VALUE *, VALUE);
VALUE rb_io_puts(int, const VALUE *, VALUE);
VALUE rb_io_fdopen(int, int, const char *);
VALUE rb_io_get_io(VALUE);
VALUE rb_file_open(const char *, const char *);
VALUE rb_file_open_str(VALUE, const char *);
VALUE rb_gets(void);
void rb_write_error(const char *);
void rb_write_error2(const char *, long);
void rb_close_before_exec(int lowfd, int maxhint, VALUE noclose_fds);
int rb_pipe(int *pipes);
int rb_reserved_fd_p(int fd);
int rb_cloexec_open(const char *pathname, int flags, mode_t mode);
int rb_cloexec_dup(int oldfd);
int rb_cloexec_dup2(int oldfd, int newfd);
int rb_cloexec_pipe(int fildes[2]);
int rb_cloexec_fcntl_dupfd(int fd, int minfd);

void rb_update_max_fd(int fd);
void rb_fd_fix_cloexec(int fd);
/* marshal.c */
VALUE rb_marshal_dump(VALUE, VALUE);
VALUE rb_marshal_load(VALUE);
void rb_marshal_define_compat(VALUE newclass, VALUE oldclass,
                              VALUE (*dumper)(VALUE),
                              VALUE (*loader)(VALUE, VALUE));
/* numeric.c */
__attribute__((__noreturn__)) void rb_num_zerodiv(void);

VALUE rb_num_coerce_bin(VALUE, VALUE, ID);
VALUE rb_num_coerce_cmp(VALUE, VALUE, ID);
VALUE rb_num_coerce_relop(VALUE, VALUE, ID);
VALUE rb_num_coerce_bit(VALUE, VALUE, ID);
VALUE rb_num2fix(VALUE);
VALUE rb_fix2str(VALUE, int);
__attribute__((__const__)) VALUE rb_dbl_cmp(double, double);
/* object.c */
int rb_eql(VALUE, VALUE);
VALUE rb_any_to_s(VALUE);
VALUE rb_inspect(VALUE);
VALUE rb_obj_is_instance_of(VALUE, VALUE);
VALUE rb_obj_is_kind_of(VALUE, VALUE);
VALUE rb_obj_alloc(VALUE);
VALUE rb_obj_clone(VALUE);
VALUE rb_obj_dup(VALUE);
VALUE rb_obj_init_copy(VALUE, VALUE);
VALUE rb_obj_taint(VALUE);
__attribute__((__pure__)) VALUE rb_obj_tainted(VALUE);
VALUE rb_obj_untaint(VALUE);
VALUE rb_obj_untrust(VALUE);
__attribute__((__pure__)) VALUE rb_obj_untrusted(VALUE);
VALUE rb_obj_trust(VALUE);
VALUE rb_obj_freeze(VALUE);
__attribute__((__pure__)) VALUE rb_obj_frozen_p(VALUE);
VALUE rb_obj_id(VALUE);
VALUE rb_obj_class(VALUE);
__attribute__((__pure__)) VALUE rb_class_real(VALUE);
__attribute__((__pure__)) VALUE rb_class_inherited_p(VALUE, VALUE);
VALUE rb_class_superclass(VALUE);
VALUE rb_class_get_superclass(VALUE);
VALUE rb_convert_type(VALUE, int, const char *, const char *);
VALUE rb_check_convert_type(VALUE, int, const char *, const char *);
VALUE rb_check_to_integer(VALUE, const char *);
VALUE rb_check_to_float(VALUE);
VALUE rb_to_int(VALUE);
VALUE rb_check_to_int(VALUE);
VALUE rb_Integer(VALUE);
VALUE rb_to_float(VALUE);
VALUE rb_Float(VALUE);
VALUE rb_String(VALUE);
VALUE rb_Array(VALUE);
VALUE rb_Hash(VALUE);
double rb_cstr_to_dbl(const char *, int);
double rb_str_to_dbl(VALUE, int);
/* parse.y */
ID rb_id_attrset(ID);
__attribute__((__const__)) int rb_is_const_id(ID);
__attribute__((__const__)) int rb_is_global_id(ID);
__attribute__((__const__)) int rb_is_instance_id(ID);
__attribute__((__const__)) int rb_is_attrset_id(ID);
__attribute__((__const__)) int rb_is_class_id(ID);
__attribute__((__const__)) int rb_is_local_id(ID);
__attribute__((__const__)) int rb_is_junk_id(ID);
int rb_symname_p(const char *);
int rb_sym_interned_p(VALUE);
VALUE rb_backref_get(void);
void rb_backref_set(VALUE);
VALUE rb_lastline_get(void);
void rb_lastline_set(VALUE);
/* process.c */
void rb_last_status_set(int status, pid_t pid);
VALUE rb_last_status_get(void);
int rb_proc_exec(const char *);
__attribute__((__noreturn__)) VALUE rb_f_exec(int, const VALUE *);
pid_t rb_waitpid(pid_t pid, int *status, int flags);
void rb_syswait(pid_t pid);
pid_t rb_spawn(int, const VALUE *);
pid_t rb_spawn_err(int, const VALUE *, char *, size_t);
VALUE rb_proc_times(VALUE);
VALUE rb_detach_process(pid_t pid);
/* range.c */
VALUE rb_range_new(VALUE, VALUE, int);
VALUE rb_range_beg_len(VALUE, long *, long *, long, int);
int rb_range_values(VALUE range, VALUE *begp, VALUE *endp, int *exclp);
/* random.c */
unsigned int rb_genrand_int32(void);
double rb_genrand_real(void);
void rb_reset_random_seed(void);
VALUE rb_random_bytes(VALUE rnd, long n);
VALUE rb_random_int(VALUE rnd, VALUE max);
unsigned int rb_random_int32(VALUE rnd);
double rb_random_real(VALUE rnd);
unsigned long rb_random_ulong_limited(VALUE rnd, unsigned long limit);
unsigned long rb_genrand_ulong_limited(unsigned long i);
/* re.c */

int rb_memcicmp(const void *, const void *, long);
void rb_match_busy(VALUE);
VALUE rb_reg_nth_defined(int, VALUE);
VALUE rb_reg_nth_match(int, VALUE);
int rb_reg_backref_number(VALUE match, VALUE backref);
VALUE rb_reg_last_match(VALUE);
VALUE rb_reg_match_pre(VALUE);
VALUE rb_reg_match_post(VALUE);
VALUE rb_reg_match_last(VALUE);

VALUE rb_reg_new_str(VALUE, int);
VALUE rb_reg_new(const char *, long, int);
VALUE rb_reg_alloc(void);
VALUE rb_reg_init_str(VALUE re, VALUE s, int options);
VALUE rb_reg_match(VALUE, VALUE);
VALUE rb_reg_match2(VALUE);
int rb_reg_options(VALUE);
/* ruby.c */

extern VALUE rb_argv0;
VALUE rb_get_argv(void);
void *rb_load_file(const char *);
void *rb_load_file_str(VALUE);
/* signal.c */
VALUE rb_f_kill(int, const VALUE *);

void (*ruby_posix_signal(int, void (*)(int)))(int);

void rb_trap_exit(void);
void rb_trap_exec(void);
const char *ruby_signal_name(int);
void ruby_default_signal(int);
/* sprintf.c */
VALUE rb_f_sprintf(int, const VALUE *);
VALUE rb_sprintf(const char *, ...) __attribute__((format(printf, 1, 2)));
VALUE rb_vsprintf(const char *, va_list);
VALUE rb_str_catf(VALUE, const char *, ...)
    __attribute__((format(printf, 2, 3)));
VALUE rb_str_vcatf(VALUE, const char *, va_list);
VALUE rb_str_format(int, const VALUE *, VALUE);
/* string.c */
VALUE rb_str_new(const char *, long);
VALUE rb_str_new_cstr(const char *);
VALUE rb_str_new_shared(VALUE);
VALUE rb_str_new_frozen(VALUE);
VALUE rb_str_new_with_class(VALUE, const char *, long);
VALUE rb_tainted_str_new_cstr(const char *);
VALUE rb_tainted_str_new(const char *, long);
VALUE rb_external_str_new(const char *, long);
VALUE rb_external_str_new_cstr(const char *);
VALUE rb_locale_str_new(const char *, long);
VALUE rb_locale_str_new_cstr(const char *);
VALUE rb_filesystem_str_new(const char *, long);
VALUE rb_filesystem_str_new_cstr(const char *);
VALUE rb_str_buf_new(long);
VALUE rb_str_buf_new_cstr(const char *);
VALUE rb_str_buf_new2(const char *);
VALUE rb_str_tmp_new(long);
VALUE rb_usascii_str_new(const char *, long);
VALUE rb_usascii_str_new_cstr(const char *);
VALUE rb_utf8_str_new(const char *, long);
VALUE rb_utf8_str_new_cstr(const char *);
VALUE rb_str_new_static(const char *, long);
VALUE rb_usascii_str_new_static(const char *, long);
VALUE rb_utf8_str_new_static(const char *, long);
void rb_str_free(VALUE);
void rb_str_shared_replace(VALUE, VALUE);
VALUE rb_str_buf_append(VALUE, VALUE);
VALUE rb_str_buf_cat(VALUE, const char *, long);
VALUE rb_str_buf_cat2(VALUE, const char *);
VALUE rb_str_buf_cat_ascii(VALUE, const char *);
VALUE rb_obj_as_string(VALUE);
VALUE rb_check_string_type(VALUE);
void rb_must_asciicompat(VALUE);
VALUE rb_str_dup(VALUE);
VALUE rb_str_resurrect(VALUE str);
VALUE rb_str_locktmp(VALUE);
VALUE rb_str_unlocktmp(VALUE);
VALUE rb_str_dup_frozen(VALUE);

VALUE rb_str_plus(VALUE, VALUE);
VALUE rb_str_times(VALUE, VALUE);
long rb_str_sublen(VALUE, long);
VALUE rb_str_substr(VALUE, long, long);
VALUE rb_str_subseq(VALUE, long, long);
char *rb_str_subpos(VALUE, long, long *);
void rb_str_modify(VALUE);
void rb_str_modify_expand(VALUE, long);
VALUE rb_str_freeze(VALUE);
void rb_str_set_len(VALUE, long);
VALUE rb_str_resize(VALUE, long);
VALUE rb_str_cat(VALUE, const char *, long);
VALUE rb_str_cat_cstr(VALUE, const char *);
VALUE rb_str_cat2(VALUE, const char *);
VALUE rb_str_append(VALUE, VALUE);
VALUE rb_str_concat(VALUE, VALUE);
st_index_t rb_memhash(const void *ptr, long len);
st_index_t rb_hash_start(st_index_t);
st_index_t rb_hash_uint32(st_index_t, uint32_t);
st_index_t rb_hash_uint(st_index_t, st_index_t);
st_index_t rb_hash_end(st_index_t);

st_index_t rb_str_hash(VALUE);
int rb_str_hash_cmp(VALUE, VALUE);
int rb_str_comparable(VALUE, VALUE);
int rb_str_cmp(VALUE, VALUE);
VALUE rb_str_equal(VALUE str1, VALUE str2);
VALUE rb_str_drop_bytes(VALUE, long);
void rb_str_update(VALUE, long, long, VALUE);
VALUE rb_str_replace(VALUE, VALUE);
VALUE rb_str_inspect(VALUE);
VALUE rb_str_dump(VALUE);
VALUE rb_str_split(VALUE, const char *);
__attribute__((__noreturn__))
__attribute__((__deprecated__)) void rb_str_associate(VALUE, VALUE);
__attribute__((__noreturn__)) __attribute__((__deprecated__))
VALUE rb_str_associated(VALUE);
void rb_str_setter(VALUE, ID, VALUE *);
VALUE rb_str_intern(VALUE);
VALUE rb_sym_to_s(VALUE);
long rb_str_strlen(VALUE);
VALUE rb_str_length(VALUE);
long rb_str_offset(VALUE, long);
__attribute__((__pure__)) size_t rb_str_capacity(VALUE);
VALUE rb_str_ellipsize(VALUE, long);
VALUE rb_str_scrub(VALUE, VALUE);
/* symbol.c */
VALUE rb_sym_all_symbols(void);
/* struct.c */
VALUE rb_struct_new(VALUE, ...);
VALUE rb_struct_define(const char *, ...);
VALUE rb_struct_define_under(VALUE, const char *, ...);
VALUE rb_struct_alloc(VALUE, VALUE);
VALUE rb_struct_initialize(VALUE, VALUE);
VALUE rb_struct_aref(VALUE, VALUE);
VALUE rb_struct_aset(VALUE, VALUE, VALUE);
VALUE rb_struct_getmember(VALUE, ID);
VALUE rb_struct_s_members(VALUE);
VALUE rb_struct_members(VALUE);
VALUE rb_struct_size(VALUE s);
__attribute__((__deprecated__)) const VALUE *rb_struct_ptr(VALUE s);
VALUE rb_struct_alloc_noinit(VALUE);
VALUE rb_struct_define_without_accessor(const char *, VALUE, rb_alloc_func_t,
                                        ...);
VALUE rb_struct_define_without_accessor_under(VALUE outer,
                                              const char *class_name,
                                              VALUE super,
                                              rb_alloc_func_t alloc, ...);

/* thread.c */
typedef void rb_unblock_function_t(void *);
typedef VALUE rb_blocking_function_t(void *);
void rb_thread_check_ints(void);
int rb_thread_interrupted(VALUE thval);

VALUE rb_mutex_new(void);
VALUE rb_mutex_locked_p(VALUE mutex);
VALUE rb_mutex_trylock(VALUE mutex);
VALUE rb_mutex_lock(VALUE mutex);
VALUE rb_mutex_unlock(VALUE mutex);
VALUE rb_mutex_sleep(VALUE self, VALUE timeout);
VALUE rb_mutex_synchronize(VALUE mutex, VALUE (*func)(VALUE arg), VALUE arg);
/* time.c */
void rb_timespec_now(struct timespec *);
VALUE rb_time_new(time_t, long);
VALUE rb_time_nano_new(time_t, long);
VALUE rb_time_timespec_new(const struct timespec *, int);
VALUE rb_time_num_new(VALUE, VALUE);
struct timeval rb_time_interval(VALUE num);
struct timeval rb_time_timeval(VALUE time);
struct timespec rb_time_timespec(VALUE time);
/* variable.c */
VALUE rb_mod_name(VALUE);
VALUE rb_class_path(VALUE);
VALUE rb_class_path_cached(VALUE);
void rb_set_class_path(VALUE, VALUE, const char *);
void rb_set_class_path_string(VALUE, VALUE, VALUE);
VALUE rb_path_to_class(VALUE);
VALUE rb_path2class(const char *);
void rb_name_class(VALUE, ID);
VALUE rb_class_name(VALUE);
__attribute__((__deprecated__)) void rb_autoload(VALUE, ID, const char *);
VALUE rb_autoload_load(VALUE, ID);
VALUE rb_autoload_p(VALUE, ID);
VALUE rb_f_trace_var(int, const VALUE *);
VALUE rb_f_untrace_var(int, const VALUE *);
VALUE rb_f_global_variables(void);
void rb_alias_variable(ID, ID);
__attribute__((__deprecated__)) struct st_table *rb_generic_ivar_table(VALUE);
void rb_copy_generic_ivar(VALUE, VALUE);
void rb_free_generic_ivar(VALUE);
VALUE rb_ivar_get(VALUE, ID);
VALUE rb_ivar_set(VALUE, ID, VALUE);
VALUE rb_ivar_defined(VALUE, ID);
void rb_ivar_foreach(VALUE, int (*)(), st_data_t);
st_index_t rb_ivar_count(VALUE);
VALUE rb_attr_get(VALUE, ID);
VALUE rb_obj_instance_variables(VALUE);
VALUE rb_obj_remove_instance_variable(VALUE, VALUE);
void *rb_mod_const_at(VALUE, void *);
void *rb_mod_const_of(VALUE, void *);
VALUE rb_const_list(void *);
VALUE rb_mod_constants(int, const VALUE *, VALUE);
VALUE rb_mod_remove_const(VALUE, VALUE);
int rb_const_defined(VALUE, ID);
int rb_const_defined_at(VALUE, ID);
int rb_const_defined_from(VALUE, ID);
VALUE rb_const_get(VALUE, ID);
VALUE rb_const_get_at(VALUE, ID);
VALUE rb_const_get_from(VALUE, ID);
void rb_const_set(VALUE, ID, VALUE);
VALUE rb_const_remove(VALUE, ID);
__attribute__((__noreturn__)) VALUE rb_mod_const_missing(VALUE, VALUE);
VALUE rb_cvar_defined(VALUE, ID);
void rb_cvar_set(VALUE, ID, VALUE);
VALUE rb_cvar_get(VALUE, ID);
void rb_cv_set(VALUE, const char *, VALUE);
VALUE rb_cv_get(VALUE, const char *);
void rb_define_class_variable(VALUE, const char *, VALUE);
VALUE rb_mod_class_variables(int, const VALUE *, VALUE);
VALUE rb_mod_remove_cvar(VALUE, VALUE);

ID rb_frame_callee(void);
VALUE rb_str_succ(VALUE);
VALUE rb_time_succ(VALUE);
int rb_frame_method_id_and_class(ID *idp, VALUE *klassp);
VALUE rb_make_backtrace(void);
VALUE rb_make_exception(int, const VALUE *);

/* deprecated */
__attribute__((__noreturn__)) __attribute__((__deprecated__)) void
rb_frame_pop(void);

#pragma GCC visibility pop

static inline void rb_clone_setup(VALUE clone, VALUE obj) {
  rb_obj_setup(clone, rb_singleton_class_clone(obj),
               ((struct RBasic *)(obj))->flags);
  rb_singleton_class_attached((((struct RBasic *)(clone))->klass), clone);
  if (((!(((VALUE)(obj)&RUBY_IMMEDIATE_MASK) ||
          !!(((VALUE)(obj) & ~((VALUE)RUBY_Qnil)) == 0)) &&
        (int)(((struct RBasic *)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)
           ? (((struct RBasic *)((obj)))->flags & ((RUBY_FL_EXIVAR)))
           : 0))
    rb_copy_generic_ivar(clone, obj);
}

static inline void rb_dup_setup(VALUE dup, VALUE obj) {
  rb_obj_setup(dup, rb_obj_class(obj),
               (((struct RBasic *)(obj))->flags & (RUBY_FL_DUPPED)));
  if (((!(((VALUE)(obj)&RUBY_IMMEDIATE_MASK) ||
          !!(((VALUE)(obj) & ~((VALUE)RUBY_Qnil)) == 0)) &&
        (int)(((struct RBasic *)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)
           ? (((struct RBasic *)((obj)))->flags & ((RUBY_FL_EXIVAR)))
           : 0))
    rb_copy_generic_ivar(dup, obj);
}

static inline long rb_array_len(VALUE a) {
  return (((struct RBasic *)(a))->flags & RARRAY_EMBED_FLAG)
             ? (long)((((struct RBasic *)(a))->flags >>
                       RARRAY_EMBED_LEN_SHIFT) &
                      (RARRAY_EMBED_LEN_MASK >> RARRAY_EMBED_LEN_SHIFT))
             : ((struct RArray *)(a))->as.heap.len;
}
static inline const VALUE *rb_array_const_ptr(VALUE a) {
  return ((((struct RBasic *)(a))->flags & RARRAY_EMBED_FLAG)
              ? ((struct RArray *)(a))->as.ary
              : ((struct RArray *)(a))->as.heap.ptr);
}

static inline long rb_struct_len(VALUE st) {
  return (((struct RBasic *)(st))->flags & RSTRUCT_EMBED_LEN_MASK)
             ? (long)((((struct RBasic *)(st))->flags >>
                       RSTRUCT_EMBED_LEN_SHIFT) &
                      (RSTRUCT_EMBED_LEN_MASK >> RSTRUCT_EMBED_LEN_SHIFT))
             : ((struct RStruct *)(st))->as.heap.len;
}

static inline const VALUE *rb_struct_const_ptr(VALUE st) {
  return ((((struct RBasic *)(st))->flags & RSTRUCT_EMBED_LEN_MASK)
              ? ((struct RStruct *)(st))->as.ary
              : ((struct RStruct *)(st))->as.heap.ptr);
}
int ruby_native_thread_p(void);

/* traditional set_trace_func events */
/* for TracePoint extended events */

/* special events */

/* internal events */

/* 0x080000 */
typedef uint32_t rb_event_flag_t;
typedef void (*rb_event_hook_func_t)(rb_event_flag_t evflag, VALUE data,
                                     VALUE self, ID mid, VALUE klass);

void rb_add_event_hook(rb_event_hook_func_t func, rb_event_flag_t events,
                       VALUE data);
int rb_remove_event_hook(rb_event_hook_func_t func);

/* locale insensitive functions */

int rb_isalnum(int c);
int rb_isalpha(int c);
int rb_isblank(int c);
int rb_iscntrl(int c);
int rb_isdigit(int c);
int rb_isgraph(int c);
int rb_islower(int c);
int rb_isprint(int c);
int rb_ispunct(int c);
int rb_isspace(int c);
int rb_isupper(int c);
int rb_isxdigit(int c);
int rb_tolower(int c);
int rb_toupper(int c);
int st_locale_insensitive_strcasecmp(const char *s1, const char *s2);
int st_locale_insensitive_strncasecmp(const char *s1, const char *s2, size_t n);

unsigned long ruby_strtoul(const char *str, char **endptr, int base);

int ruby_snprintf(char *str, size_t n, char const *fmt, ...)
    __attribute__((format(printf, 3, 4)));
int ruby_vsnprintf(char *str, size_t n, char const *fmt, va_list ap);

/**
 * @defgroup embed CRuby Embedding APIs
 * CRuby interpreter APIs. These are APIs to embed MRI interpreter into your
 * program.
 * These functions are not a part of Ruby extension library API.
 * Extension libraries of Ruby should not depend on these functions.
 * @{
 */

/** @defgroup ruby1 ruby(1) implementation
 * A part of the implementation of ruby(1) command.
 * Other programs that embed Ruby interpreter do not always need to use these
 * functions.
 * @{
 */

void ruby_sysinit(int *argc, char ***argv);
void ruby_init(void);
void *ruby_options(int argc, char **argv);
int ruby_executable_node(void *n, int *status);
int ruby_run_node(void *n);

/* version.c */
void ruby_show_version(void);
void ruby_show_copyright(void);

/*! A convenience macro to call ruby_init_stack(). Must be placed just after
 *  variable declarations */

/*! @} */

void ruby_init_stack(volatile VALUE *);

int ruby_setup(void);
int ruby_cleanup(volatile int);

void ruby_finalize(void);
__attribute__((__noreturn__)) void ruby_stop(int);

void ruby_set_stack_size(size_t);
int ruby_stack_check(void);
size_t ruby_stack_length(VALUE **);

int ruby_exec_node(void *n);

void ruby_script(const char *name);
void ruby_set_script_name(VALUE name);

void ruby_prog_init(void);
void ruby_set_argv(int, char **);
void *ruby_process_options(int, char **);
void ruby_init_loadpath(void);
void ruby_incpush(const char *);
void ruby_sig_finalize(void);

/*! @} */

#pragma GCC visibility pop
