s32 func_00143D10(s32); s32 func_00165DC0(s32,s32);
s32 func_00217860(void *o, u32 *p) {
 u32 *start=p;
 p++; *(s32*)((char*)o+0x4c)=func_00143D10(p[-1]);
 p++; *(s32*)((char*)o+0x50)=func_00143D10(p[-1]);
 p++; *(s32*)((char*)o+0x54)=func_00143D10(p[-1]);
 p++; *(s32*)((char*)o+0x58)=func_00143D10(p[-1]);
 p++; {s16 x=*(s16*)((char*)p-2); p++; *(s32*)((char*)o+0x5c)=func_00143D10((s32)x);}
 {s16 x=*(s16*)((char*)p-2); p++; *(f32*)((char*)o+0x1c)=(f32)x;}
 {s16 x=*(s16*)((char*)p-2); p+=2; *(f32*)((char*)o+0x20)=(f32)x;}
 *(s32*)((char*)o+0x68)=*p++;
 *(s32*)((char*)o+0x60)=func_00165DC0(*(s32*)((char*)o+0x4c),*(s32*)((char*)o+0x50));
 *(s32*)((char*)o+0x64)=func_00165DC0(*(s32*)((char*)o+0x4c),*(s32*)((char*)o+0x54));
 if(*(s32*)((char*)o+0x68)&4) *(s32*)((char*)o+0xc)|=0x100000;
 return (char*)p-(char*)start;
}
