void *func_003021B0(void *, s32, s32);
typedef struct { s32 a; s32 cnt; s32 pad[3]; u8 *base; } Ent;
extern Ent *D_008D57A8[];
void func_00279B58(s32 *p, s32 a1, s32 a2) {
    func_003021B0(p, 0, 0x38);
    p[0] = a2;
    p[5] = a1;
    p[7] = -1;
    p[8] = -1;
}
u8 *func_00279BC8(s32 i, s32 n) {
    Ent *e = D_008D57A8[i];
    return e->base + (n % e->cnt) * 64;
}
