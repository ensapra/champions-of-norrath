typedef struct { char pad[0x94C]; int state; } Obj;
extern void func_001640C0(Obj *);
extern void func_00164538(Obj *);
void func_00164064(Obj *p) {
    if (p->state == 0) return;
    switch (p->state) {
    case 0:
        return;
    case 1:
        func_001640C0(p);
        return;
    case 2:
    default:
        func_00164538(p);
        return;
    }
}
