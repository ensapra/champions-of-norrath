typedef struct { s64 pos; s64 end; s64 step; s64 frac; } Ctr;
s64 func_001708F0(s32, s64);
s64 func_00170968(s64, s64);

s32 func_0016FBAC(Ctr *c, s32 a, s32 b) {
    return a + (s32)(func_001708F0(b - a, c->frac) >> 16);
}

s32 func_0016FB28(Ctr *c) {
    s64 end;
    s64 pos;
    pos = c->pos;
    end = c->end;
    if (pos == end) {
        return 1;
    }
    c->pos = pos + func_00170968(end - pos + c->step - 1, c->step);
    if (end < c->pos) {
        c->pos = end;
    }
    c->frac = func_00170968(c->pos << 16, end);
    return 0;
}

void func_0016FB0C(Ctr *c) {
    c->pos = 0;
    c->frac = 0;
}
