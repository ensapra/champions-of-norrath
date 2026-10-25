typedef struct {s16 v[4];} S8s;typedef struct{ s32 a,b,c;} P12;
extern char D_004860D8[];
void func_0013E730(s16*);void func_0013E7D0(void);void func_001590C0(void*);void func_00156CB0(void*,s32,s16);
void func_0016AE78(s32,s32,s32,void*,void*,s32,s64,s32,s32);void func_0013CB88(void);
void func_0028B468(void *arg0){
u8 a[0x30];S8s t;P12 c;u8 *p;s32 x,y;
t=*(S8s*)D_004860D8;
func_0013E730(t.v);func_0013E7D0();func_001590C0(a);
func_00159550(a,*(f32*)((u8*)arg0+0x10),*(f32*)((u8*)arg0+0x14),*(f32*)((u8*)arg0+0x18));
func_00156CB0(a,2,*(s16*)((u8*)arg0+0x38));func_00156CB0(a,0,*(s16*)((u8*)arg0+0x5A));
p=*(u8**)((u8*)arg0+0x24);x=*(s32*)(p+0xC);y=*(s32*)(p+0x14);c=*(P12*)((u8*)arg0+0x10);
func_0016AE78(x,y,0,&c,a,0,*(s64*)((u8*)arg0+0x68),0,0);
func_0013CB88();}
