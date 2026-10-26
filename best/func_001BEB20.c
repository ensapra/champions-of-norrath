typedef struct { char pad[0x28]; u64 flags; } Obj;
void *func_001671F8(void*); void func_00173C08(s32,s32,void*,s32,s32,s32,s32); s32 func_0010EBF8(s32);
s32 func_001BEB20(Obj *a,s32 idx,s32 id,s32 ui){void *p=func_001671F8("NextLevel"); if(func_0010EBF8(0))return 0; func_00173C08(ui+0x156,0x10E,p,0x10A,-50,600,21); return 0;}
