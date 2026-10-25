typedef struct { s32 w; u8 b[4]; } Slot;
typedef struct { s32 pad0; s16 id; s16 pad6; s32 pad8; u16 padC; u16 flags; s32 f10; char pad14[0xC]; s32 tail; s32 head; char pad28[0x14]; u16 cnt; char pad3E[2]; Slot slots[5]; } Ent;
typedef struct { char pad[0x2C]; s32 sema; char pad2[0x14]; s32 count; char pad3[0x480]; Ent e[1]; } G;
typedef struct { s32 w; s16 p4; s16 id; s32 p8; s32 c; s32 p10; u8 d[8]; } Msg;
extern G D_008EBDD8;
s32 WaitSema_2(s32);
s32 SignalSema_2(s32);

void func_002E86D8(Msg *m) {
    s32 i = 0;
    u8 *d = m->d;
    Ent *e;
    Slot *s;
    if (D_008EBDD8.count > 0) {
        for (i = 0; i < D_008EBDD8.count; i++)
            if (D_008EBDD8.e[i].id == m->id) break;
        if (i < D_008EBDD8.count) {
            e = &D_008EBDD8.e[i];
            s = &e->slots[e->head];
            if (e->flags & 0x8000) {
                if (*d++ != 1) return;
            }
            if (m->c) {
                e->f10 = m->c;
                return;
            }
            WaitSema_2(D_008EBDD8.sema);
            s->w = m->w;
            s->b[0] = *d++;
            s->b[1] = *d++;
            s->b[2] = *d++;
            if (e->flags & 0x4000) s->b[3] = *d;
            e->head = e->head + 1;
            e->head = e->head % 5;
            if (e->head == e->tail) {
                e->tail = e->head + 1;
                e->tail = e->tail % 5;
            } else {
                e->cnt++;
            }
            SignalSema_2(D_008EBDD8.sema);
        }
    }
}
