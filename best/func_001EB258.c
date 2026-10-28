typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;} P12;
void *func_001441B8(s32);
void func_00168A38(s32,P12*,s16,void*,s32,void*,void*,void*,f32);
void func_00149068(void*,void*,s32,s32,s32,s32,s32,s32,f32);
void func_001EB258(u8 *o) {
    P12 a;
    u8 out[0x20];
    P12 b;
    u8 *p = o + 0x10;
    void *v;
    s16 ang;
    s32 x;
    s32 h;
    if (*(s32 *)(o + 0x3c0)) {
        s32 *t;
        a = *(P12 *)p;
        h = *(s32 *)(*(u8 **)(o + 0x24) + 0xc);
        x = *(u16 *)(o + 0x38);
        b = *(P12 *)p;
        x += -0x4001;
        ang = x;
        func_00168A38(h, &b, ang, o + 0x120, 0, &a, out, p, 1.0f);
        v = func_001441B8(0x248);
        if (v) {
            t = *(s32 **)(o + 0x24);
            func_00149068(v, &a, t[0], t[*(s32 *)(o + 0x3c0) * 2], t[*(s32 *)(o + 0x3c0) * 2 + 2], 1, 0x4001, 0, 1.0f);
        }
    }
    *(s32 *)(o + 0x3c0) = 0;
}
