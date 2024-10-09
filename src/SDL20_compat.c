//#ifndef __SDL12_COMPAT_FULLY_STATIC__
//#include "SDL20_include_wrapper.h"
//#else
//#include <SDL.h>
//#include <SDL_syswm.h>
//#endif
//
///* on x86 Linux builds, we have the public entry points force stack alignment to 16 bytes
//   on entry. This won't be a massive performance hit, but it might help extremely old
//   binaries that want to call into SDL to not crash in hard-to-diagnose ways. It's not a
//   panacea to the stack alignment problem, but it might help a little.
//
//   The force_align_arg_pointer attribute requires gcc >= 4.2.x. */
//#if defined(__clang__)
//#define HAVE_FORCE_ALIGN_ARG_POINTER
//#elif defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 2))
//#define HAVE_FORCE_ALIGN_ARG_POINTER
//#endif
//#if defined(__linux__) && defined(__i386__) && defined(HAVE_FORCE_ALIGN_ARG_POINTER)
//#define FORCEALIGNATTR __attribute__((force_align_arg_pointer))
//#else
//#define FORCEALIGNATTR
//#endif
//
///* Statically load functions */
//#ifdef __SDL12_COMPAT_FULLY_STATIC__
//#define DECLSPEC12 DECLSPEC FORCEALIGNATTR
//
//#define SDL20_SYM(rc,fn,params,args,ret) \
//    rc (SDLCALL *SDL20_##fn) params = SDL_##fn;
//
//#define SDL20_SYM_PASSTHROUGH(rc,fn,params,args,ret) \
//    rc (SDLCALL *SDL20_##fn) params = SDL_##fn; \
//    DECLSPEC12 rc SDLCALL SDL_COMPAT_SDL_##fn params { ret SDL20_##fn args; }
//
//#include "SDL20_syms.h"
//
//#undef SDL20_SYM
//#undef SDL20_SYM_PASSTHROUGH
//
//
///* Dynamically load functions */
//#else
//
//
//#endif