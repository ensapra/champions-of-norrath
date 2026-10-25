typedef struct { s16 type; s16 id; s32 val; } Cmd8;
typedef struct { char pad0[4]; u16 flags; char pad6[6]; s32 val; char pad10[4]; } Btn14;
typedef struct { s8 a, b; } Pair;
extern s32 D_00485954;
extern s8 D_00485964;
extern Pair D_0042DDB8[];
extern Btn14 D_007D8F20[];
extern Cmd8 D_007DC280[];
s32 func_001D0E70(void);

static inline void push(s32 id, s32 v) {
    s32 n = D_00485954;
    if (n < 0x200) {
        D_007DC280[n].type = 1;
        D_007DC280[n].id = id;
        D_007DC280[n].val = v;
        (*(volatile s32 *)&D_00485954)++;
    }
}

void func_0024B570(void) {
    if (func_001D0E70() && D_00485964 == 0) {
        s32 i;
        Btn14 *b;
        for (i = 0, b = D_007D8F20; i < 0x2B; i++, b++) {
            s32 f = b->flags;
            if ((f & 5) && !(f & 8)) {
                push(D_0042DDB8[i].a | (D_0042DDB8[i].b << 1) | 0x200, 0);
                b->flags = f | 2;
            }
        }
        D_00485964 = 1;
    }
    if (!func_001D0E70() && D_00485964 != 0) {
        s32 i;
        Btn14 *b;
        for (i = 0, b = D_007D8F20; i < 0x2B; i++, b++) {
            s32 f = b->flags;
            if (f & 2) {
                push(D_0042DDB8[i].a | (D_0042DDB8[i].b << 1) | 0x200, b->val);
                b->flags = f & ~2;
            }
        }
        D_00485964 = 0;
    }
}
