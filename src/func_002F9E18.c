s64 func_002F9CF0(f32);
s64 func_002F9E18(f32 x){if(x<0.0f)return -func_002F9CF0(-x);return func_002F9CF0(x);}
extern s32 D_0031F250[];extern u8 D_00453970[],D_008EA980[];
void func_002FC428(void*,void*);void func_002FF8D8(void(*)(void));void func_002F9E58(void);
void func_002F9EE8(void){s64 n,off; s32 i;void(**p)(void);func_002FC428(D_00453970,D_008EA980);n=D_0031F250[0];if(n==-1){n=0;if(D_0031F250[1]){off=4;do{off+=4;n++;}while(*(s32*)((u8*)D_0031F250+(s32)off));}}i=(s32)n;if(i){p=(void(**)(void))(D_0031F250+i);do{void(*f)(void)=*p;p--;i--;f();}while(i);}func_002FF8D8(func_002F9E58);}
