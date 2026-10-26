void func_001083E8(void*);void func_00108408(void*);s32 func_0014B690(void*,void*);typedef struct{ s64 q[9];}B72;
s32 func_00155750(u8*arg0,B72*arg1){B72*base=arg1;B72*src=(B72*)(arg0+0x148);B72*end=arg1+1;func_001083E8(src);*arg1=*src;func_00108408(src);return(s32)((u8*)end+func_0014B690(arg0,end)-(u8*)base);}
