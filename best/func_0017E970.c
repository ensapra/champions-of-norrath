typedef struct { u8 pad[0x488]; s32 sema; } Sem;
typedef struct { u8 pad[0x90]; s32 state,id,zero; } Rec;
extern Sem func_001D1C80;
extern s32 D_010EE080[];
extern u8 D_010EE120[], D_010EE180[], D_010EE1C0[], jtbl_004C006C[];
void func_0017EBF8(void);
s32 WaitSema(s32,s32,s32);
s32 func_001B08B0(void*,s32,s32,void*,s32,void*,s32,void*,s32);
s32 func_001AF710(void*,s32);
s32 func_0017E970(s32 idx,s32 arg,s32 count) {
 s32 *base=D_010EE080; Rec *r; s32 result;
 s32 sem=func_001D1C80.sema;
 if (sem==-1) return -1;
 if (idx < base[0]) {
  if ((u32)count < 3) {
   r=(Rec*)(base[1]+idx*0x38);
   *(s32*)r=count;
   D_010EE180[0]=idx; D_010EE180[1]=count;
   WaitSema(sem,arg,count);
   result=func_001B08B0(D_010EE120,5,1,D_010EE180,16,D_010EE1C0,16,func_0017EBF8,0);
   if(result){func_001AF710(jtbl_004C006C+0xC7F4,result);return -2;}
   r->id=idx; r->state=5; r->zero=0; return 0;
  }
  return -12;
 }
 return -11;
}
