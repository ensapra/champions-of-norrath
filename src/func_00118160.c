typedef struct Task118160 {
    s32 flags;
    s32 id;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    void (*init)(struct Task118160 *);
    s32 active;
    s32 unk1C;
} Task118160;
s32 func_0011AD08();
extern Task118160 D_010C2BA8[];

s32 func_00118160(Task118160 *src)
{
    Task118160 t = *src;
    Task118160 *tp = &t;
    Task118160 *p = D_010C2BA8;
    s32 i;
    for (i = 0; i < 0x100; i++, p++) {
        if (p->active == 0) {
            tp->id = -1;
            if (tp->flags & 1)
                tp->id = func_0011AD08();
            *p = *tp;
            if (p->init != NULL)
                p->init(p);
            return i;
        }
    }
    return -1;
}
