typedef struct Ent { struct Ent *volatile next; volatile s32 val; s32 aux; s32 pad; } Ent;
extern Ent *volatile D_0110D880[];
s32 func_001B6F48(s32);

s32 func_001B7BC0(u32 id) {
    Ent *e = (Ent *)((id >> 8) * 16);
    s32 r;
    if ((s32)id < 0 || ((id ^ e->val) & 0xFF))
        return 0x80008002;
    r = func_001B6F48(e->val);
    if (r == 0) {
        Ent *head = D_0110D880[0];
        D_0110D880[0] = e;
        e->next = head;
        e->val = 0;
    }
    return r;
}

extern s32 D_010D4500[];
s32 func_0014CE44(s32, s32, s32);

s32 func_00147F58(void *a0, u8 *a1) {
    return func_0014CE44(D_010D4500[*(s32 *)(a1 + 0x80)], 0x10, 6);
}

extern s32 D_010D44F8[];
s32 func_0011BA18(s32);
s32 func_00110720(s32, void *);

void func_00147498(void) {
    u8 buf[16];
    D_010D44F8[0] = func_00110720(func_0011BA18(0x13F), buf);
}

extern s32 D_010D44F0[];
void func_00140010(void *);

void func_00147460(void *arg0) {
    void (*fn)(s32);
    func_00140010(arg0);
    fn = *(void (**)(s32))((u8 *)arg0 + 8);
    if (fn != NULL)
        fn(D_010D44F0[0]);
}
