typedef unsigned long long u64; typedef unsigned int u32; typedef int s32; typedef float f32;
typedef struct { void *obj; u64 flags; } Item;
extern char D_00408600[],D_00462190[],D_004621A8[],D_004621C0[],D_004621D8[],D_004621F0[],D_00462208[],D_00462220[],D_00462238[],D_00462250[],D_00483B70[];
s32 func_001ABB48(s32,s32); f32 func_001080D8(void *); void *func_00165DC0(char *,char *);
s32 func_0024D308(void *,f32); void func_00303EB8(char *,char *);
void func_001D3E88(void *,char *); void func_001ADF38(s32,void *,s32); void func_001A5358(s32); void func_001A6760(s32,s32);
s32 func_00148480(s32 player,Item *item,s32 arg2,void *arg3) {
 f32 scale=1.0f, value; s32 obj=(s32)item->obj, res; s32 type,ofs;
 char buf[0x40]; char *record,*base; u64 flags;
 if(*(s8*)(obj+0x1C)==8 && func_001ABB48(player,0x10000)) scale=0.5f;
 value=func_001080D8(item); value*=scale;
 base=D_00408600; record=base+player*0x5DB0;
 type=*(s8*)(obj+0x1D); ofs=(((type<<3)+type)<<6)+type; ofs<<=3; record+=ofs;
 if(*(s32*)(record+0x1348)+1>=0x40) {
   res=(s32)func_00165DC0(D_00483B70,D_00462190);
   func_0024D308((void*)res,1.0f); return 0;
 }
 if(*(f32*)(record+0x134)+value<=*(f32*)(record+0x138)) {func_001A6760(player,0); return 0;}
 flags=item->flags;
 if(flags&0x800000) func_00303EB8(buf,D_004621A8);
 else if(flags&0x200000) func_00303EB8(buf,D_004621C0);
 else if(flags&0x40000) func_00303EB8(buf,D_004621D8);
 else if(flags&0x100000) func_00303EB8(buf,D_004621F0);
 else if(flags&0x80000) func_00303EB8(buf,D_00462208);
 else if(flags&0x1000000) func_00303EB8(buf,D_00462220);
 else func_00303EB8(buf,D_00462238);
 res=(s32)func_00165DC0(D_00483B70,buf); func_0024D308((void*)res,1.0f);
 func_001D3E88((void*)item,D_00462250); func_001ADF38(player,item,1); func_001A5358(player); return 1;
}
