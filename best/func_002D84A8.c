extern s32 func_002DD640(void);
extern s32 func_002DD698(void);
typedef struct N { s32 a; s32 b; s32 c; s32 d; s32 e; struct N *next; } N;
extern u8 D_008E0440[];

void func_002D84A8(N *arg0, s32 arg1) {
    u8 *b;
    N *p;
    func_002DD640();
    arg0->a = arg1;
    arg0->b = 0;
    arg0->c = 0;
    arg0->d = 0;
    arg0->e = 0;
    arg0->next = 0;
    b = D_008E0440;
    p = *(N **)(b + 0x28);
    if (p == 0) {
        *(N **)(b + 0x28) = arg0;
    } else {
        while (p->next != 0) {
            p = p->next;
        }
        p->next = arg0;
    }
    func_002DD698();
}

extern s32 func_002E2ED8(s32);
s32 D_008E8140_dummy;
extern s32 D_008E8140;
extern s32 D_008E8144;

s32 func_002E2390(s32 arg0) {
    s32 old = 0;
    if (func_002E2ED8(1) == 0) {
        s32 t = func_002DD640();
        old = D_008E8140;
        D_008E8140 = arg0;
        D_008E8144 = 0;
        if (t) {
            func_002DD698();
            return old;
        }
        return old;
    }
    return old;
}

extern s32 sceSifGetReg_2(s32);
extern void func_002D5560(void);
extern void func_002DF7B0(s32, s32);

s32 func_002DD4E0(void) {
    s32 val = sceSifGetReg_2(4);
    if (val & 0x40000) {
        func_002D5560();
        func_002DF7B0(1, 1);
        func_002DF7B0(0, 1);
        return 1;
    }
    return 0;
}

extern s32 iSignalSema_2(s32);
extern s32 D_004460D8, D_004460DC, D_004460A8, D_004460B4, D_00446094, D_004460A0;

void func_002E23F8(s32 *arg0) {
    D_004460D8 = *arg0;
    D_004460DC = D_004460D8;
    if (D_004460D8 == 0xB) {
        D_004460D8 = 0;
        D_004460B4 = 0;
        return;
    }
    iSignalSema_2(D_004460A8);
    if (D_00446094 && D_008E8140) {
        iSignalSema_2(D_004460A0);
    } else {
        D_004460B4 = 0;
    }
    D_004460D8 = 0;
}
