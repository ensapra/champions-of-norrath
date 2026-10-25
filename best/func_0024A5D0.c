extern u8 D_007DD290[];
void func_0024A5D0(s32 n){u8 *entry=D_007DD290+(((n<<3)-n)<<4)+n; s32 *cnt=(s32*)(entry+0x1c0); s32 c=*cnt; if(c<8){u8 *slot=entry+((c*3)<<4); u8 *p=slot+0x50; slot[0x40]=0; *(s32*)(p+0x10)=2; *(s32*)(p-0x50)=0;*(s32*)(p-0x48)=0;*(s32*)(p-0x4c)=0;*(s32*)(p-0x44)=0; *cnt+=1;}}
