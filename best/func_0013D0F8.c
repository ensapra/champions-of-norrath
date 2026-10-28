extern s32 func_0013C918(void*,s32,s32,s32);extern s32 func_0013CB88(void);extern s32 func_00191490(void*,s32,char*,s32);extern char D_00461DD0[];extern u8 D_004F4060[];
struct V{f32 x,y,z;};
extern float sqrtf(float);
void func_0013D0F8(void){
struct V a;struct V v;
a.x=-1.f;a.y=-1.f;a.z=1.f;
v=a;
{f32 inv=1.0f/sqrtf(v.x*v.x+v.y*v.y+v.z*v.z);v.x*=inv;v.y*=inv;v.z*=inv;}
*(struct V*)D_004F4060=v;
D_004F4060[0x24]=0x40;D_004F4060[0x25]=0x46;D_004F4060[0x26]=0x50;D_004F4060[0x2c]=0x40;D_004F4060[0x2d]=0x46;D_004F4060[0x2e]=0x50;*(u32*)(D_004F4060+0x34)=0x80;D_004F4060[0x2a]=0x20;D_004F4060[0x2f]=0;D_004F4060[0x30]=0x20;D_004F4060[0x31]=0x20;D_004F4060[0x32]=0x20;D_004F4060[0x33]=0;D_004F4060[0x27]=0;D_004F4060[0x28]=0x20;D_004F4060[0x29]=0x20;D_004F4060[0x2b]=0;
func_0013C918(&v,0x40,0x46,0x50);func_0013CB88();func_00191490(func_0013C918,0xC,D_00461DD0,0);}
