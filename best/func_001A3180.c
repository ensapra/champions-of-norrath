typedef struct Ent {
    char pad[0xAC];
    f32 cur, max, timer, step;
    char pad2[0x5588 - 0xBC];
    u8 *items[16];
    char pad3[0x5DB0 - 0x55C8];
} Ent;
extern Ent D_00408600[];
f32 D_004803C0, D_004803C4, D_004803C8, D_004803CC;
s32 func_001ABB48(s32, s32);

void func_001A3180(u8 *self) {
    Ent *e;
    f32 t, r, f;
    s32 i, k, v, off;
    if (*(u32 *)(self + 0xC) & 0x20000) return;
    e = &D_00408600[*(s32 *)(self + 0x3C0)];
    if (e->cur <= 0.0f) return;
    if (e->cur < e->max) {
        f = D_004803C0;
        t = e->max * f;
        r = (f32)func_001ABB48(*(s32 *)(self + 0x3C0), 0x10);
        if (r > 0.0f)
            t *= r * D_004803C4 + D_004803C8;
        t += (f32)*(s8 *)(self + 0x467) * f;
        for (i = 0; i < 16; i++) {
            u8 *it = e->items[i];
            if (it != 0 && *(s32 *)it != 0) {
                u8 *p6 = it + 6;
                u8 *p4 = it + 4;
                k = 0;
                off = 0x20;
                do {
                    if (*(s16 *)(p4 + off) == 11) {
                        v = *(s16 *)(p6 + off);
                        goto done;
                    }
                    k++;
                    off += 8;
                } while (k < 4);
                v = 0;
done:
                t *= (f32)v * D_004803CC + 1.0f;
            }
        }
        e->cur += t;
        if (e->max < e->cur) e->cur = e->max;
    }
    if (e->timer > 0.0f) {
        e->cur += e->step;
        if (e->max < e->cur) {
            e->cur = e->max;
            e->timer = 0.0f;
        }
        e->timer -= e->step;
        if (e->timer < 0.0f) e->timer = 0.0f;
    }
}
