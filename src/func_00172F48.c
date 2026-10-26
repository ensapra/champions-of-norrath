typedef struct { s16 a; s16 b; s16 c; } Res_172F48;
void *func_0018D7A8(void);

void func_00172F48(void *a0, s16 a1, s16 a2, s32 a3, s16 a4, s16 a5) {
    typedef struct { s64 u0; s64 u8; s64 u10; s64 u18; s64 u20; } S;
    S *p;
    Res_172F48 *r;
    s16 type;
    u16 utype;
    p = (S *)a0;
    r = (Res_172F48 *)func_0018D7A8();
    p->u0 = 0x66;
    if (r->a != 0) {
        if (r->c != 0) p->u8 = 3;
        else p->u8 = 1;
    } else {
        p->u8 = 2;
    }
    p->u10 = (((s64)(a1 & 0xF)) << 15) | (((((s64)(a2 + 0x3F)) >> 6) & 0x3F) << 9);
    type = r->b;
    utype = (u16)r->b;
    if (type == 0x1A) {
        p->u18 = ((((s64)(a4 * 2)) + 0x114) & 0xFFE) | ((((s64)(a5 + 0x22)) & 0xFFF) << 12) | 0x1DF4FF00800000ULL;
    } else if (type == 0x1B) {
        p->u18 = ((((s64)(a4 * 2)) + 0x144) & 0xFFE) | ((((s64)(a5 + 0x1E)) & 0xFFF) << 12) | 0x1DF4FF00800000ULL;
    } else if (type == 0x1C) {
        p->u18 = ((((s64)(a4 * 2)) + 0x164) & 0xFFE) | ((((s64)(a5 + 0x12)) & 0xFFF) << 12) | 0x1DF4FF00800000ULL;
    } else if (type == 0x1D) {
        p->u18 = ((((s64)(a4 * 2)) + 0x104) & 0xFFE) | ((((s64)(a5 + 0x1B)) & 0xFFF) << 12) | 0x1DF4FF00800000ULL;
    } else if (type == 0x2A) {
        p->u18 = ((((s64)(a4 * 2)) + 0x184) & 0xFFE) | ((((s64)(a5 + 0x17)) & 0xFFF) << 12) | 0x25763F00800000ULL;
    } else if (type == 0x2B) {
        p->u18 = ((((s64)(a4 * 2)) + 0x1A4) & 0xFFE) | ((((s64)(a5 + 0x1A)) & 0xFFF) << 12) | 0x25763F00800000ULL;
    } else if (type == 0x2C) {
        p->u18 = ((((s64)(a4 * 2)) + 0x164) & 0xFFE) | ((((s64)(a5 + 0x1C)) & 0xFFF) << 12) | 0x25763F00800000ULL;
    } else if (type == 0x2D) {
        p->u18 = ((((s64)(a4 * 2)) + 0x1D4) & 0xFFE) | ((((s64)(a5 + 0x17)) & 0xFFF) << 12) | 0x25763F00800000ULL;
    } else if (type == 0x2E) {
        p->u18 = ((((s64)(a4 * 2)) + 0x1A4) & 0xFFE) | ((((s64)(a5 + 0x1D)) & 0xFFF) << 12) | 0x25763F00800000ULL;
    } else if (type == 0x3B) {
        p->u18 = ((((s64)(a4 * 2)) + 0x244) & 0xFFE) | ((((s64)(a5 + 0x22)) & 0xFFF) << 12) | 0x2FF7FF00800000ULL;
    } else if ((s16)utype == 0x3C) {
        p->u18 = (((s64)a4 + 0x10C) & 0xFFF) | ((((s64)(a5 + 0x22)) & 0xFFF) << 12) | 0x2FF3FF00000000ULL;
    } else if ((s16)utype == 0x3D) {
        p->u18 = (((s64)a4 + 0x104) & 0xFFF) | ((((s64)(a5 + 0x1E)) & 0xFFF) << 12) | 0x2FF3FF00000000ULL;
    } else if ((s16)utype == 0x3E) {
        p->u18 = (((s64)a4 + 0x124) & 0xFFF) | ((((s64)(a5 + 0x26)) & 0xFFF) << 12) | 0x2FF3FF00000000ULL;
    } else if ((s16)utype == 0x4A) {
        p->u18 = (((s64)a4 + 0x15C) & 0xFFF) | ((((s64)(a5 + 0x28)) & 0xFFF) << 12) | 0x3FF4FF00000000ULL;
    } else if ((s16)utype == 0x4B) {
        p->u18 = (((s64)a4 + 0x17C) & 0xFFF) | ((((s64)(a5 + 0x28)) & 0xFFF) << 12) | 0x3FF4FF00000000ULL;
    } else if ((s16)utype == 0x50) {
        p->u18 = ((((s64)(a4 * 2)) + 0xE8) & 0xFFE) | ((((s64)(a5 + 0x23)) & 0xFFF) << 12) | 0x1DF59F00800000ULL;
    } else if ((s16)utype == 0x51) {
        p->u18 = (((s64)a4 + 0xEE) & 0xFFF) | ((((s64)(a5 + 0x28)) & 0xFFF) << 12) | 0x43777F00000000ULL;
    } else if ((s16)utype == 0x52) {
        p->u18 = (((s64)a4 + 0x12E) & 0xFFF) | ((((s64)(a5 + 0x18)) & 0xFFF) << 12) | 0x2CF4FF00000000ULL;
    }
    p->u20 = 0;
}
