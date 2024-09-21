/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2024 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/* These headers are from sdl12-compat, and are intended to give just enough
functionality to let you build an SDL-1.2-based project without having the
real SDL-1.2 available to you. */

/* This file is mostly verbatim close_code.h from SDL2. */

#ifndef _begin_code_h
#error close_code.h included without matching begin_code.h
#endif
#undef _begin_code_h


#ifdef __SDL12_COMPAT_FULLY_STATIC__

#ifdef HAVE_ICONV
#undef SDL_iconv_t
#define SDL_COMPAT_SDL_iconv_t iconv_t
#undef SDL_iconv_open
#define SDL_COMPAT_SDL_iconv_open iconv_open
#undef SDL_iconv_close
#define SDL_COMPAT_SDL_iconv_close iconv_close
#endif

#ifdef HAVE_MALLOC
#undef SDL_malloc
#define SDL_COMPAT_SDL_malloc malloc
#endif

#ifdef HAVE_CALLOC
#undef SDL_calloc
#define SDL_COMPAT_SDL_calloc calloc
#endif

#ifdef HAVE_REALLOC
#undef SDL_realloc
#define SDL_COMPAT_SDL_realloc realloc
#endif

#ifdef HAVE_FREE
#undef SDL_free
#define SDL_COMPAT_SDL_free free
#endif

#ifdef HAVE_GETENV
#undef SDL_getenv
#define SDL_COMPAT_SDL_getenv getenv
#endif

#ifdef HAVE_PUTENV
#undef SDL_putenv
#define SDL_COMPAT_SDL_putenv putenv
#endif

#ifdef HAVE_QSORT
#undef SDL_qsort
#define SDL_COMPAT_SDL_qsort qsort
#endif

#ifdef HAVE_MEMSET
#undef SDL_memset
#define SDL_COMPAT_SDL_memset memset
#endif

#ifdef HAVE_MEMCPY
#undef SDL_memcpy
#define SDL_COMPAT_SDL_memcpy memcpy
#endif

#ifdef HAVE_REVCPY
#undef SDL_revcpy
#define SDL_COMPAT_SDL_revcpy revcpy
#endif

#ifdef HAVE_MEMCMP
#undef SDL_memcmp
#define SDL_COMPAT_SDL_memcmp memcmp
#endif

#ifdef HAVE_STRLEN
#undef SDL_strlen
#define SDL_COMPAT_SDL_strlen strlen
#endif

#ifdef HAVE_STRLCPY
#undef SDL_strlcpy
#define SDL_COMPAT_SDL_strlcpy strlcpy
#endif

#ifdef HAVE_STRLCAT
#undef SDL_strlcat
#define SDL_COMPAT_SDL_strlcat strlcat
#endif

#ifdef HAVE_STRDUP
#undef SDL_strdup
#define SDL_COMPAT_SDL_strdup strdup
#endif

#ifdef HAVE__STRREV
#undef SDL_strrev
#define SDL_COMPAT_SDL_strrev _strrev
#endif

#ifdef HAVE__STRUPR
#undef SDL_strupr
#define SDL_COMPAT_SDL_strupr _strupr
#endif

#ifdef HAVE__STRLWR
#undef SDL_strlwr
#define SDL_COMPAT_SDL_strlwr _strlwr
#endif

#ifdef HAVE_STRCHR
#undef SDL_strchr
#define SDL_COMPAT_SDL_strchr strchr
#endif

#ifdef HAVE_STRRCHR
#undef SDL_strrchr
#define SDL_COMPAT_SDL_strrchr strrchr
#endif

#ifdef HAVE_STRSTR
#undef SDL_strstr
#define SDL_COMPAT_SDL_strstr strstr
#endif

#ifdef HAVE__LTOA
#undef SDL_ltoa
#define SDL_COMPAT_SDL_ltoa _ltoa
#endif

#ifdef HAVE__ULTOA
#undef SDL_ultoa
#define SDL_COMPAT_SDL_ultoa _ultoa
#endif

#ifdef HAVE_STRTOL
#undef SDL_strtol
#define SDL_COMPAT_SDL_strtol strtol
#endif

#ifdef HAVE_STRTOUL
#undef SDL_strtoul
#define SDL_COMPAT_SDL_strtoul strtoul
#endif

#ifdef HAVE__I64TOA
#undef SDL_lltoa
#define SDL_COMPAT_SDL_lltoa _i64toa
#endif

#ifdef HAVE__UI64TOA
#undef SDL_ulltoa
#define SDL_COMPAT_SDL_ulltoa _ui64toa
#endif

#ifdef HAVE__STRTOI64
#undef SDL_strtoll
#define SDL_COMPAT_SDL_strtoll _strtoi64
#endif

#ifdef HAVE__STRTOUI64
#undef SDL_strtoull
#define SDL_COMPAT_SDL_strtoull _strtoui64
#endif

#ifdef HAVE_STRTOD
#undef SDL_strtod
#define SDL_COMPAT_SDL_strtod strtod
#endif

#ifdef HAVE_STRCMP
#undef SDL_strcmp
#define SDL_COMPAT_SDL_strcmp strcmp
#endif

#ifdef HAVE_STRNCMP
#undef SDL_strncmp
#define SDL_COMPAT_SDL_strncmp strncmp
#endif

#ifdef HAVE_STRCASECMP
#undef SDL_strcasecmp
#define SDL_COMPAT_SDL_strcasecmp strcasecmp
#endif

#ifdef HAVE_STRNCASECMP
#undef SDL_strncasecmp
#define SDL_COMPAT_SDL_strncasecmp strncasecmp
#endif

#ifdef HAVE_SSCANF
#undef SDL_sscanf
#define SDL_COMPAT_SDL_sscanf sscanf
#endif

#ifdef HAVE_SNPRINT
#undef SDL_snprintf
#define SDL_COMPAT_SDL_snprintf snprintf
#endif

#ifdef HAVE_VSNPRINTF
#undef SDL_vsnprintf
#define SDL_COMPAT_SDL_vsnprintf vsnprintf
#endif

#endif

/* Reset structure packing at previous byte alignment */
#if defined(_MSC_VER) || defined(__MWERKS__) || defined(__BORLANDC__)
#ifdef __BORLANDC__
#pragma nopackwarning
#endif
#pragma pack(pop)
#endif /* Compiler needs structure packing set */

#ifdef __cplusplus
}
#endif

