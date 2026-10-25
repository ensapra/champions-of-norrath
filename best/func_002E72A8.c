typedef struct { s16 v[5]; } Info;
typedef struct { s16 pad0[3]; Info info; s32 pad10[2]; s32 id; s32 state; u8 pad20[0xF0]; } Entry;
typedef struct { s32 pad0[11]; s32 sema; s32 pad30[4]; s32 count; s32 pad44; s32 minId; s32 pad4C[15]; Entry entries[1]; } Mgr;
s32 SignalSema_2(s32);
s32 WaitSema_2(s32);
extern Mgr D_008EBDD8;

s32 func_002E72A8(s32 id, Info *out) {
    Entry *e;
    s32 i;

    if (id < 0 || out == 0) {
        return 0x80000004;
    }
    if (id < D_008EBDD8.minId) {
        D_008EBDD8.minId = id;
    }
    e = D_008EBDD8.entries;
    for (i = 0; i < D_008EBDD8.count; i++, e++) {
        if (e->state == 1) {
            WaitSema_2(D_008EBDD8.sema);
            e->state = 2;
            e->id = id;
            SignalSema_2(D_008EBDD8.sema);
            *out = e->info;
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
