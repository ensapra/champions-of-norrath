s32 func_001776E0(void*);s32 func_001778E8(void*,s32,s32,s32,s32);s32 func_00178A30(void*,void*,void*);void func_00179158(s32);void*func_00179280(s32,s32);
typedef struct O { s32 pad0[2]; s32 f8; s32 fC; s32 pad10; s32 cnt; } O;
s32 func_00177A30(s32 *a, s32 mode) {
    s32 p[5];
    s32 out;
    s32 r, a1, a2, a3, a4;
    O *o;
    p[2] = 5; p[0] = 1; p[1] = 1; p[4] = 1;
    switch (mode) {
    case 1:
        r = func_00178A30(a, &out, p); if (r) return r;
        a1 = out + 16; p[4] = 2;
        r = func_00178A30(a, &out, p); if (r) return r;
        a2 = out + 16; p[4] = 3;
        r = func_00178A30(a, &out, p); if (r) return r;
        a3 = out + 16; p[2] = 4; p[4] = mode;
        r = func_00178A30(a, &out, p); if (r) return r;
        a4 = out + 16;
        o = func_00179280(16, 32);
        if (!o) return 1;
        r = func_001778E8(o, a1, a2, a3, a4);
        if (r) return r;
        o->cnt = 0;
        a[6] = (s32)o;
        break;
    case 2:
        o = (O*)a[6];
        if (!o) return 2;
        o->cnt = o->cnt + 1;
        r = func_001776E0(o);
        if (r) return r;
        break;
    case 3:
        break;
    case 4:
        o = (O*)a[6];
        o->cnt = 0;
        func_00179158(o->f8 & 0xFFFFFFF);
        func_00179158(o->fC & 0xFFFFFFF);
        func_00179158((s32)o & 0xFFFFFFF);
        a[6] = 0;
        break;
    }
    return 0;
}
