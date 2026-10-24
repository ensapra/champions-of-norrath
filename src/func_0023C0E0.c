typedef struct N { struct N *next; s32 pad[3]; } N;
extern N D_008E4140[];
extern N *D_008E4540[];

s32 func_002DF208(void) {
    s32 i;
    D_008E4540[0] = D_008E4140;
    for (i = 63; i >= 0; i--)
        D_008E4140[i].next = &D_008E4140[i + 1];
    D_008E4140[63].next = 0;
    return 0;
}

extern char D_0034B988[];
extern char D_004732A8[];
extern char D_004732B8[];
s32 D_00483F48;
s32 func_00153FA8(void *);
void func_0024AF80(s32);
void func_00303EB8(void *, void *, s32);
void func_0024EED0(void *, s32);

void func_0023F8F8(void *arg0) {
    char buf[32];
    s32 n;
    __builtin_memcpy(D_0034B988, D_004732A8, 13);
    D_00483F48 = (s32)*(f32 *)((char *)arg0 + 0x230);
    func_0024AF80(0);
    n = func_00153FA8(arg0);
    func_00303EB8(buf, D_004732B8, (n & 3) + 1);
    func_0024EED0(buf, 0x103);
}

extern char D_0044F9A8[];
void func_00180468(s32);
void func_00141658(void *, s32);
void func_001447D8(void *);

void func_0023C0E0(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 0x48) = D_0044F9A8;
    func_00180468(*(s32 *)((char *)arg0 + 0x54));
    func_00141658(arg0, 0);
    if (arg1 & 1) {
        func_001447D8(arg0);
    }
}

f32 D_00481EB0;
f32 D_00481EB4;
extern u8 D_007D7F20[];
void func_00180D78(u8 *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);

void func_00243580(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_007D7F20, 1, 1, 1, 0xC8, 1, 1, 1, 15.5f, D_00481EB0, D_00481EB4, 0x14, 2, 0, 6, 0);
        }
    }
}
