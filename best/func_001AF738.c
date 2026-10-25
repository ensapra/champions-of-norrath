typedef struct {u32 a,b;}  P8;
typedef struct {u32 a,b,c;} P12;
extern u8 D_00408600[];
typedef struct {u8 *obj;} Entry;
extern Entry D_004272E8[];
extern char D_00466808[];
extern P12 D_00466818,D_00466828;
extern P8 D_00484850[],D_00484860[],D_00484870[],D_00484880[];
extern void func_001AF968(void*,void*,s32,void*);
extern void func_00303EB8(void*,void*,s32);
static inline s32 contains(u32 *p,u32 obj,s32 count,s32 found) {do {if(*p++==obj)found=1;}while(--count>=0);return found;}
void func_001AF738(s32 idx,void *arg) {
s32 n; s32 type; P8 text1,text2; P12 text3; P8 type3; P12 text4; P8 type4;
u8 *row;
u8 *obj=D_004272E8[((idx<<3)-idx)*4+idx].obj;
row=D_00408600+idx*0x5DB0;
s32 found=0; s32 i; u32 *p=(u32*)(row+0x5588);
{ u8 *test=obj; found=contains(p,(u32)test,15,found);}
p=(u32*)(row+0x55C8);
{ u8 *test=obj; found=contains(p,(u32)test,1,found);}
if(*(u64*)(obj+8)&0x100) {
void *text;
type=4;
if(*(s8*)(*(u8**)obj+0x1C)==8) {
text1=D_00484850[0]; text=&text1;
n=*(s16*)(obj+4);
if(n<20)func_00303EB8((void*)(u32)text1.a,D_00466808,n);

} else {text2=D_00484860[0];text=&text2;}
func_001AF968(text,&type,idx,arg);
} else if(found) {
text3=D_00466818; type3=D_00484870[0];
func_001AF968(&text3,&type3,idx,arg);
} else {
text4=D_00466828; type4=D_00484880[0];
func_001AF968(&text4,&type4,idx,arg);
}
}
