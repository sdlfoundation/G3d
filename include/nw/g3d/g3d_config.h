#ifndef NW_G3D_CONFIG_H_
#define NW_G3D_CONFIG_H_

#if !defined(NW_DEBUG) && !defined(NW_DEVELOP) && !defined(NW_RELEASE)
#error "Build target is not defined."
#endif

#include <cstddef>
#include <cstdlib>
#include <new>

#define NW_G3D_CONFIG_USE_STATIC 1

#define NW_G3D_PERF_ENABLE 1
#define NW_G3D_PERF_LEVEL 0

#define NW_G3D_FORCE_PPC_SYNC 0

#define NW_G3D_MAX_SHADER_KEY 32

#include <nw/g3d/g3d_defs.h>

#include <sdk_ver.h>
#include <gx2/clear.h>
#include <gx2/ccontext.h>
#include <gx2/cdebug.h>
#include <gx2/cdisplay.h>
#include <gx2/cdisplaylist.h>
#include <gx2/cdraw.h>
#include <gx2/cenum.h>
#include <gx2/cevent.h>
#include <gx2/cgx2.dox>
#include <gx2/cmem.h>
#include <gx2/cregisters.h>
#include <gx2/csampler.h>
#include <gx2/cshaders.h>
#include <gx2/cstate.h>
#include <gx2/csurface.h>
#include <gx2/cswap.h>
#include <gx2/ctemp.h>
#include <gx2/ctessellation.h>
#include <gx2/ctexture.h>
#include <gx2/cutils.h>

#include <nw/g3d/g3d_assert.h>

#endif // NW_G3D_CONFIG_H_
