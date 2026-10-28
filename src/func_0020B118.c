struct V { f32 x, y, z; V() {} };
extern "C" {
s32 func_001441B8(s32);
s64 func_0016C970(s32, s32);
s32 func_001E5190(s32, V, s16, s32, void *, s32, s32, s32, f32, s64, s32, s32);

void func_0020B118(char *o, u32 ix) {
    s32 valid = 1;
    s64 first, second;
    s32 mask, model;
    first = func_0016C970(*(s32 *)(*(s32 *)(o + 0x24) + 0xC), *(s32 *)(o + 0xF4));
    switch (ix) {
    case 0: *(s32 *)(o + 0xF4) |= 1; break;
    case 1: *(s32 *)(o + 0xF4) |= 2; break;
    case 2: *(s32 *)(o + 0xF4) |= 4; break;
    case 3: *(s32 *)(o + 0xF4) |= 8; break;
    case 4: *(s32 *)(o + 0xF4) |= 0x10; break;
    case 5: *(s32 *)(o + 0xF4) |= 0x20; break;
    case 6: *(s32 *)(o + 0xF4) |= 0x40; break;
    case 7: *(s32 *)(o + 0xF4) |= 0x80; break;
    case 8: valid = 0; *(s32 *)(o + 0xF4) |= 0x100; break;
    case 9: valid = 0; *(s32 *)(o + 0xF4) |= 0x200; break;
    case 10: valid = 0; *(s32 *)(o + 0xF4) |= 0x400; break;
    case 11: valid = 0; *(s32 *)(o + 0xF4) |= 0x800; break;
    }
    second = func_0016C970(*(s32 *)(*(s32 *)(o + 0x24) + 0xC), *(s32 *)(o + 0xF4));
    first &= ~second;
    *(s64 *)(o + 0x228) = second;
    if (valid) {
        model = 0xE;
        if (*(u64 *)(o + 0xA0) & 0x1000000) model = 0x10E;
        mask = func_001441B8(0x268);
        if (mask) {
            char *obj = *(char **)(o + 0x24);
            func_001E5190(mask, *(V *)(o + 0x10), *(s16 *)(o + 0x38), *(s32 *)(obj + 0xC), o + 0x120,
                          *(s32 *)obj, *(s32 *)(obj + 8), *(s32 *)(obj + 0x10), *(f32 *)(o + 0xE0), first, model, 2);
        }
    }
}
}
