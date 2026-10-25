struct Ent { char pad[0x4BC]; s32 f4BC; char pad2[8]; };
struct Rec { s32 a, b; void *cb; char pad[0x14]; };
extern s32 D_001C4E24[];
extern s32 D_001C4E28[];
extern s32 D_001C6834[];
extern struct Ent *D_001BD948[];
void func_00118140(void *, s32, void *, void *, void *);
void func_00118278(s32, void *);
void func_0012CCA8(void);
void func_0012D4F8(void);
void func_0013BBA8(void);
void func_0013E340(s32);
void func_0013E350(void);
void func_0013E3D0(void);
void func_0013E418(void);
void func_0013E5D0(void);

void func_0012D098(s32 arg0) {
    struct Rec a, b;
    D_001C4E24[0] = arg0;
    if (arg0 != -1) {
        if (D_001C4E28[0] == 0) {
            func_0013BBA8();
        }
        if (D_001C4E24[0] < D_001C6834[0]) {
            func_00118140(&a, 1, func_0013E350, func_0013E418, func_0013E5D0);
            a.cb = func_0012CCA8;
            func_0013E340(D_001C4E24[0]);
            func_00118278(0, &a);
        } else {
            s32 off;
            func_00118140(&b, 1, func_0013E3D0, func_0013E418, func_0013E5D0);
            b.cb = func_0012CCA8;
            off = D_001C4E24[0] * 0x4C4;
            func_0013E340(((struct Ent *)((char *)D_001BD948[0] + off))->f4BC);
            func_00118278(0, &b);
        }
    }
    func_0012D4F8();
}
