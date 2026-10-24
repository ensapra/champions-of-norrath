typedef struct { u8 pad[0x14]; s32 x14; u8 pad2[0x54-0x18]; f32 f54; f32 f58; u8 pad3[0x60-0x5C]; f32 f60; f32 f64; } S480430;
extern S480430 *D_00480430;

void *func_001B01D8();
void *func_001B0208(void *p, s32 n) {
    s32 *r = p;
    if (n < 0 || n >= r[8]) {
        return func_001B01D8();
    }
    return (u8 *)r[7] + (n << 6);
}

s32 func_0018019C(void) {
    return D_00480430->f64 * 16.0f;
}

s32 func_00180178(void) {
    return D_00480430->f60 * 16.0f;
}

s32 func_0018014C(void) {
    S480430 *p = D_00480430;
    return (f32)p->x14 * p->f58 * p->f54;
}
