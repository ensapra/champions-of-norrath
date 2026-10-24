typedef struct { s32 a, b; } PR;
void func_002680F8(void *, void *, PR *, void *);
void func_00268640(void *a0, void *a1, void *a2) {
    PR t[3];
    s32 i;
    for (i = 0; i < 3; i++) {
        t[i].a = 0x77359400;
        t[i].b = 0x88CA6C00;
    }
    func_002680F8(a0, a1, t, a2);
}
void func_00316478(void *, void *);
void func_0026BDA0(u8 *p) {
    if (*(f32*)(p+8) > *(f32*)(p+0x14)) func_00316478(p+8, p+0x14);
    if (*(f32*)(p+0xC) > *(f32*)(p+0x18)) func_00316478(p+0xC, p+0x18);
}
