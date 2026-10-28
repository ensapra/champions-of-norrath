typedef struct { f32 x, y, z; } V3;
typedef struct Obj {
    u8 pad0[0x1C]; f32 f1C; u8 pad20[4]; void *f24; u8 f28; u8 pad29[0x1F];
    void *vt48; u8 pad4c[0xC]; f32 f58; f32 f5C; u8 pad60[0x40];
    u64 fA0; u8 padA8[0]; 
} Obj;
extern char D_0042B010[], D_0046D7B8[];
extern u8 D_0044B810[];
extern s32 D_004844A4;
extern f32 D_00480C04, D_00480C08, D_00480C0C, D_00480C10;
void ovl_ntgui2_func_00108E58(void *, V3 *, void *, f32);
s32 func_00304168(void *, void *);
void func_00153FA8(void *);
void func_001092F0(void *, f32, f32, f32, f32, f32, f32, s32);
void func_001EB4E0(u8 *a, V3 *p, s16 s, s32 d, void *name) {
    u8 *q = a + 0x3D0;
    V3 v = *p;
    s32 i;
    ovl_ntgui2_func_00108E58(a, &v, D_0042B010, 10.0f);
    *(void **)(a + 0x48) = D_0044B810;
    for (i = 3; i >= 0; i--)
        *(s16 *)(a + 0x40C - i * 8 + 24) = -1;
    q[0x21] = -1;
    q[0x20] = -1;
    *(u8 *)(a + 0x28) = 0x28;
    *(f32 *)(a + 0x1C) = 30.0f;
    *(f32 *)(a + 0x5C) = D_00480C04;
    *(s32 *)(a + 0xF8) = D_004844A4;
    *(u8 *)(a + 0xAC) = 0xB;
    *(f32 *)(a + 0xA8) = D_00480C08;
    *(f32 *)(a + 0x58) = 1.0f;
    func_00153FA8(a);
}
