extern s32 func_002DD640(void); extern void func_002DD698(void);
void func_002D5570(void) { s32 t; t=func_002DD640(); *(vu32 *)0x1000F000=4;  if(t) func_002DD698(); while (!(*(vu32 *)0x1000F000 & 4)) {} t=func_002DD640(); *(vu32 *)0x1000F000=4;  if(t) func_002DD698(); }
