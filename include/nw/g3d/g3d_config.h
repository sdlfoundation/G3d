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
#include <gx2/context.h>
#include <gx2/debug.h>
#include <gx2/display.h>
#include <gx2/displaylist.h>
#include <gx2/draw.h>
#include <gx2/enum.h>
#include <gx2/event.h>
#include <gx2/gx2.dox>
#include <gx2/mem.h>
#include <gx2/registers.h>
#include <gx2/sampler.h>
#include <gx2/shaders.h>
#include <gx2/state.h>
#include <gx2/surface.h>
#include <gx2/swap.h>
#include <gx2/temp.h>
#include <gx2/tessellation.h>
#include <gx2/texture.h>
#include <gx2/utils.h>

#include <nw/g3d/g3d_assert.h>

#endif // NW_G3D_CONFIG_H_
