typedef struct {s32 a,b,c;} Arg2;
typedef struct {char pad0[0x48]; void *unk48; char pad1[0x14c]; void *alloc[4]; void *refs[4]; s32 slots[4]; char rest[0x400];} Obj;
extern char D_0044E9D0[],D_004711F0[],D_00471208[];
s32 func_0021DF18(s32,s32); void *func_001441B8(s32); void func_00222BB0(void*,void*,s32,s32); void func_00220278(void*,s16,s32);
s32 func_00140F60(void*,void*,s32); char *func_00143A80(void*,void*,s32); void func_00303EB8(void*,void*,s32,...);
void func_00223BD8(Obj *o,s32 arg1,Arg2 *arg2,s16 arg3,s32 arg4) {
 char tmp[0x40]; s32 sp50=arg1, i,j; s32 *p; char *s; void *v;
 func_00220278(tmp,arg3,arg2->c);
 o->alloc[0]=0; o->alloc[1]=0; o->unk48=D_0044E9D0; o->alloc[2]=0; o->alloc[3]=0;
 if(func_0021DF18(arg4,0)){v=func_001441B8(0x184); if(v)func_00222BB0(v,tmp,*(s32*)((char*)o+0x2c),0); o->alloc[0]=v;}
 if(func_0021DF18(arg4,1)){v=func_001441B8(0x184); if(v)func_00222BB0(v,tmp,*(s32*)((char*)o+0x2c),1); o->alloc[1]=v;}
 if(func_0021DF18(arg4,2)){v=func_001441B8(0x184); if(v)func_00222BB0(v,tmp,*(s32*)((char*)o+0x2c),2); o->alloc[2]=v;}
 if(func_0021DF18(arg4,3)){v=func_001441B8(0x184); if(v)func_00222BB0(v,tmp,*(s32*)((char*)o+0x2c),3); o->alloc[3]=v;}
 o->refs[0]=o->alloc[0];o->refs[1]=o->alloc[1];o->refs[2]=o->alloc[2];o->refs[3]=o->alloc[3];
 for(i=0;i<4;i++){
   o->slots[i]=0; func_00303EB8(tmp,D_004711F0,i);
   if(func_00143A80(o,tmp,0)){ *(s32*)((char*)o+0xd0)|=1; o->slots[i]|=1; }
   p=(s32*)((char*)o+0x1c0+i*0x50);
   for(j=0;j<10;j++){ p[2*j]=-1; p[2*j+1]=0; }
   func_00303EB8(tmp,D_00471208,i,(char*)o+8,-1); s=func_00143A80(o,tmp,0);
   if(s){for(j=0;j<10&&s[j];j++){p[2*j]=(s[j]==0x31)?0:-1;p[2*j+1]=(s[j]==0x31)?-1:0;}}
 }
}
