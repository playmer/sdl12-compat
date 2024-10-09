#include "SDL20_include_wrapper.h"

//#define SDL20_SYM(rc,fn,params,args,ret) \
//    rc SDLCALL SDL_##fn params;
//
//#define SDL20_SYM_VARARGS(rc,fn,params) \
//    extern rc (SDLCALL *SDL20_##fn) params;

#define SDL20_SYM(rc,fn,params,args,ret) \
    extern rc (SDLCALL *SDL20_##fn) params;

#define SDL20_SYM_PASSTHROUGH(rc,fn,params,args,ret) \
    extern rc (SDLCALL *SDL20_##fn) params;

#include "SDL20_syms.h"


#undef SDL20_SYM