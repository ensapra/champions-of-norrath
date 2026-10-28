struct T { char pad[0x48]; virtual ~T(); };
extern T D_00408600[];
extern "C" {
void func_002D16A0(s32);
void func_002D2250(s32, s32, s32, s32, s32, s32, s32);
void func_002D2538(s32, s32);
void func_002DD4E0(void);
void func_002DD530(s32);
void func_002E3E60(s32);
void func_002E3FE8(s32);
void func_002E63A8(s32);
void func_002F1628(void);
void func_002F9E18(void);
void func_002FEE10(void *);
void func_002FFF48(s32);
void func_00303838(s32);

void func_002CFD78(void) {
    T *p = D_00408600;
    if (p != 0) {
        s32 *c = (s32 *)p - 2;
        T *e = p + *c;
        while (p != e) {
            --e;
            e->~T();
        }
        func_002FEE10(c);
    }
    func_002D2538(0, 0);
    func_002D2250(0, 0, 0, 0, 0, 0, 0);
    func_002DD530(0);
    func_002DD4E0();
    func_002E3E60(0);
    func_002E3FE8(0);
    func_002E63A8(0);
    func_002E63A8(0);
    func_002F1628();
    func_002D16A0(0);
    func_002F9E18();
    func_002FFF48(0);
    func_00303838(0);
}
}
