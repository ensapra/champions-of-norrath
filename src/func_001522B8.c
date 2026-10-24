typedef struct {
    char pad_0[0x9A8];
    s32 unk_9A8;
} GuiObj;

s32 func_0014B41C(GuiObj *, s32);
GuiObj *func_0014D29C(s32);
extern s32 D_0047FBF4;
s32 D_0047FC1C;
s32 func_0018F580(void *);
s32 func_0018F678(s32);

void func_0018FA08(s32 *arg0, s32 arg1)
{
    s32 t = func_0018F678(arg1);
    func_0018F580(arg0);
    if (arg0[0x30 / 4] != -1) {
        arg0[0x30 / 4] = t;
    }
    arg0[0x20 / 4] = 0;
    arg0[0] = (arg0[0] & ~0xC) | 0x105;
}

s32 func_001522B8(s32 arg0, s32 arg1)
{
    GuiObj *obj = func_0014D29C(arg1);
    s32 *p;
    if (obj == NULL || !func_0014B41C(obj, D_0047FBF4)) {
        return 0;
    }
    p = &obj->unk_9A8;
    if (p == NULL) {
        return 0;
    }
    return *p == arg0;
}

s32 func_00152254(s32 arg0)
{
    GuiObj *obj = func_0014D29C(arg0);
    s32 *p;
    if (obj == NULL || !func_0014B41C(obj, D_0047FBF4)) {
        return 0;
    }
    p = &obj->unk_9A8;
    if (p == NULL) {
        return 0;
    }
    return *p == arg0;
}

typedef struct {
    s16 id;
    s16 pad2;
    s32 pad4;
    s64 v8;
    s32 v10;
    u8 pad14[0x14];
} Msg28;

typedef struct {
    Msg28 ent[100];
    s32 head;
    s32 count;
} MsgQ;

Msg28 *func_001521A0(MsgQ *q, s16 id)
{
    Msg28 *e;
    if (q->count >= 100)
        return NULL;
    e = &q->ent[q->head];
    e->v10 = 0;
    e->id = id;
    e->v8 = D_0047FC1C;
    q->head = (q->head + 1) % 100;
    q->count++;
    return e;
}
