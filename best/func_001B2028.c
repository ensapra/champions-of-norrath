#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
s32 func_00102178(void *, void *, s32);
s32 func_001AC490(s8);
s32 func_001B0578(s8,s32,s8,s16,s16,s8,s8,s32);
s32 func_001BBE58(s8,s32);
s32 func_00305328(s32,void*);
u8 D_00408600[];
extern char D_00484928[];
f32 D_004805A0;
void func_001B2028(s32 arg0) {
 f32 temp_f20,temp_f0;
 s16 temp_23,temp_30;
 s32 temp_11,temp_19,temp_6;
 s8 temp_18,temp_20,temp_21,temp_22,temp_3;
 void *temp_16,*temp_17,*temp_4,*temp_5;
 temp_17=(void *)(arg0+1);
 temp_3=F(temp_17,s8,-1);
 switch(temp_3) {
 case 1:
  temp_17=(void *)((u8*)temp_17+1);
  temp_20=F(temp_17,s8,-1);
  temp_17=(void *)((u8*)temp_17+2);
  temp_30=F(temp_17,s16,-2);
  temp_17=(void *)((u8*)temp_17+4);
  temp_19=F(temp_17,s32,-4);
  temp_17=(void *)((u8*)temp_17+2);
  temp_23=F(temp_17,s16,-2);
  temp_17=(void *)((u8*)temp_17+1);
  temp_18=F(temp_17,s8,-1);
  temp_22=F(temp_17,s8,1);
  temp_21=F((u8*)temp_17+1,s8,-1);
  func_001AC490(temp_20);
  temp_6=temp_20*0x5DB0;
  temp_5=D_00408600+0x148;
  temp_17=temp_6+D_00408600;
  temp_16=temp_6+(temp_18*0x1208)+temp_5+(temp_19*0x48);
  temp_4=F(temp_16,void* *,0);
  temp_f20=(f32)func_00102178(temp_16,temp_5,temp_6);
  if(F(temp_4,s8,0x1C)==8 || func_00305328(F(temp_4,s32,0),D_00484928)) {}
  temp_f0=(f32)F(temp_16,s16,4);
  temp_11=F(temp_17,s32,0xE8)+(s32)(temp_f20/temp_f0*D_004805A0);
  F(temp_17,s32,0xE8)=temp_11;
  func_001B0578(temp_20,temp_19,temp_18,temp_30,temp_23,temp_21,temp_22,temp_11);
  return;
 case 0:
  temp_17=(void *)((u8*)temp_17+1);
  temp_18=F(temp_17,s8,-1);
  func_001AC490(temp_18);
  func_001BBE58(temp_18,F(temp_17,s32,2));
  return;
 }
}
