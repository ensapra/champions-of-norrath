/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK *func_00306958();                           /* extern */
extern M2C_UNK D_0047E330;
extern M2C_UNK D_0047E340;
extern M2C_UNK D_0047E360;
extern M2C_UNK D_0047E370;
extern M2C_UNK D_0047E388;
extern M2C_UNK D_0047E398;
extern M2C_UNK D_0047E3B8;
extern M2C_UNK D_0047E3D0;
extern M2C_UNK D_0047E3E8;
extern M2C_UNK D_0047E3F8;
extern M2C_UNK D_0047E408;
extern M2C_UNK D_0047E420;
extern M2C_UNK D_0047E438;
extern M2C_UNK D_0047E450;
extern M2C_UNK D_0047E460;
extern M2C_UNK D_0047E478;
extern M2C_UNK D_0047E490;
extern M2C_UNK D_0047E4A0;
extern M2C_UNK D_0047E4B8;
extern M2C_UNK D_0047E4C8;
extern M2C_UNK D_0047E4D8;
extern M2C_UNK D_0047E4E8;
extern M2C_UNK D_0047E500;
extern M2C_UNK D_0047E520;
extern M2C_UNK D_0047E538;
extern M2C_UNK D_0047E550;
extern M2C_UNK D_0047E560;
extern M2C_UNK D_0047E570;
extern M2C_UNK D_0047E588;
extern M2C_UNK D_0047E598;
extern M2C_UNK D_0047E5B0;
extern M2C_UNK D_0047E5C0;
extern M2C_UNK D_0047E5D0;
extern M2C_UNK D_0047E5E0;
extern M2C_UNK D_0047E5F8;
extern M2C_UNK D_0047E618;
extern M2C_UNK D_0047E630;
extern M2C_UNK D_0047E640;
extern M2C_UNK D_0047E648;
extern M2C_UNK D_0047E658;
extern M2C_UNK D_0047E670;
extern M2C_UNK D_0047E688;
extern M2C_UNK D_0047E6A8;
extern M2C_UNK D_0047E6B8;
extern M2C_UNK D_0047E6D0;
extern M2C_UNK D_0047E6E8;
extern M2C_UNK D_0047E6F8;
extern M2C_UNK D_0047E708;
extern M2C_UNK D_0047E720;
extern M2C_UNK D_0047E730;
extern M2C_UNK D_0047E748;
extern M2C_UNK D_0047E758;
extern M2C_UNK D_0047E780;
extern M2C_UNK D_0047E7A8;
extern M2C_UNK D_0047E7C8;
extern M2C_UNK D_0047E808;
extern M2C_UNK D_0047E830;
extern M2C_UNK D_0047E850;
extern M2C_UNK D_0047E860;
extern M2C_UNK D_0047E878;
extern M2C_UNK D_0047E898;
extern M2C_UNK D_0047E8B0;
extern M2C_UNK D_0047E8D0;
extern M2C_UNK D_0047E900;
extern M2C_UNK D_0047E920;
extern M2C_UNK D_0047E940;
extern M2C_UNK D_0047E958;
extern M2C_UNK D_0047E980;
extern M2C_UNK D_0047E998;
extern M2C_UNK D_0047E9B0;
extern M2C_UNK D_0047E9D8;
extern M2C_UNK D_0047E9F0;
extern M2C_UNK D_0047EA10;
extern M2C_UNK D_0047EA30;
extern M2C_UNK D_0047EA58;
extern M2C_UNK D_0047EA70;
extern M2C_UNK D_0047EA88;

M2C_UNK *func_003047E8(s32 arg0) {
    M2C_UNK *var_2;

    switch (arg0) {
    case 0x1:
        var_2 = &D_0047E330;
        break;
    case 0x2:
        var_2 = &D_0047E340;
        break;
    case 0x3:
        var_2 = &D_0047E360;
        break;
    case 0x4:
        var_2 = &D_0047E370;
        break;
    case 0x5:
        var_2 = &D_0047E388;
        break;
    case 0x6:
        var_2 = &D_0047E398;
        break;
    case 0x7:
        var_2 = &D_0047E3B8;
        break;
    case 0x8:
        var_2 = &D_0047E3D0;
        break;
    case 0x9:
        var_2 = &D_0047E3E8;
        break;
    case 0xA:
        var_2 = &D_0047E3F8;
        break;
    case 0xB:
        var_2 = &D_0047E408;
        break;
    case 0xC:
        var_2 = &D_0047E420;
        break;
    case 0xD:
        var_2 = &D_0047E438;
        break;
    case 0xE:
        var_2 = &D_0047E450;
        break;
    case 0xF:
        var_2 = &D_0047E460;
        break;
    case 0x10:
        var_2 = &D_0047E478;
        break;
    case 0x11:
        var_2 = &D_0047E490;
        break;
    case 0x12:
        var_2 = &D_0047E4A0;
        break;
    case 0x13:
        var_2 = &D_0047E4B8;
        break;
    case 0x14:
        var_2 = &D_0047E4C8;
        break;
    case 0x15:
        var_2 = &D_0047E4D8;
        break;
    case 0x16:
        var_2 = &D_0047E4E8;
        break;
    case 0x17:
        var_2 = &D_0047E500;
        break;
    case 0x18:
        var_2 = &D_0047E520;
        break;
    case 0x19:
        var_2 = &D_0047E538;
        break;
    case 0x1A:
        var_2 = &D_0047E550;
        break;
    case 0x1B:
        var_2 = &D_0047E560;
        break;
    case 0x1C:
        var_2 = &D_0047E570;
        break;
    case 0x1D:
        var_2 = &D_0047E588;
        break;
    case 0x1E:
        var_2 = &D_0047E598;
        break;
    case 0x1F:
        var_2 = &D_0047E5B0;
        break;
    case 0x20:
        var_2 = &D_0047E5C0;
        break;
    case 0x21:
        var_2 = &D_0047E5D0;
        break;
    case 0x22:
        var_2 = &D_0047E5E0;
        break;
    case 0x23:
        var_2 = &D_0047E5F8;
        break;
    case 0x24:
        var_2 = &D_0047E618;
        break;
    case 0x2D:
        var_2 = &D_0047E630;
        break;
    case 0x2E:
        var_2 = &D_0047E640;
        break;
    case 0x3C:
        var_2 = &D_0047E648;
        break;
    case 0x3E:
        var_2 = &D_0047E658;
        break;
    case 0x3F:
        var_2 = &D_0047E670;
        break;
    case 0x40:
        var_2 = &D_0047E688;
        break;
    case 0x41:
        var_2 = &D_0047E6A8;
        break;
    case 0x42:
        var_2 = &D_0047E6B8;
        break;
    case 0x43:
        var_2 = &D_0047E6D0;
        break;
    case 0x44:
        var_2 = &D_0047E6E8;
        break;
    case 0x45:
        var_2 = &D_0047E6F8;
        break;
    case 0x46:
        var_2 = &D_0047E708;
        break;
    case 0x47:
        var_2 = &D_0047E720;
        break;
    case 0x4A:
        var_2 = &D_0047E730;
        break;
    case 0x4D:
        var_2 = &D_0047E748;
        break;
    case 0x53:
        var_2 = &D_0047E758;
        break;
    case 0x54:
        var_2 = &D_0047E780;
        break;
    case 0x55:
        var_2 = &D_0047E7A8;
        break;
    case 0x56:
        var_2 = &D_0047E7C8;
        break;
    case 0x57:
        var_2 = &D_0047E808;
        break;
    case 0x58:
        var_2 = &D_0047E830;
        break;
    case 0x59:
        var_2 = &D_0047E850;
        break;
    case 0x5A:
        var_2 = &D_0047E860;
        break;
    case 0x5B:
        var_2 = &D_0047E878;
        break;
    case 0x5C:
        var_2 = &D_0047E898;
        break;
    case 0x69:
        var_2 = &D_0047E8B0;
        break;
    case 0x6A:
        var_2 = &D_0047E8D0;
        break;
    case 0x6B:
        var_2 = &D_0047E900;
        break;
    case 0x6C:
        var_2 = &D_0047E920;
        break;
    case 0x6D:
        var_2 = &D_0047E940;
        break;
    case 0x6E:
        var_2 = &D_0047E958;
        break;
    case 0x6F:
        var_2 = &D_0047E980;
        break;
    case 0x70:
        var_2 = &D_0047E998;
        break;
    case 0x71:
        var_2 = &D_0047E9B0;
        break;
    case 0x80:
        var_2 = &D_0047E9D8;
        break;
    case 0x7C:
        var_2 = &D_0047E9F0;
        break;
    case 0x7F:
        var_2 = &D_0047EA10;
        break;
    case 0x5F:
        var_2 = &D_0047EA30;
        break;
    case 0x7A:
        var_2 = &D_0047EA58;
        break;
    case 0x74:
        var_2 = &D_0047EA70;
        break;
    default:
        var_2 = func_00306958();
        if (var_2 == NULL) {
            var_2 = &D_0047EA88;
        }
        break;
    }
    return var_2;
}
