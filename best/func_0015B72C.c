typedef struct { s32 a; s32 flags; s32 pad[7]; } Rec;
typedef struct { char p0[0xB80]; Rec *items; char p1[8]; s32 sel; char p2[0x60]; s32 count; char p3[0x118]; s32 z; } Obj;
void func_0015ACB0(Rec *dst, Rec *src, s32 size, s32 n);

s32 func_0015B72C(Obj *o) {
    s32 ret = 0;
    s32 i = 0;
    s32 start = 0;
    s32 found = 0;
    for (; i < o->count; i++) {
        Rec *r = &o->items[i];
        if (found) {
            if (!(r->flags & 0x50)) {
                if (o->sel >= start && o->sel < i)
                    o->sel = start;
                else if (o->sel >= i)
                    o->sel -= i - start;
                func_0015ACB0(&o->items[start], &o->items[i], 0x24, o->count - i);
                o->z = 0;
                o->count -= i - start;
                return 1;
            }
        } else if (r->flags & 0x50) {
            found = 1;
            start = i;
        }
    }
    if (found && i == o->count) {
        if (o->sel >= start)
            o->sel = start;
        func_0015ACB0(&o->items[start], &o->items[i], 0x24, o->count - i);
        ret = 1;
        o->count -= i - start;
    }
    o->z = 0;
    return ret;
}
