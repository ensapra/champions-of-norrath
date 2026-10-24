typedef struct {
    char name[0x18];
} Ent0025B308;
extern Ent0025B308 D_00839850[];
extern void func_001D1108(void *);
extern s32 func_003044FC(void *, void *);

s32 func_0025B308(void) {
    char buf[0x100];
    Ent0025B308 *p = D_00839850;
    s32 i;

    func_001D1108(buf);
    for (i = 0; i < 26 && p[i].name[0] != 0; i++) {
        if (func_003044FC(p[i].name, buf) == 0) {
            return 1;
        }
    }
    return 0;
}
