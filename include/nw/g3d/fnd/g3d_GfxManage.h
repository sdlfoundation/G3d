#ifndef NW_G3D_FND_GFXCONTEXT_H_
#define NW_G3D_FND_GFXCONTEXT_H_

#include <nw/g3d/g3d_config.h>


//this is probably too many includes to replace this but it should work anyways
// #include <cafe/gx2/gx2Enum.h>

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

namespace nw { namespace g3d { namespace fnd {

class CPUCache
{
public:
    /*
    static void Flush(const void* addr, size_t size);
    static void Store(const void* addr, size_t size);
    static void Invalidate(void* addr, size_t size);
    static void Sync();
    */
    static bool IsValid(const void* addr, size_t size);
    static void FillZero(void* addr, size_t size);
};

class GPUClock
{
public:
    typedef s64 Tick;

    GPUClock()
    {
    }

    /*
    void Setup();
    void Cleanup();
    void Query();
    bool IsReady() const;
    Tick GetTimeStamp() const;
    static Tick Now();
    */
    static Tick GetFreq() { return s_Freq; }

    static float ToSeconds(Tick ticks) { return static_cast<float>(ticks) / s_Freq; }
    static float ToMilliSecs(Tick ticks) { return ToSeconds(ticks) * 1000; }
    static float ToMicroSecs(Tick ticks) { return ToSeconds(ticks) * (1000 * 1000); }
    static float ToPercents(Tick ticks) { return ToSeconds(ticks) * (60 * 100); }

    union
    {
        u64 timestamp;
        u32 handle;
    };

private:
    static Tick s_Freq;

    NW_G3D_DISALLOW_COPY_AND_ASSIGN(GPUClock);
};

class CPUClock
{
public:
    typedef s64 Tick;

    // static Tick Now();
    static Tick GetFreq() { return s_Freq.Get(); }

    static float ToSeconds(Tick ticks) { return static_cast<float>(ticks) / s_Freq.Get(); }
    static float ToMilliSecs(Tick ticks) { return ToSeconds(ticks) * 1000; }
    static float ToMicroSecs(Tick ticks) { return ToSeconds(ticks) * (1000 * 1000); }
    static float ToPercents(Tick ticks) { return ToSeconds(ticks) * (60 * 100); }

private:
    class Freq
    {
    public:
        Freq() { Init(); }

        void Init();
        Tick Get() const { return m_Value; }

    private:
        Tick m_Value;
    };
    static Freq s_Freq;

    NW_G3D_DISALLOW_COPY_AND_ASSIGN(CPUClock);
};

} } } // namespace nw::g3d::fnd

#endif // NW_G3D_FND_GFXCONTEXT_H_
