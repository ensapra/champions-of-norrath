typedef struct {
    s16 a, b, c, d;
    u8 f0 : 4;
    u16 pad : 10;
    u16 f14 : 1;
    u16 pad2 : 1;
} Info;

typedef struct {
    s8 pad0[6];
    Info info;
    s8 pad10[8];
    s32 id;
    s32 state;
    s8 pad20[0x48];
} Entry;

typedef struct {
    Info info;
    s8 lo;
    s8 bit;
} OutInfo;

typedef struct {
    s8 pad0[0x2C];
    s32 sema;
    s8 pad30[0x14];
    s32 count;
    s8 pad48[4];
    s32 min;
    s8 pad50[0x478];
    Entry entries[1];
} Mgr;

extern Mgr D_008EBDD8;
s32 WaitSema_2(s32);
s32 SignalSema_2(s32);

s32 func_002E6918(s32 id, OutInfo *out)
{
    Entry *e;
    s32 i;

    if (id < 0 || out == NULL) {
        return 0x80000004;
    }
    if (id < D_008EBDD8.min) {
        D_008EBDD8.min = id;
    }
    for (i = 0; i < D_008EBDD8.count; i++) {
        e = &D_008EBDD8.entries[i];
        if (e->state == 1) {
            WaitSema_2(D_008EBDD8.sema);
            e->state = 2;
            e->id = id;
            SignalSema_2(D_008EBDD8.sema);
            out->info = e->info;
            out->bit = out->info.f14;
            out->lo = out->info.f0;
            return 0;
        }
        if (e->id == id) {
            if (e->state == 4) return 0x80000005;
            if (e->state == 6) return 0x80000006;
            if (e->state == 2) return 0;
        }
    }
    return 0x80000002;
}
