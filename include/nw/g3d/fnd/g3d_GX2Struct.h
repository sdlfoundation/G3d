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

namespace nw { namespace g3d { namespace fnd { namespace internal {

typedef ::GX2Surface GX2SurfaceData;
typedef ::GX2Texture GX2TextureData;
typedef ::GX2VertexShader GX2VertexShaderData;
typedef ::GX2GeometryShader GX2GeometryShaderData;
typedef ::GX2PixelShader GX2PixelShaderData;
typedef ::GX2FetchShader GX2FetchShaderData;

} } } } // namespace nw::g3d::fnd::internal

#endif // NW_G3D_FND_GX2STRUCT_H_
