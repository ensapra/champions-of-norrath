extern s32 D_00484478;
extern s32 D_0048447C;
typedef struct { void (*fn)(void); s32 pad[2]; u32 mask; } CB;
extern CB D_00793E60[];

void func_00191770(s32 arg0, s32 arg1) {
    D_0048447C = 0;
    if (D_00484478 > 0) {
        CB *t = D_00793E60;
        u32 *mp = &t->mask;
        do {
            u32 m = mp[D_0048447C * 4];
            if ((m & arg0) == 0) {
                if (arg1 == -1 || (m & arg1)) {
                    t[D_0048447C].fn();
                }
            }
        } while (++D_0048447C < D_00484478);
    }
}
