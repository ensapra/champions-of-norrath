typedef struct { s32 f0; s32 f4; s32 f8; } Slot12;
extern Slot12 D_004F3600[];

void func_00135758(s32 a, s32 b, s32 c) {
    s32 m = D_004F3600[a].f0;
    if (b >= m) m = b;
    D_004F3600[a].f8 = 0;
    D_004F3600[a].f0 = m;
    D_004F3600[a].f4 = c;
}
