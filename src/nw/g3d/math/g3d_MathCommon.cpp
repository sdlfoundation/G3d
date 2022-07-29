﻿#include <nw/g3d/math/g3d_MathCommon.h>

namespace nw { namespace g3d { namespace math { namespace internal {

extern const SinCosSample gSinCosTable[SinCosSample::TABLE_SIZE] = {
    0.0f, 1.0f, 0.0245412285229123f, -0.00030118130379575f, //  rad = 0.0, deg = 0.0
    0.0245412285229123f, 0.999698818696204f, 0.0245264458045057f, -0.000903362491031845f, //  rad = 0.0245436926061703, deg = 1.40625
    0.049067674327418f, 0.998795456205172f, 0.0244968892722494f, -0.0015049995264822f, //  rad = 0.0490873852123405, deg = 2.8125
    0.0735645635996674f, 0.99729045667869f, 0.0244525767298932f, -0.00210573000649328f, //  rad = 0.0736310778185108, deg = 4.21875
    0.0980171403295606f, 0.995184726672197f, 0.0243935348696556f, -0.00270519207348696f, //  rad = 0.098174770424681, deg = 5.625
    0.122410675199216f, 0.99247953459871f, 0.0243197992561456f, -0.00330302463392895f, //  rad = 0.122718463030851, deg = 7.03125
    0.146730474455362f, 0.989176509964781f, 0.0242314143049395f, -0.00389886757583979f, //  rad = 0.147262155637022, deg = 8.4375
    0.170961888760301f, 0.985277642388941f, 0.024128433255827f, -0.00449236198571079f, //  rad = 0.171805848243192, deg = 9.84375
    0.195090322016128f, 0.98078528040323f, 0.0240109181407416f, -0.00508315036470186f, //  rad = 0.196349540849362, deg = 11.25
    0.21910124015687f, 0.975702130038529f, 0.0238789397463941f, -0.0056708768439846f, //  rad = 0.220893233455532, deg = 12.65625
    0.242980179903264f, 0.970031253194544f, 0.0237325775716345f, -0.00625518739910413f, //  rad = 0.245436926061703, deg = 14.0625
    0.266712757474898f, 0.96377606579544f, 0.023571919779564f, -0.00683573006323102f, //  rad = 0.269980618667873, deg = 15.46875
    0.290284677254462f, 0.956940335732209f, 0.0233970631444292f, -0.00741215513917215f, //  rad = 0.294524311274043, deg = 16.875
    0.313681740398892f, 0.949528180593037f, 0.0232081129933285f, -0.00798411541001587f, //  rad = 0.319068003880213, deg = 18.28125
    0.33688985339222f, 0.941544065183021f, 0.0230051831427681f, -0.00855126634828185f, //  rad = 0.343611696486384, deg = 19.6875
    0.359895036534988f, 0.932992798834739f, 0.0227883958301017f, -0.00911326632345222f, //  rad = 0.368155389092554, deg = 21.09375
    0.38268343236509f, 0.923879532511287f, 0.0225578816399001f, -0.00966977680775605f, //  rad = 0.392699081698724, deg = 22.5
    0.40524131400499f, 0.914209755703531f, 0.0223137794252922f, -0.0102204625800874f, //  rad = 0.417242774304894, deg = 23.90625
    0.427555093430282f, 0.903989293123443f, 0.0220562362243245f, -0.010764991927928f, //  rad = 0.441786466911065, deg = 25.3125
    0.449611329654607f, 0.893224301195515f, 0.0217854071713911f, -0.0113030368471603f, //  rad = 0.466330159517235, deg = 26.71875
    0.471396736825998f, 0.881921264348355f, 0.0215014554037864f, -0.0118342732396436f, //  rad = 0.490873852123405, deg = 28.125
    0.492898192229784f, 0.870086991108711f, 0.0212045519634376f, -0.0123583811084393f, //  rad = 0.515417544729575, deg = 29.53125
    0.514102744193222f, 0.857728610000272f, 0.0208948756938755f, -0.012875044750565f, //  rad = 0.539961237335746, deg = 30.9375
    0.534997619887097f, 0.844853565249707f, 0.020572613132505f, -0.0133839529471619f, //  rad = 0.564504929941916, deg = 32.34375
    0.555570233019602f, 0.831469612302545f, 0.0202379583982432f, -0.0138847991509615f, //  rad = 0.589048622548086, deg = 33.75
    0.575808191417845f, 0.817584813151584f, 0.019891113074588f, -0.0143772816709388f, //  rad = 0.613592315154257, deg = 35.15625
    0.595699304492433f, 0.803207531480645f, 0.0195322860881935f, -0.0148611038540386f, //  rad = 0.638136007760427, deg = 36.5625
    0.615231590580627f, 0.788346427626606f, 0.0191616935830187f, -0.0153359742638693f, //  rad = 0.662679700366597, deg = 37.96875
    0.634393284163645f, 0.773010453362737f, 0.0187795587901313f, -0.0158016068562524f, //  rad = 0.687223392972767, deg = 39.375
    0.653172842953777f, 0.757208846506485f, 0.0183861118932416f, -0.0162577211515255f, //  rad = 0.711767085578938, deg = 40.78125
    0.671558954847018f, 0.740951125354959f, 0.0179815898900485f, -0.0167040424034921f, //  rad = 0.736310778185108, deg = 42.1875
    0.689540544737067f, 0.724247082951467f, 0.0175662364494806f, -0.0171403017649194f, //  rad = 0.760854470791278, deg = 43.59375
    0.707106781186547f, 0.707106781186548f, 0.0171403017649194f, -0.0175662364494806f, //  rad = 0.785398163397448, deg = 45.0
    0.724247082951467f, 0.689540544737067f, 0.0167040424034922f, -0.0179815898900486f, //  rad = 0.809941856003619, deg = 46.40625
    0.740951125354959f, 0.671558954847018f, 0.0162577211515254f, -0.0183861118932416f, //  rad = 0.834485548609789, deg = 47.8125
    0.757208846506484f, 0.653172842953777f, 0.0158016068562525f, -0.0187795587901313f, //  rad = 0.859029241215959, deg = 49.21875
    0.773010453362737f, 0.634393284163645f, 0.0153359742638692f, -0.0191616935830187f, //  rad = 0.883572933822129, deg = 50.625
    0.788346427626606f, 0.615231590580627f, 0.0148611038540386f, -0.0195322860881934f, //  rad = 0.9081166264283, deg = 52.03125
    0.803207531480645f, 0.595699304492433f, 0.0143772816709389f, -0.0198911130745881f, //  rad = 0.93266031903447, deg = 53.4375
    0.817584813151584f, 0.575808191417845f, 0.0138847991509615f, -0.0202379583982431f, //  rad = 0.95720401164064, deg = 54.84375
    0.831469612302545f, 0.555570233019602f, 0.0133839529471618f, -0.020572613132505f, //  rad = 0.98174770424681, deg = 56.25
    0.844853565249707f, 0.534997619887097f, 0.0128750447505651f, -0.0208948756938756f, //  rad = 1.00629139685298, deg = 57.65625
    0.857728610000272f, 0.514102744193222f, 0.0123583811084392f, -0.0212045519634376f, //  rad = 1.03083508945915, deg = 59.0625
    0.870086991108711f, 0.492898192229784f, 0.0118342732396436f, -0.0215014554037863f, //  rad = 1.05537878206532, deg = 60.46875
    0.881921264348355f, 0.471396736825998f, 0.0113030368471604f, -0.0217854071713912f, //  rad = 1.07992247467149, deg = 61.875
    0.893224301195515f, 0.449611329654607f, 0.010764991927928f, -0.0220562362243244f, //  rad = 1.10446616727766, deg = 63.28125
    0.903989293123443f, 0.427555093430282f, 0.0102204625800874f, -0.0223137794252923f, //  rad = 1.12900985988383, deg = 64.6875
    0.914209755703531f, 0.40524131400499f, 0.00966977680775605f, -0.0225578816399f, //  rad = 1.15355355249, deg = 66.09375
    0.923879532511287f, 0.38268343236509f, 0.00911326632345211f, -0.0227883958301016f, //  rad = 1.17809724509617, deg = 67.5
    0.932992798834739f, 0.359895036534988f, 0.00855126634828196f, -0.0230051831427682f, //  rad = 1.20264093770234, deg = 68.90625
    0.941544065183021f, 0.33688985339222f, 0.00798411541001587f, -0.0232081129933285f, //  rad = 1.22718463030851, deg = 70.3125
    0.949528180593037f, 0.313681740398892f, 0.00741215513917226f, -0.0233970631444292f, //  rad = 1.25172832291468, deg = 71.71875
    0.956940335732209f, 0.290284677254462f, 0.0068357300632309f, -0.0235719197795639f, //  rad = 1.27627201552085, deg = 73.125
    0.96377606579544f, 0.266712757474898f, 0.00625518739910413f, -0.0237325775716344f, //  rad = 1.30081570812702, deg = 74.53125
    0.970031253194544f, 0.242980179903264f, 0.0056708768439846f, -0.0238789397463942f, //  rad = 1.32535940073319, deg = 75.9375
    0.975702130038529f, 0.21910124015687f, 0.00508315036470186f, -0.0240109181407414f, //  rad = 1.34990309333936, deg = 77.34375
    0.98078528040323f, 0.195090322016128f, 0.00449236198571079f, -0.024128433255827f, //  rad = 1.37444678594553, deg = 78.75
    0.985277642388941f, 0.170961888760301f, 0.00389886757583979f, -0.0242314143049396f, //  rad = 1.3989904785517, deg = 80.15625
    0.989176509964781f, 0.146730474455362f, 0.00330302463392895f, -0.0243197992561455f, //  rad = 1.42353417115788, deg = 81.5625
    0.99247953459871f, 0.122410675199216f, 0.00270519207348685f, -0.0243935348696555f, //  rad = 1.44807786376405, deg = 82.96875
    0.995184726672197f, 0.0980171403295608f, 0.00210573000649339f, -0.0244525767298933f, //  rad = 1.47262155637022, deg = 84.375
    0.99729045667869f, 0.0735645635996675f, 0.0015049995264822f, -0.0244968892722493f, //  rad = 1.49716524897639, deg = 85.78125
    0.998795456205172f, 0.0490676743274181f, 0.000903362491031845f, -0.0245264458045059f, //  rad = 1.52170894158256, deg = 87.1875
    0.999698818696204f, 0.0245412285229123f, 0.00030118130379575f, -0.0245412285229122f, //  rad = 1.54625263418873, deg = 88.59375
    1.0f, 0.0f, -0.00030118130379575f, -0.0245412285229122f, //  rad = 1.5707963267949, deg = 90.0
    0.999698818696204f, -0.0245412285229121f, -0.000903362491031845f, -0.0245264458045059f, //  rad = 1.59534001940107, deg = 91.40625
    0.998795456205172f, -0.049067674327418f, -0.0015049995264822f, -0.0244968892722493f, //  rad = 1.61988371200724, deg = 92.8125
    0.99729045667869f, -0.0735645635996673f, -0.00210573000649328f, -0.0244525767298933f, //  rad = 1.64442740461341, deg = 94.21875
    0.995184726672197f, -0.0980171403295606f, -0.00270519207348696f, -0.0243935348696555f, //  rad = 1.66897109721958, deg = 95.625
    0.99247953459871f, -0.122410675199216f, -0.00330302463392895f, -0.0243197992561455f, //  rad = 1.69351478982575, deg = 97.03125
    0.989176509964781f, -0.146730474455362f, -0.00389886757583979f, -0.0242314143049396f, //  rad = 1.71805848243192, deg = 98.4375
    0.985277642388941f, -0.170961888760301f, -0.00449236198571079f, -0.0241284332558269f, //  rad = 1.74260217503809, deg = 99.84375
    0.98078528040323f, -0.195090322016128f, -0.00508315036470186f, -0.0240109181407415f, //  rad = 1.76714586764426, deg = 101.25
    0.975702130038529f, -0.21910124015687f, -0.0056708768439846f, -0.0238789397463942f, //  rad = 1.79168956025043, deg = 102.65625
    0.970031253194544f, -0.242980179903264f, -0.00625518739910413f, -0.0237325775716344f, //  rad = 1.8162332528566, deg = 104.0625
    0.96377606579544f, -0.266712757474898f, -0.0068357300632309f, -0.0235719197795639f, //  rad = 1.84077694546277, deg = 105.46875
    0.956940335732209f, -0.290284677254462f, -0.00741215513917226f, -0.0233970631444292f, //  rad = 1.86532063806894, deg = 106.875
    0.949528180593037f, -0.313681740398891f, -0.00798411541001587f, -0.0232081129933285f, //  rad = 1.88986433067511, deg = 108.28125
    0.941544065183021f, -0.33688985339222f, -0.00855126634828196f, -0.0230051831427682f, //  rad = 1.91440802328128, deg = 109.6875
    0.932992798834739f, -0.359895036534988f, -0.00911326632345211f, -0.0227883958301016f, //  rad = 1.93895171588745, deg = 111.09375
    0.923879532511287f, -0.38268343236509f, -0.00966977680775605f, -0.0225578816399f, //  rad = 1.96349540849362, deg = 112.5
    0.914209755703531f, -0.40524131400499f, -0.0102204625800872f, -0.0223137794252921f, //  rad = 1.98803910109979, deg = 113.90625
    0.903989293123443f, -0.427555093430282f, -0.0107649919279282f, -0.0220562362243248f, //  rad = 2.01258279370596, deg = 115.3125
    0.893224301195515f, -0.449611329654607f, -0.0113030368471602f, -0.021785407171391f, //  rad = 2.03712648631213, deg = 116.71875
    0.881921264348355f, -0.471396736825998f, -0.0118342732396436f, -0.0215014554037863f, //  rad = 2.0616701789183, deg = 118.125
    0.870086991108711f, -0.492898192229784f, -0.0123583811084393f, -0.0212045519634377f, //  rad = 2.08621387152447, deg = 119.53125
    0.857728610000272f, -0.514102744193222f, -0.0128750447505649f, -0.0208948756938754f, //  rad = 2.11075756413064, deg = 120.9375
    0.844853565249707f, -0.534997619887097f, -0.0133839529471618f, -0.0205726131325049f, //  rad = 2.13530125673681, deg = 122.34375
    0.831469612302545f, -0.555570233019602f, -0.0138847991509617f, -0.0202379583982434f, //  rad = 2.15984494934298, deg = 123.75
    0.817584813151584f, -0.575808191417845f, -0.0143772816709388f, -0.019891113074588f, //  rad = 2.18438864194915, deg = 125.15625
    0.803207531480645f, -0.595699304492433f, -0.0148611038540386f, -0.0195322860881934f, //  rad = 2.20893233455532, deg = 126.5625
    0.788346427626606f, -0.615231590580627f, -0.0153359742638692f, -0.0191616935830187f, //  rad = 2.23347602716149, deg = 127.96875
    0.773010453362737f, -0.634393284163645f, -0.0158016068562524f, -0.0187795587901312f, //  rad = 2.25801971976766, deg = 129.375
    0.757208846506485f, -0.653172842953777f, -0.0162577211515257f, -0.0183861118932419f, //  rad = 2.28256341237383, deg = 130.78125
    0.740951125354959f, -0.671558954847018f, -0.0167040424034921f, -0.0179815898900485f, //  rad = 2.30710710498, deg = 132.1875
    0.724247082951467f, -0.689540544737067f, -0.0171403017649193f, -0.0175662364494805f, //  rad = 2.33165079758617, deg = 133.59375
    0.707106781186548f, -0.707106781186547f, -0.0175662364494805f, -0.0171403017649193f, //  rad = 2.35619449019234, deg = 135.0
    0.689540544737067f, -0.724247082951467f, -0.0179815898900485f, -0.0167040424034921f, //  rad = 2.38073818279852, deg = 136.40625
    0.671558954847019f, -0.740951125354959f, -0.0183861118932419f, -0.0162577211515257f, //  rad = 2.40528187540469, deg = 137.8125
    0.653172842953777f, -0.757208846506485f, -0.0187795587901312f, -0.0158016068562524f, //  rad = 2.42982556801086, deg = 139.21875
    0.634393284163645f, -0.773010453362737f, -0.0191616935830186f, -0.0153359742638692f, //  rad = 2.45436926061703, deg = 140.625
    0.615231590580627f, -0.788346427626606f, -0.0195322860881935f, -0.0148611038540386f, //  rad = 2.4789129532232, deg = 142.03125
    0.595699304492433f, -0.803207531480645f, -0.019891113074588f, -0.0143772816709388f, //  rad = 2.50345664582937, deg = 143.4375
    0.575808191417845f, -0.817584813151584f, -0.0202379583982433f, -0.0138847991509617f, //  rad = 2.52800033843554, deg = 144.84375
    0.555570233019602f, -0.831469612302545f, -0.020572613132505f, -0.0133839529471618f, //  rad = 2.55254403104171, deg = 146.25
    0.534997619887097f, -0.844853565249707f, -0.0208948756938754f, -0.0128750447505649f, //  rad = 2.57708772364788, deg = 147.65625
    0.514102744193222f, -0.857728610000272f, -0.0212045519634376f, -0.0123583811084393f, //  rad = 2.60163141625405, deg = 149.0625
    0.492898192229784f, -0.870086991108711f, -0.0215014554037863f, -0.0118342732396436f, //  rad = 2.62617510886022, deg = 150.46875
    0.471396736825998f, -0.881921264348355f, -0.021785407171391f, -0.0113030368471603f, //  rad = 2.65071880146639, deg = 151.875
    0.449611329654607f, -0.893224301195515f, -0.0220562362243248f, -0.0107649919279281f, //  rad = 2.67526249407256, deg = 153.28125
    0.427555093430282f, -0.903989293123443f, -0.0223137794252921f, -0.0102204625800874f, //  rad = 2.69980618667873, deg = 154.6875
    0.40524131400499f, -0.914209755703531f, -0.0225578816399f, -0.00966977680775605f, //  rad = 2.7243498792849, deg = 156.09375
    0.38268343236509f, -0.923879532511287f, -0.0227883958301016f, -0.00911326632345211f, //  rad = 2.74889357189107, deg = 157.5
    0.359895036534988f, -0.932992798834739f, -0.023005183142768f, -0.00855126634828185f, //  rad = 2.77343726449724, deg = 158.90625
    0.33688985339222f, -0.941544065183021f, -0.0232081129933289f, -0.00798411541001598f, //  rad = 2.79798095710341, deg = 160.3125
    0.313681740398891f, -0.949528180593037f, -0.023397063144429f, -0.00741215513917215f, //  rad = 2.82252464970958, deg = 161.71875
    0.290284677254462f, -0.956940335732209f, -0.0235719197795639f, -0.00683573006323102f, //  rad = 2.84706834231575, deg = 163.125
    0.266712757474898f, -0.96377606579544f, -0.0237325775716344f, -0.00625518739910413f, //  rad = 2.87161203492192, deg = 164.53125
    0.242980179903264f, -0.970031253194544f, -0.023878939746394f, -0.00567087684398448f, //  rad = 2.89615572752809, deg = 165.9375
    0.21910124015687f, -0.975702130038528f, -0.0240109181407414f, -0.00508315036470197f, //  rad = 2.92069942013426, deg = 167.34375
    0.195090322016129f, -0.98078528040323f, -0.0241284332558274f, -0.00449236198571079f, //  rad = 2.94524311274043, deg = 168.75
    0.170961888760301f, -0.985277642388941f, -0.0242314143049394f, -0.00389886757583979f, //  rad = 2.9697868053466, deg = 170.15625
    0.146730474455362f, -0.989176509964781f, -0.0243197992561455f, -0.00330302463392895f, //  rad = 2.99433049795277, deg = 171.5625
    0.122410675199216f, -0.99247953459871f, -0.0243935348696555f, -0.00270519207348685f, //  rad = 3.01887419055894, deg = 172.96875
    0.0980171403295608f, -0.995184726672197f, -0.0244525767298931f, -0.00210573000649339f, //  rad = 3.04341788316511, deg = 174.375
    0.0735645635996677f, -0.99729045667869f, -0.0244968892722498f, -0.0015049995264822f, //  rad = 3.06796157577128, deg = 175.78125
    0.049067674327418f, -0.998795456205172f, -0.0245264458045056f, -0.000903362491031845f, //  rad = 3.09250526837745, deg = 177.1875
    0.0245412285229123f, -0.999698818696204f, -0.0245412285229122f, -0.00030118130379575f, //  rad = 3.11704896098362, deg = 178.59375
    0.0f, -1.0f, -0.0245412285229122f, 0.00030118130379575f, //  rad = 3.14159265358979, deg = 180.0
    -0.0245412285229121f, -0.999698818696204f, -0.0245264458045056f, 0.000903362491031845f, //  rad = 3.16613634619596, deg = 181.40625
    -0.0490676743274177f, -0.998795456205172f, -0.0244968892722498f, 0.0015049995264822f, //  rad = 3.19068003880213, deg = 182.8125
    -0.0735645635996675f, -0.99729045667869f, -0.0244525767298931f, 0.00210573000649328f, //  rad = 3.2152237314083, deg = 184.21875
    -0.0980171403295606f, -0.995184726672197f, -0.0243935348696555f, 0.00270519207348696f, //  rad = 3.23976742401447, deg = 185.625
    -0.122410675199216f, -0.99247953459871f, -0.0243197992561455f, 0.00330302463392895f, //  rad = 3.26431111662064, deg = 187.03125
    -0.146730474455362f, -0.989176509964781f, -0.0242314143049394f, 0.00389886757583968f, //  rad = 3.28885480922681, deg = 188.4375
    -0.170961888760301f, -0.985277642388941f, -0.0241284332558274f, 0.0044923619857109f, //  rad = 3.31339850183298, deg = 189.84375
    -0.195090322016128f, -0.98078528040323f, -0.0240109181407414f, 0.00508315036470186f, //  rad = 3.33794219443916, deg = 191.25
    -0.21910124015687f, -0.975702130038529f, -0.023878939746394f, 0.0056708768439846f, //  rad = 3.36248588704533, deg = 192.65625
    -0.242980179903264f, -0.970031253194544f, -0.0237325775716344f, 0.00625518739910402f, //  rad = 3.3870295796515, deg = 194.0625
    -0.266712757474898f, -0.96377606579544f, -0.0235719197795639f, 0.00683573006323102f, //  rad = 3.41157327225767, deg = 195.46875
    -0.290284677254462f, -0.956940335732209f, -0.0233970631444291f, 0.00741215513917215f, //  rad = 3.43611696486384, deg = 196.875
    -0.313681740398891f, -0.949528180593037f, -0.0232081129933289f, 0.00798411541001598f, //  rad = 3.46066065747001, deg = 198.28125
    -0.33688985339222f, -0.941544065183021f, -0.023005183142768f, 0.00855126634828185f, //  rad = 3.48520435007618, deg = 199.6875
    -0.359895036534988f, -0.932992798834739f, -0.0227883958301016f, 0.00911326632345211f, //  rad = 3.50974804268235, deg = 201.09375
    -0.38268343236509f, -0.923879532511287f, -0.0225578816399f, 0.00966977680775616f, //  rad = 3.53429173528852, deg = 202.5
    -0.40524131400499f, -0.914209755703531f, -0.0223137794252921f, 0.0102204625800872f, //  rad = 3.55883542789469, deg = 203.90625
    -0.427555093430282f, -0.903989293123443f, -0.0220562362243248f, 0.0107649919279281f, //  rad = 3.58337912050086, deg = 205.3125
    -0.449611329654607f, -0.893224301195515f, -0.021785407171391f, 0.0113030368471603f, //  rad = 3.60792281310703, deg = 206.71875
    -0.471396736825998f, -0.881921264348355f, -0.0215014554037863f, 0.0118342732396436f, //  rad = 3.6324665057132, deg = 208.125
    -0.492898192229784f, -0.870086991108711f, -0.0212045519634376f, 0.0123583811084393f, //  rad = 3.65701019831937, deg = 209.53125
    -0.514102744193222f, -0.857728610000272f, -0.0208948756938754f, 0.0128750447505649f, //  rad = 3.68155389092554, deg = 210.9375
    -0.534997619887097f, -0.844853565249707f, -0.020572613132505f, 0.0133839529471618f, //  rad = 3.70609758353171, deg = 212.34375
    -0.555570233019602f, -0.831469612302545f, -0.0202379583982434f, 0.0138847991509617f, //  rad = 3.73064127613788, deg = 213.75
    -0.575808191417845f, -0.817584813151584f, -0.0198911130745879f, 0.0143772816709388f, //  rad = 3.75518496874405, deg = 215.15625
    -0.595699304492433f, -0.803207531480645f, -0.0195322860881935f, 0.0148611038540386f, //  rad = 3.77972866135022, deg = 216.5625
    -0.615231590580627f, -0.788346427626606f, -0.0191616935830186f, 0.0153359742638692f, //  rad = 3.80427235395639, deg = 217.96875
    -0.634393284163645f, -0.773010453362737f, -0.0187795587901313f, 0.0158016068562523f, //  rad = 3.82881604656256, deg = 219.375
    -0.653172842953777f, -0.757208846506485f, -0.0183861118932419f, 0.0162577211515257f, //  rad = 3.85335973916873, deg = 220.78125
    -0.671558954847018f, -0.740951125354959f, -0.0179815898900484f, 0.0167040424034921f, //  rad = 3.8779034317749, deg = 222.1875
    -0.689540544737067f, -0.724247082951467f, -0.0175662364494806f, 0.0171403017649193f, //  rad = 3.90244712438107, deg = 223.59375
    -0.707106781186547f, -0.707106781186548f, -0.0171403017649193f, 0.0175662364494806f, //  rad = 3.92699081698724, deg = 225.0
    -0.724247082951467f, -0.689540544737067f, -0.0167040424034921f, 0.0179815898900484f, //  rad = 3.95153450959341, deg = 226.40625
    -0.740951125354959f, -0.671558954847019f, -0.0162577211515254f, 0.0183861118932416f, //  rad = 3.97607820219958, deg = 227.8125
    -0.757208846506484f, -0.653172842953777f, -0.0158016068562524f, 0.0187795587901312f, //  rad = 4.00062189480575, deg = 229.21875
    -0.773010453362737f, -0.634393284163646f, -0.0153359742638692f, 0.0191616935830187f, //  rad = 4.02516558741192, deg = 230.625
    -0.788346427626606f, -0.615231590580627f, -0.0148611038540392f, 0.0195322860881941f, //  rad = 4.04970928001809, deg = 232.03125
    -0.803207531480645f, -0.595699304492433f, -0.0143772816709388f, 0.0198911130745879f, //  rad = 4.07425297262426, deg = 233.4375
    -0.817584813151584f, -0.575808191417845f, -0.0138847991509614f, 0.0202379583982431f, //  rad = 4.09879666523043, deg = 234.84375
    -0.831469612302545f, -0.555570233019602f, -0.0133839529471618f, 0.0205726131325049f, //  rad = 4.1233403578366, deg = 236.25
    -0.844853565249707f, -0.534997619887097f, -0.012875044750565f, 0.0208948756938755f, //  rad = 4.14788405044277, deg = 237.65625
    -0.857728610000272f, -0.514102744193222f, -0.0123583811084393f, 0.0212045519634376f, //  rad = 4.17242774304894, deg = 239.0625
    -0.870086991108711f, -0.492898192229784f, -0.0118342732396436f, 0.0215014554037863f, //  rad = 4.19697143565511, deg = 240.46875
    -0.881921264348355f, -0.471396736825998f, -0.0113030368471603f, 0.0217854071713909f, //  rad = 4.22151512826128, deg = 241.875
    -0.893224301195515f, -0.449611329654607f, -0.0107649919279279f, 0.0220562362243245f, //  rad = 4.24605882086745, deg = 243.28125
    -0.903989293123443f, -0.427555093430282f, -0.0102204625800874f, 0.0223137794252921f, //  rad = 4.27060251347362, deg = 244.6875
    -0.91420975570353f, -0.40524131400499f, -0.00966977680775605f, 0.0225578816399f, //  rad = 4.29514620607979, deg = 246.09375
    -0.923879532511287f, -0.38268343236509f, -0.00911326632345244f, 0.0227883958301024f, //  rad = 4.31968989868597, deg = 247.5
    -0.932992798834739f, -0.359895036534988f, -0.00855126634828185f, 0.023005183142768f, //  rad = 4.34423359129214, deg = 248.90625
    -0.941544065183021f, -0.33688985339222f, -0.00798411541001587f, 0.0232081129933285f, //  rad = 4.36877728389831, deg = 250.3125
    -0.949528180593037f, -0.313681740398891f, -0.00741215513917215f, 0.023397063144429f, //  rad = 4.39332097650448, deg = 251.71875
    -0.956940335732209f, -0.290284677254462f, -0.00683573006323102f, 0.0235719197795639f, //  rad = 4.41786466911065, deg = 253.125
    -0.96377606579544f, -0.266712757474899f, -0.00625518739910413f, 0.0237325775716344f, //  rad = 4.44240836171682, deg = 254.53125
    -0.970031253194544f, -0.242980179903264f, -0.00567087684398448f, 0.023878939746394f, //  rad = 4.46695205432299, deg = 255.9375
    -0.975702130038528f, -0.21910124015687f, -0.00508315036470186f, 0.0240109181407414f, //  rad = 4.49149574692916, deg = 257.34375
    -0.98078528040323f, -0.195090322016129f, -0.00449236198571079f, 0.024128433255827f, //  rad = 4.51603943953533, deg = 258.75
    -0.985277642388941f, -0.170961888760302f, -0.00389886757583979f, 0.0242314143049394f, //  rad = 4.5405831321415, deg = 260.15625
    -0.989176509964781f, -0.146730474455362f, -0.00330302463392917f, 0.0243197992561463f, //  rad = 4.56512682474767, deg = 261.5625
    -0.99247953459871f, -0.122410675199216f, -0.00270519207348685f, 0.0243935348696555f, //  rad = 4.58967051735384, deg = 262.96875
    -0.995184726672197f, -0.0980171403295605f, -0.00210573000649328f, 0.0244525767298931f, //  rad = 4.61421420996001, deg = 264.375
    -0.99729045667869f, -0.0735645635996674f, -0.0015049995264822f, 0.0244968892722493f, //  rad = 4.63875790256618, deg = 265.78125
    -0.998795456205172f, -0.049067674327418f, -0.000903362491031845f, 0.0245264458045056f, //  rad = 4.66330159517235, deg = 267.1875
    -0.999698818696204f, -0.0245412285229124f, -0.00030118130379575f, 0.0245412285229122f, //  rad = 4.68784528777852, deg = 268.59375
    -1.0f, 0.0f, 0.00030118130379575f, 0.0245412285229122f, //  rad = 4.71238898038469, deg = 270.0
    -0.999698818696204f, 0.024541228522912f, 0.000903362491031845f, 0.0245264458045056f, //  rad = 4.73693267299086, deg = 271.40625
    -0.998795456205172f, 0.0490676743274177f, 0.0015049995264822f, 0.0244968892722493f, //  rad = 4.76147636559703, deg = 272.8125
    -0.99729045667869f, 0.073564563599667f, 0.00210573000649328f, 0.0244525767298931f, //  rad = 4.7860200582032, deg = 274.21875
    -0.995184726672197f, 0.0980171403295601f, 0.00270519207348685f, 0.0243935348696555f, //  rad = 4.81056375080937, deg = 275.625
    -0.99247953459871f, 0.122410675199216f, 0.00330302463392917f, 0.0243197992561463f, //  rad = 4.83510744341554, deg = 277.03125
    -0.989176509964781f, 0.146730474455362f, 0.00389886757583968f, 0.0242314143049394f, //  rad = 4.85965113602171, deg = 278.4375
    -0.985277642388941f, 0.170961888760301f, 0.00449236198571079f, 0.024128433255827f, //  rad = 4.88419482862788, deg = 279.84375
    -0.98078528040323f, 0.195090322016128f, 0.00508315036470186f, 0.0240109181407414f, //  rad = 4.90873852123405, deg = 281.25
    -0.975702130038529f, 0.21910124015687f, 0.0056708768439846f, 0.023878939746394f, //  rad = 4.93328221384022, deg = 282.65625
    -0.970031253194544f, 0.242980179903264f, 0.00625518739910402f, 0.0237325775716344f, //  rad = 4.95782590644639, deg = 284.0625
    -0.96377606579544f, 0.266712757474898f, 0.00683573006323102f, 0.0235719197795639f, //  rad = 4.98236959905256, deg = 285.46875
    -0.956940335732209f, 0.290284677254462f, 0.00741215513917215f, 0.0233970631444291f, //  rad = 5.00691329165873, deg = 286.875
    -0.949528180593037f, 0.313681740398891f, 0.00798411541001587f, 0.0232081129933285f, //  rad = 5.0314569842649, deg = 288.28125
    -0.941544065183021f, 0.33688985339222f, 0.00855126634828185f, 0.023005183142768f, //  rad = 5.05600067687107, deg = 289.6875
    -0.932992798834739f, 0.359895036534988f, 0.00911326632345244f, 0.0227883958301024f, //  rad = 5.08054436947724, deg = 291.09375
    -0.923879532511287f, 0.38268343236509f, 0.00966977680775605f, 0.0225578816399f, //  rad = 5.10508806208341, deg = 292.5
    -0.914209755703531f, 0.40524131400499f, 0.0102204625800872f, 0.0223137794252921f, //  rad = 5.12963175468958, deg = 293.90625
    -0.903989293123443f, 0.427555093430282f, 0.010764991927928f, 0.0220562362243245f, //  rad = 5.15417544729575, deg = 295.3125
    -0.893224301195515f, 0.449611329654607f, 0.0113030368471603f, 0.021785407171391f, //  rad = 5.17871913990192, deg = 296.71875
    -0.881921264348355f, 0.471396736825998f, 0.0118342732396436f, 0.0215014554037863f, //  rad = 5.2032628325081, deg = 298.125
    -0.870086991108711f, 0.492898192229784f, 0.0123583811084392f, 0.0212045519634377f, //  rad = 5.22780652511427, deg = 299.53125
    -0.857728610000272f, 0.514102744193222f, 0.012875044750565f, 0.0208948756938754f, //  rad = 5.25235021772044, deg = 300.9375
    -0.844853565249707f, 0.534997619887097f, 0.0133839529471618f, 0.0205726131325049f, //  rad = 5.27689391032661, deg = 302.34375
    -0.831469612302545f, 0.555570233019602f, 0.0138847991509614f, 0.0202379583982431f, //  rad = 5.30143760293278, deg = 303.75
    -0.817584813151584f, 0.575808191417845f, 0.0143772816709388f, 0.019891113074588f, //  rad = 5.32598129553895, deg = 305.15625
    -0.803207531480645f, 0.595699304492433f, 0.0148611038540392f, 0.0195322860881941f, //  rad = 5.35052498814512, deg = 306.5625
    -0.788346427626606f, 0.615231590580627f, 0.0153359742638692f, 0.0191616935830186f, //  rad = 5.37506868075129, deg = 307.96875
    -0.773010453362737f, 0.634393284163646f, 0.0158016068562523f, 0.0187795587901312f, //  rad = 5.39961237335746, deg = 309.375
    -0.757208846506485f, 0.653172842953777f, 0.0162577211515255f, 0.0183861118932416f, //  rad = 5.42415606596363, deg = 310.78125
    -0.740951125354959f, 0.671558954847018f, 0.0167040424034921f, 0.0179815898900485f, //  rad = 5.4486997585698, deg = 312.1875
    -0.724247082951467f, 0.689540544737067f, 0.0171403017649193f, 0.0175662364494805f, //  rad = 5.47324345117597, deg = 313.59375
    -0.707106781186548f, 0.707106781186547f, 0.0175662364494805f, 0.0171403017649193f, //  rad = 5.49778714378214, deg = 315.0
    -0.689540544737067f, 0.724247082951467f, 0.0179815898900485f, 0.0167040424034922f, //  rad = 5.52233083638831, deg = 316.40625
    -0.671558954847019f, 0.740951125354959f, 0.0183861118932416f, 0.0162577211515254f, //  rad = 5.54687452899448, deg = 317.8125
    -0.653172842953777f, 0.757208846506484f, 0.0187795587901312f, 0.0158016068562524f, //  rad = 5.57141822160065, deg = 319.21875
    -0.634393284163646f, 0.773010453362737f, 0.0191616935830186f, 0.0153359742638692f, //  rad = 5.59596191420682, deg = 320.625
    -0.615231590580627f, 0.788346427626606f, 0.0195322860881941f, 0.0148611038540392f, //  rad = 5.62050560681299, deg = 322.03125
    -0.595699304492433f, 0.803207531480645f, 0.019891113074588f, 0.0143772816709387f, //  rad = 5.64504929941916, deg = 323.4375
    -0.575808191417845f, 0.817584813151584f, 0.0202379583982431f, 0.0138847991509615f, //  rad = 5.66959299202533, deg = 324.84375
    -0.555570233019602f, 0.831469612302545f, 0.0205726131325049f, 0.0133839529471618f, //  rad = 5.6941366846315, deg = 326.25
    -0.534997619887097f, 0.844853565249707f, 0.0208948756938754f, 0.012875044750565f, //  rad = 5.71868037723767, deg = 327.65625
    -0.514102744193222f, 0.857728610000272f, 0.0212045519634376f, 0.0123583811084393f, //  rad = 5.74322406984384, deg = 329.0625
    -0.492898192229784f, 0.870086991108711f, 0.0215014554037863f, 0.0118342732396435f, //  rad = 5.76776776245001, deg = 330.46875
    -0.471396736825998f, 0.881921264348355f, 0.0217854071713909f, 0.0113030368471603f, //  rad = 5.79231145505618, deg = 331.875
    -0.449611329654607f, 0.893224301195515f, 0.0220562362243245f, 0.010764991927928f, //  rad = 5.81685514766235, deg = 333.28125
    -0.427555093430283f, 0.903989293123443f, 0.0223137794252921f, 0.0102204625800874f, //  rad = 5.84139884026852, deg = 334.6875
    -0.40524131400499f, 0.91420975570353f, 0.0225578816399f, 0.00966977680775605f, //  rad = 5.86594253287469, deg = 336.09375
    -0.38268343236509f, 0.923879532511287f, 0.0227883958301024f, 0.00911326632345244f, //  rad = 5.89048622548086, deg = 337.5
    -0.359895036534988f, 0.932992798834739f, 0.023005183142768f, 0.00855126634828185f, //  rad = 5.91502991808703, deg = 338.90625
    -0.33688985339222f, 0.941544065183021f, 0.0232081129933285f, 0.00798411541001587f, //  rad = 5.9395736106932, deg = 340.3125
    -0.313681740398892f, 0.949528180593037f, 0.023397063144429f, 0.00741215513917215f, //  rad = 5.96411730329937, deg = 341.71875
    -0.290284677254463f, 0.956940335732209f, 0.0235719197795639f, 0.00683573006323102f, //  rad = 5.98866099590554, deg = 343.125
    -0.266712757474899f, 0.96377606579544f, 0.0237325775716344f, 0.00625518739910413f, //  rad = 6.01320468851171, deg = 344.53125
    -0.242980179903264f, 0.970031253194544f, 0.023878939746394f, 0.00567087684398448f, //  rad = 6.03774838111788, deg = 345.9375
    -0.21910124015687f, 0.975702130038528f, 0.0240109181407414f, 0.00508315036470186f, //  rad = 6.06229207372405, deg = 347.34375
    -0.195090322016129f, 0.98078528040323f, 0.0241284332558269f, 0.00449236198571079f, //  rad = 6.08683576633022, deg = 348.75
    -0.170961888760302f, 0.985277642388941f, 0.0242314143049394f, 0.00389886757583979f, //  rad = 6.11137945893639, deg = 350.15625
    -0.146730474455362f, 0.989176509964781f, 0.0243197992561464f, 0.00330302463392906f, //  rad = 6.13592315154256, deg = 351.5625
    -0.122410675199216f, 0.99247953459871f, 0.0243935348696555f, 0.00270519207348696f, //  rad = 6.16046684414874, deg = 352.96875
    -0.0980171403295605f, 0.995184726672197f, 0.0244525767298931f, 0.00210573000649328f, //  rad = 6.18501053675491, deg = 354.375
    -0.0735645635996674f, 0.99729045667869f, 0.0244968892722493f, 0.0015049995264822f, //  rad = 6.20955422936108, deg = 355.78125
    -0.0490676743274181f, 0.998795456205172f, 0.0245264458045056f, 0.000903362491031845f, //  rad = 6.23409792196725, deg = 357.1875
    -0.0245412285229124f, 0.999698818696204f, 0.0245412285229122f, 0.00030118130379575f, //  rad = 6.25864161457342, deg = 358.59375
    //0.0f, 1.0f, 0.0245412285229122f, -0.00030118130379575f, //  rad = 6.28318530717959, deg = 360.0
};

} } } } // namespace nw::g3d::math::internal
