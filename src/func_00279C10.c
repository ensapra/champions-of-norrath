void *func_003021B0(void *, s32, s32);
typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
typedef struct { s32 a; s32 cnt; s32 pad[3]; u8 *base; } Ent;
extern Ent *D_008D57A8[];
void func_00279B58(s32 *p, s32 a1, s32 a2) {
    func_003021B0(p, 0, 0x38);
    p[0] = a2;
    p[5] = a1;
    p[8] = -1;
    p[7] = -1;
}
void func_00279C10(s32 *o, s32 n, P12 *out) {
    Ent *e = D_008D57A8[o[7]];
    P12 *src = (P12 *)(e->base + ((o[8] + n) % e->cnt) * 64);
    *out = *src;
}
