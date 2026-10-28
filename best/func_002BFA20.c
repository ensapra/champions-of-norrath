extern int func_002702D8(void*,void*,int,int,int);
extern void func_0017DB78(void*,void*,void*,float);
extern void func_00270F28(void*,int);
extern char D_00453328[];
s32 D_004844A0;
typedef struct {s64 a; s32 b;} __attribute__((packed,aligned(4))) T12;
void func_002BFA20(void *arg0, void *arg1,int arg2,int arg3){
struct {T12 tmp; char pad[20]; T12 tmp2;} t;
t.tmp=*(T12*)arg1;
func_002702D8(arg0,&t.tmp,(short)arg2,arg3,1);
*(void**)((char*)arg0+0x48)=D_00453328;
void *w=(void*)D_004844A0; t.tmp2=*(T12*)((char*)arg0+0x10);
func_0017DB78(w,&t.tmp2,(char*)arg0+0x18,32.0f);
*(T12*)((char*)arg0+0x660)=*(T12*)((char*)arg0+0x10);
*(int*)((char*)arg0+0xc)&=0xffefffff;
func_00270F28(arg0,0);
}
