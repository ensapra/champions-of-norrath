extern char D_00449E78[];
extern char D_0044D378[];
void func_0013EAC8(void *, s32);
void func_00141658(void *, s32);
void func_001447D8(void *);
void func_00184080(s32);
void func_00194300(void *);

void func_00145638(char *arg0, s32 arg1) {
    char *base;
    char *p;
    *(void **)(arg0 + 0x48) = D_00449E78;
    if (*(s32 *)(arg0 + 0x16C))
        func_00184080(*(s32 *)(arg0 + 0x16C));
    func_0013EAC8(arg0 + 0x170, 2);
    func_00194300(arg0 + 0x124);
    base = arg0 + 0x54;
    if (base != 0) {
        p = base + 0x78;
        while (base != p) {
            p -= 0x18;
            func_00194300(p + 8);
        }
    }
    *(void **)(arg0 + 0x48) = D_0044D378;
    func_00194300(arg0 + 0x4C);
    func_00141658(arg0, 0);
    if (arg1 & 1) func_001447D8(arg0);
}
