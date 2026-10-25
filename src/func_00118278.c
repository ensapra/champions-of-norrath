typedef struct { s32 flags; s32 id; s32 pad; s32 seq; s32 rest[4]; } Msg;
typedef struct { s32 v[5]; } Ent;
extern Ent D_010C4BA8[];
extern s32 D_010C4BC8[];
void func_00117848(void *, void *);
s32 func_0011AD08(void);

void func_00118278(s32 idx, Msg m) {
    s32 n;
    m.id = -1;
    if (m.flags & 1) {
        m.id = func_0011AD08();
    }
    n = D_010C4BC8[idx];
    m.seq = n;
    D_010C4BC8[idx] = n + 1;
    if (n + 1 >= 1000) {
        D_010C4BC8[idx] = 0;
    }
    func_00117848(&D_010C4BA8[idx], &m);
}
