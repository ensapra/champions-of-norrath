void func_002D2B50(void*);void func_002D3130(void*p){func_002D2B50(p);*(s32*)((u8*)p+32)=0;*(s32*)p=(((*(s32*)p&~12)|4)&~1)|256;}
extern char *D_00444920[];extern u8 D_0047B500[];void func_00304640(void*,void*);
void func_002D3D30(u32 a,u8*p){if(a<4)func_00304640(p,D_00444920[a]);else *p=D_0047B500[0];}
s32 func_002E4F00(s32,void*,s32,s32,s32);s32 func_002E4E48(s32,s32,void*,s32,s32);
s32 func_002E5348(s32 a,s32*p,s32 c){s32 r=func_002E4F00(a,p,1,c,64);if(r<0)return r;if(func_002E4E48(a,1,p,68,4)<0)return -542;return *p?*p:-540;}
s32 func_002E53B8(s32 a,s32*p,s32 c,s32 d){p[0]=c;p[1]=d;if(func_002E4E48(a,2,p,8,4)<0)return -542;return *p;}
