typedef struct { s32 a, b, c; } V12;
extern char D_004783F8[];
extern char D_00478410[];
s32 D_004844C0;
extern char D_00486290[];
void func_001437E8(void *);
s32 func_00153FA8(void *);
s32 func_00165DC0(char *, char *);
void func_00184080(s32);
void func_001D5630(s32, V12 *);
void func_0024D308(s32, void *, f32);
void func_00303EB8(char *, char *, s32);

void func_002A1A10(char *self, s32 arg) {
    if (*(s32 *)(self + 0x60) == 0) {
        func_00184080(*(s32 *)(self + 0x74));
        if (arg != 0) {
            char name[0x50];
            V12 v;
            V12 pad;
            V12 w;
            if (D_004844C0 & 0x40000) {
                func_00303EB8(name, D_004783F8, (func_00153FA8(self) & 3) + 1);
                v = *(V12 *)(self + 0x10);
                func_001D5630(8, &v);
            } else {
                func_00303EB8(name, D_00478410, (func_00153FA8(self) & 3) + 1);
                w = *(V12 *)(self + 0x10);
                func_001D5630(2, &w);
            }
            func_0024D308(func_00165DC0(D_00486290, name), self, 1.0f);
        }
        func_001437E8(self);
        *(s32 *)(self + 0x60) = 1;
    }
}
