typedef struct __attribute__((packed, aligned(4))) {u64 a; s32 b;} P;
extern s32 func_001441B8(s32);
extern void func_002A9EB8(s32,s32,s32,s32);
s32 func_002AB430(s32 a,s32 b,s32 c,P *d) {
volatile P copy=*d;
s32 r=func_001441B8(0x60);
if(r) func_002A9EB8(r,b,c,a);
return r;
}
