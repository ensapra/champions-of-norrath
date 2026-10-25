extern s32 func_00113DD0(s32); extern void func_001A2660(void*,s32,s32); extern void func_0014CBF4(s32,void*,s32,...);
extern u8 func_001BCB38[]; extern u8 func_01000000[];
void func_00112FE0(s32 arg0,s64 arg1){s32 index=(s32)arg1; s32 a,b,entry; s32 *cur=(s32*)(func_001BCB38+0xE00);u8 pad[0x80];u8 temp[0x10];s64 pair[2];
 a=func_00113DD0(*cur);b=func_00113DD0(index);
 if(arg1==-1){s32 cb=*(s32*)(func_01000000+0xC2A68);if(cb)((void(*)(s32))cb)(-1);*cur=-1;}
 else {entry=index*0x4C4;if(!(*(s32*)(func_001BCB38+0xE10+*(s32*)(func_001BCB38+0xE10)+entry+0x4B0)&1)){
 if(a){func_001A2660(temp,0,0x10);func_0014CBF4(a,pad,1,0x61,temp);}
 if(b){s64 *strings=(s64*)(func_01000000+0xC2AF0);pair[0]=strings[0];pair[1]=strings[1];func_0014CBF4(b,pad,1,0x61,pair);}
 {s32 cb=*(s32*)(func_01000000+0xC2A68);if(cb){if(arg0){s32 val=*(s32*)(func_001BCB38+0xE10+*(s32*)(func_001BCB38+0xE10)+entry+0x4B8);((void(*)(s32))cb)(val);*cur=val;}else ((void(*)(s32))cb)(-1);}}
 }}
}
