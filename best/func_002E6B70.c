typedef struct { s32 a, b; } P8;
typedef struct { u8 pad[8]; s32 dx, dy, dz; u16 cnt; } Out;
typedef struct { s8 pad[0xC]; u8 b; s8 dx, dy, dz; } Rec;
typedef struct {
    u8 pad0[0x10]; s32 err; u8 pad14[8]; s32 state; s32 base;
} Ent;
typedef struct { u8 pad0[0x2C]; s32 sema; u8 pad30[0x14]; s32 max; } Tab;
extern Tab D_008EBDD8;
s32 SignalSema_2(s32);
s32 WaitSema_2(s32);
void func_002E8E88(void *);
void func_003021B0(void *, s32, s32);

s32 func_002E6B70(s32 port, Out *out) {
    s32 idx = port - 1;
    s32 last = 0, changed = 0;
    s32 code, i;
    Ent *e;
    u8 *sub;
    u8 *r;
    P8 *dst;
    if (D_008EBDD8.max < idx || idx < 0 || out == 0) return 0x80000004;
    e = (Ent *)((u8 *)&D_008EBDD8 + 0x4C8 + idx * 0x68);
    switch (e->state) {
    case 4: code = 1; break;
    case 1:
    case 2: code = 0x8000000F; break;
    case 6: code = 0x80000006; break;
    default: code = 0x80000000; break;
    }
    if (code != 1) return code;
    if (e->err != 0) return e->err;
    sub = (u8 *)e + 0x28;
    func_003021B0(out, 0, 0x14);
    WaitSema_2(D_008EBDD8.sema);
    i = 0;
    dst = (P8 *)((u8 *)out + 0x18);
    if (*(u16 *)(sub + 0x14) != 0) {
        do {
            s32 k = (e->base + i) % 5;
            i++;
            *dst++ = *(P8 *)(sub + 0x18 + k * 8);
            r = sub + 0x10 + k * 8;
            out->dx += ((Rec *)r)->dx;
            out->dy += ((Rec *)r)->dy;
            out->dz += ((Rec *)r)->dz;
            if (last != 0) {
                if (last != r[0xC]) changed = 1;
            }
            last = r[0xC];
        } while (i < *(vu16 *)(sub + 0x14));
    }
    *((s8 *)out + 4) = changed;
    out->cnt = *(u16 *)(sub + 0x14);
    func_002E8E88(e);
    SignalSema_2(D_008EBDD8.sema);
    return 0;
}
