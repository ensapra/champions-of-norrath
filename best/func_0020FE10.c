s32 func_002FD2E0(s32,s32); void func_002FF3C8(void) __attribute__((noreturn));
typedef s32(*GetFn)(void);
#define VC(o) (((GetFn)(*(void**)((u8*)*(void**)((u8*)(o)+0x48)+4)))())
void func_0020FE10(void *p, void *q){
    s32 a, b;
    void *t;
    if (*(void**)((u8*)p+0x4c)) {
        if (q) a = VC(q); else func_002FF3C8();
        t = *(void**)((u8*)*(void**)((u8*)p+0x4c)+0xc);
        if (t) b = VC(t); else func_002FF3C8();
        if (func_002FD2E0(a, b) == 1) return;
    }
    if (p) a = VC(p); else func_002FF3C8();
    if (q) b = VC(q); else func_002FF3C8();
    if (func_002FD2E0(a, b) != 1) *(s32*)((u8*)p+0x98) = 1;
}
