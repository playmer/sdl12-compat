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


#ifndef HAVE_ICONV
#undef SDL_iconv_t
#define SDL_iconv_t SDL_COMPAT_SDL_iconv_t
#undef SDL_iconv_open
#define SDL_iconv_open SDL_COMPAT_SDL_iconv_open
#undef SDL_iconv_close
#define SDL_iconv_close SDL_COMPAT_SDL_iconv_close
#endif

#ifndef HAVE_MALLOC
#undef SDL_malloc
#define SDL_malloc SDL_COMPAT_SDL_malloc
#endif

#ifndef HAVE_CALLOC
#undef SDL_calloc
#define SDL_calloc SDL_COMPAT_SDL_calloc
#endif

#ifndef HAVE_REALLOC
#undef SDL_realloc
#define SDL_realloc SDL_COMPAT_SDL_realloc
#endif

#ifndef HAVE_FREE
#undef SDL_free
#define SDL_free SDL_COMPAT_SDL_free
#endif

#ifndef HAVE_GETENV
#undef SDL_getenv
#define SDL_getenv SDL_COMPAT_SDL_getenv
#endif

#ifndef HAVE_PUTENV
#undef SDL_putenv
#define SDL_putenv SDL_COMPAT_SDL_putenv
#endif

#ifndef HAVE_QSORT
#undef SDL_qsort
#define SDL_qsort SDL_COMPAT_SDL_qsort
#endif

#ifndef HAVE_MEMSET
#undef SDL_memset
#define SDL_memset SDL_COMPAT_SDL_memset
#endif

#ifndef HAVE_MEMCPY
#undef SDL_memcpy
#define SDL_memcpy SDL_COMPAT_SDL_memcpy
#endif

#ifndef HAVE_REVCPY
#undef SDL_revcpy
#define SDL_revcpy SDL_COMPAT_SDL_revcpy
#endif

#ifndef HAVE_MEMCMP
#undef SDL_memcmp
#define SDL_memcmp SDL_COMPAT_SDL_memcmp
#endif

#ifndef HAVE_STRLEN
#undef SDL_strlen
#define SDL_strlen SDL_COMPAT_SDL_strlen
#endif

#ifndef HAVE_STRLCPY
#undef SDL_strlcpy
#define SDL_strlcpy SDL_COMPAT_SDL_strlcpy
#endif

#ifndef HAVE_STRLCAT
#undef SDL_strlcat
#define SDL_strlcat SDL_COMPAT_SDL_strlcat
#endif

#ifndef HAVE_STRDUP
#undef SDL_strdup
#define SDL_strdup SDL_COMPAT_SDL_strdup
#endif

#ifndef HAVE__STRREV
#undef SDL_strrev
#define SDL_strrev SDL_COMPAT_SDL_strrev
#endif

#ifndef HAVE__STRUPR
#undef SDL_strupr
#define SDL_strupr SDL_COMPAT_SDL_strupr
#endif

#ifndef HAVE__STRLWR
#undef SDL_strlwr
#define SDL_strlwr SDL_COMPAT_SDL_strlwr
#endif

#ifndef HAVE_STRCHR
#undef SDL_strchr
#define SDL_strchr SDL_COMPAT_SDL_strchr
#endif

#ifndef HAVE_STRRCHR
#undef SDL_strrchr
#define SDL_strrchr SDL_COMPAT_SDL_strrchr
#endif

#ifndef HAVE_STRSTR
#undef SDL_strstr
#define SDL_strstr SDL_COMPAT_SDL_strstr
#endif

#ifndef HAVE__LTOA
#undef SDL_ltoa
#define SDL_ltoa SDL_COMPAT_SDL_ltoa
#endif

#ifndef HAVE__ULTOA
#undef SDL_ultoa
#define SDL_ultoa SDL_COMPAT_SDL_ultoa
#endif

#ifndef HAVE_STRTOL
#undef SDL_strtol
#define SDL_strtol SDL_COMPAT_SDL_strtol
#endif

#ifndef HAVE_STRTOUL
#undef SDL_strtoul
#define SDL_strtoul SDL_COMPAT_SDL_strtoul
#endif

#ifndef HAVE__I64TOA
#undef SDL_lltoa
#define SDL_lltoa SDL_COMPAT_SDL_lltoa
#endif

#ifndef HAVE__UI64TOA
#undef SDL_ulltoa
#define SDL_ulltoa SDL_COMPAT_SDL_ulltoa
#endif

#ifndef HAVE__STRTOI64
#undef SDL_strtoll
#define SDL_strtoll SDL_COMPAT_SDL_strtoll
#elif !defined(HAVE_STRTOLL)
#undef SDL_strtoll
#define SDL_strtoll SDL_COMPAT_SDL_strtoll
#endif

#ifndef HAVE__STRTOUI64
#undef SDL_strtoull
#define SDL_strtoull SDL_COMPAT_SDL_strtoull
#elif !defined(HAVE_STRTOULL)
#undef SDL_strtoull
#define SDL_strtoull SDL_COMPAT_SDL_strtoull
#endif

#ifndef HAVE_STRTOD
#undef SDL_strtod
#define SDL_strtod SDL_COMPAT_SDL_strtod
#endif

#ifndef HAVE_STRCMP
#undef SDL_strcmp
#define SDL_strcmp SDL_COMPAT_SDL_strcmp
#endif

#ifndef HAVE_STRNCMP
#undef SDL_strncmp
#define SDL_strncmp SDL_COMPAT_SDL_strncmp
#endif

#ifndef HAVE_STRCASECMP
#undef SDL_strcasecmp
#define SDL_strcasecmp SDL_COMPAT_SDL_strcasecmp
#elif !defined(HAVE__STRICMP)
#undef SDL_strcasecmp
#define SDL_strcasecmp SDL_COMPAT_SDL_strcasecmp
#endif

#ifndef HAVE_STRNCASECMP
#undef SDL_strncasecmp
#define SDL_strncasecmp SDL_COMPAT_SDL_strncasecmp
#elif !defined(HAVE__STRNICMP)
#undef SDL_strcasecmp
#define SDL_strcasecmp SDL_COMPAT_SDL_strcasecmp
#endif

#ifndef HAVE_SSCANF
#undef SDL_sscanf
#define SDL_sscanf SDL_COMPAT_SDL_sscanf
#endif

#ifndef HAVE_SNPRINT
#undef SDL_snprintf
#define SDL_snprintf SDL_COMPAT_SDL_snprintf
#endif

#ifndef HAVE_VSNPRINTF
#undef SDL_vsnprintf
#define SDL_vsnprintf SDL_COMPAT_SDL_vsnprintf
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

