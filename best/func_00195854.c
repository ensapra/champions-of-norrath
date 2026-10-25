void func_001959B8(void *, s32, s32);
void func_00195A78(void *, s32, s32);
void func_00196B88(void *);
s32 func_00197958(void *);
void func_00198C24(s32);
void func_1967D8(void *, s32);
extern void *D_00480488;

void func_00195854(u8 *o) {
    u8 t;
    if (*(s32 *)(o + 0x44) == 0) {
        return;
    }
    t = o[0x52] ^ 4;
    o[0x52] = t;
    if (t & 4) {
        func_001959B8(o, 0xB, 2);
    } else {
        func_00195A78(o, 0xB, 2);
    }
    ((void (*)(s32))*(void **)((u8 *)D_00480488 + 0xC))(func_00197958(o));
    func_00196B88(o);
    func_1967D8(o, *(s32 *)(o + 0x54));
    func_00198C24(8);
}
