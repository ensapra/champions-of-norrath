extern u8 D_004CD878[];
extern s32 D_001D7F90[8];
void func_001A2850(void *, ...);
s32 func_00186DD8(void);
typedef struct { s32 size; s32 count; u8 *rd; u8 data[1]; } Ring;
void func_00182540(void) {
 D_001D7F90[0] = func_00186DD8();
 func_001A2850(D_004CD878);
}
void func_001AE8D8(Ring *r) {
 r->count--;
 r->rd++;
 if (r->rd == (u8 *)r + r->size + 0x10) r->rd = (u8 *)r + 0x10;
}
