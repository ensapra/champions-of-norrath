extern u8 D_004CD8A8[];
extern u8 D_004CD888[];
extern u8 D_004CD878[];
extern s32 D_001D7F90[2];
void func_001A2850(void *, ...);
void func_00186CA8(void);
void func_00186DF8(void);
s32 func_00186DD8(void);
typedef struct { s32 size; s32 count; s32 *rd; s32 data[1]; } Ring;
s32 func_00182808(void) {
 func_001A2850(D_004CD8A8);
 return 1;
}
void func_00182570(s32 a) {
 if (a == -1) func_00186DF8();
 else func_00186CA8();
 func_001A2850(D_004CD888, a);
}
void func_00182540(void) {
 D_001D7F90[0] = func_00186DD8();
 func_001A2850(D_004CD878);
}
void func_001AE8D8(Ring *r) {
 r->count--;
 r->rd++;
 if ((u8 *)r->rd == (u8 *)r + r->size + 0x10) r->rd = (s32 *)((u8 *)r + 0x10);
}
