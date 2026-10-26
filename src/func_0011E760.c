s32 func_0011BA18(s32); void func_00114948(s32,s32,s32,s32,void*,s32); extern u8 func_0011E568[]; extern s32 D_001BB6C4[];
void func_0011E760(s32 a){s32 v=0;
if(a==10) goto call6a;
if(a<11) { if(a!=-1) goto done; goto call6b; }
if(a!=11) goto done;
v=func_0011BA18(0x69); goto done;
call6a: v=func_0011BA18(0x6a); goto done;
call6b: v=func_0011BA18(0x6b);
done: func_00114948(2,0x1f4,0xfa,v,func_0011E568,D_001BB6C4[0]);}
