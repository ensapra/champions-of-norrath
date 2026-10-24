typedef struct { u64 a, b; } Q16;
extern char func_001C8098[];
void func_0011B9E0(s32);
s32 func_0014BA30(Q16 *, Q16 *);
void func_00154798(void *);
s32 func_0016FA70(s32);

#define I(p, o) (*(s32 *)((char *)(p) + (o)))
#define Q(p, o) (*(Q16 *)((char *)(p) + (o)))

s32 func_00154A6C(void *self, void *cur, void *prev) {
    s32 changed = (*(s32 (**)(void))(func_001C8098 + 0xDB8))();

    if (I(cur, 0x984) != I(prev, 0x984) && I(cur, 0x984) != 0) {
        if (I(self, 0x924) != 0) {
            func_0011B9E0(I(self, 0x924));
        }
        changed = 1;
        I(self, 0x924) = func_0016FA70(I(cur, 0x984));
        I(self, 0x98) = 2;
    }
    if (I(cur, 0x988) != I(prev, 0x988) && I(cur, 0x988) != 0) {
        if (I(self, 0x928) != 0) {
            func_0011B9E0(I(self, 0x928));
        }
        changed = 1;
        I(self, 0x928) = func_0016FA70(I(cur, 0x988));
        func_00154798(self);
        I(self, 0x98) = 2;
    }
    if (I(cur, 0x9AC) != I(prev, 0x9AC)) {
        I(self, 0x9AC) = I(cur, 0x9AC);
        changed = 1;
        func_00154798(self);
        I(self, 0x98) = 2;
    }
    if (func_0014BA30(&Q(cur, 0x9C0), &Q(prev, 0x9C0)) == 0) {
        I(self, 0x98) = 2;
        changed = 1;
        Q(self, 0x9C0) = Q(cur, 0x9C0);
    }
    return changed;
}
