extern s32 func_001129F0(void*,u32*); extern u32 func_00153FA8(void*); extern void func_00113460(void*); extern void func_0010D250(void*,void*,s32); extern void func_00160128(void*,s32,s32,f32); extern void func_00160010(void*,s32,s32,f32,f32); extern void func_001F2E00(void*,u32); extern void func_0010C338(void*,void*,s16,void*,s32,f32,f32,f32,f32,f32,f32); extern f32 D_00480D7C,D_00480D80,D_00480D84,D_00480D88,D_00480D8C,D_00480D90,D_00480D94,D_00480D98,D_00480D9C,D_00480DA0,D_00480DA4,D_00480DA8,D_00480DAC; extern const char D_0046E0C0[];
void func_001F29C8(void *arg0,u32 arg1) { u32 mode=arg1; u8 *o=(u8*)arg0; u8 temp[0x10], work[0x10]; u32 q; void *obj; f32 f;
if(func_001129F0(arg0,&mode)!=0)return;
switch(mode){
case 0:q=func_00153FA8(arg0)%60;*(s32*)(o+0x100)=*(s32*)(o+0x328)+q+0x78;obj=*(void**)(o+0x24);func_00160128(o+0x120,*(s32*)((u8*)obj+0x84),3,D_00480D7C);break;
case 1:func_00113460(arg0);func_0010D250(temp,arg0,0xc8);*(s64*)(work)=*(s64*)(temp);*(s32*)(work+8)=*(s32*)(temp+8);*(s64*)(o+0x110)=*(s64*)work;*(s32*)(o+0x118)=*(s32*)(work+8);obj=*(void**)(o+0x24);func_00160128(o+0x120,*(s32*)((u8*)obj+0x94),0x803,D_00480D80);break;
case 3:func_00113460(arg0);obj=*(void**)(o+0x24);func_00160128(o+0x120,*(s32*)((u8*)obj+0x9c),0x803,D_00480D84);break;
case 5:obj=*(void**)(o+0x24);func_00160128(o+0x120,*(s32*)((u8*)obj+0x8c),3,D_00480D88);break;
case 6:obj=*(void**)(o+0x24);f=D_00480D8C;func_00160128(o+0x120,*(s32*)((u8*)obj+0x8c),3,f);if(func_00153FA8(arg0)%6==0)func_00160010(o+0x120,*(s32*)((u8*)obj+0x44),8,f,f);else{q=func_00153FA8(arg0)%3;func_00160010(o+0x120,*(s32*)((u8*)obj+q*8+0x2c),8,f,f);}q=func_00153FA8(arg0)%20;*(s32*)(o+0x100)=q;break;
case 14:case 15:obj=*(void**)(o+0x24);f=mode==14?D_00480D90:D_00480D94;func_00160128(o+0x120,*(s32*)((u8*)obj+0x8c),3,f);func_00160010(o+0x120,*(s32*)((u8*)obj+(mode==14?0x6c:0x74)),0x808,f,f);break;
case 9:obj=*(void**)(o+0x24);func_00160128(o+0x120,*(s32*)((u8*)obj+0x84),3,D_00480D98);break;
case 8:{s16 st=*(s16*)(o+0x23c);if(st==9||(st==6&&(*(u16*)(o+0x126)&8)))mode=st;else{obj=*(void**)(o+0x24);func_00160010(o+0x120,*(s32*)((u8*)obj+0x7c),0x10,D_00480D9C,D_00480D9C);}break;}
case 10:if(func_00153FA8(arg0)%3==0)func_001F2E00(arg0,func_00153FA8(arg0)%6);*(s64*)work=*(s64*)(o+0x10);*(s32*)(work+8)=*(s32*)(o+0x18);func_0010C338(arg0,work,*(s16*)(o+0x38),(void*)D_0046E0C0,*(s32*)(o+0x18),10.0f,2.0f,D_00480DA0,D_00480DA4,D_00480DA8,0.25f);obj=*(void**)(o+0x24);q=func_00153FA8(arg0)&1;func_00160128(o+0x120,*(s32*)((u8*)obj+q*8+0x5c),0x806,D_00480DAC);break;
}
*(s16*)(o+0x23c)=(u16)mode;
}
