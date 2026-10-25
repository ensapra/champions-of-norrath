extern s32 D_00484478;
extern s32 D_0048447C;
typedef struct { u32 mask; void (*fn)(void); } CB;
extern CB D_00793E60[];

void func_00191770(s32 arg0, s32 arg1) {
    s32 i;
    D_0048447C = 0;
    if (D_00484478 <= 0) return;
    i = 0;
    while (1) {
        if ((D_00793E60[i].mask & arg0) == 0) {
            if (arg1 == -1 || ((i + 1) & arg1)) {
                D_00793E60[i].fn();
                i = D_0048447C;
            }
        }
        i = D_0048447C + 1;
        D_0048447C = i;
        if (i >= D_00484478) break;
    }
}
