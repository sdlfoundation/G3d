#ifndef NW_G3D_FND_GX2STRUCT_H_
#define NW_G3D_FND_GX2STRUCT_H_

#include <nw/g3d/g3d_config.h>
/*
#include <cafe/gx2/gx2Enum.h>
#include <cafe/gx2/gx2Constant.h>
#include <cafe/gx2/gx2Misc.h>
#include <cafe/gx2/gx2Shaders.h>
#include <cafe/gx2/gx2Surface.h>
#include <cafe/gx2/gx2Texture.h>
 */
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

namespace nw { namespace g3d { namespace fnd { namespace internal {

typedef ::GX2Surface GX2SurfaceData;
typedef ::GX2Texture GX2TextureData;
typedef ::GX2VertexShader GX2VertexShaderData;
typedef ::GX2GeometryShader GX2GeometryShaderData;
typedef ::GX2PixelShader GX2PixelShaderData;
typedef ::GX2FetchShader GX2FetchShaderData;

} } } } // namespace nw::g3d::fnd::internal

#endif // NW_G3D_FND_GX2STRUCT_H_
