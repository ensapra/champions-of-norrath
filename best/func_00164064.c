typedef struct { char pad[0x94C]; int state; } Obj;
extern void func_001640C0(void *);
extern void func_00164538(void *);
void func_00164064(Obj *p) {
 int state=p->state;
 if (state == 0) return;
 if (state == 1) { func_001640C0(p); return; }
 if (state < 2) {
   if (state == 0) return;
   func_00164538(p); return;
 }
 func_00164538(p);
}
