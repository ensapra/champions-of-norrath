s32 Deci2Call(s32,u32*); extern u8 D_0110DA88[];
s32 func_001B7E98(u16 p,void *o,void *h){volatile u32 a[4];a[1]=(u32)o;a[0]=p;a[2]=(u32)h;a[3]=(u32)D_0110DA88|0x20000000;return Deci2Call(1,(u32*)a);}
