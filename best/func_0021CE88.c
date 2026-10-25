typedef struct {s64 a;} __attribute__((packed)) Pack;
typedef struct {Pack a;s32 b;} L12;
extern char D_0044E8B0[],D_004853F8[];
s32 D_004853F0[2];
s32 func_00140410(void*,void*);
s32 func_001411F0(void*,void*,s32,s32);
void func_0021CE88(void*p,void*q,s32 a,s32 b){
L12 tmp=*(L12*)q;s32 n;
func_001411F0(p,&tmp,0,b);
*(void**)((u8*)p+0x48)=D_0044E8B0;
n=D_004853F0[0];*(s32*)((u8*)p+0x4c)=n;
n=n+1;*(s32*)((u8*)p+0xc)|=3;D_004853F0[0]=n;
func_00140410(D_004853F8,p);
}
