extern s64 func_00171040(s64,s64); extern s32 func_00171408(s32); extern s64 func_001798F0(s64,s64); extern s64 func_00179948(s64,s64); extern s64 D_00506540[],D_00506548[],D_00506550[],D_00506558[],D_00506560[],D_00506568[],D_00506570[];
s64 func_0019F148(s64 arg0,s64 arg1,s32 arg2){s32 mode=arg2;s64 x=arg0;s64 y=arg1;s32 hi=(s32)(x>>32)&0x7fffffff;
if(hi>0x3e3fffff){}else if(func_00171408(hi)==0)return x;
if(hi<=0x3e3fffff&&func_00171408(hi)==0)return x; s64 a=func_00171040(x,x);s64 b=func_00171040(a,x);s64 c=func_00171040(a,D_00506540[0]);c=func_001798F0(c,D_00506548[0]);c=func_00171040(a,c);c=func_001798F0(c,D_00506550[0]);c=func_00171040(a,c);c=func_001798F0(c,D_00506558[0]);c=func_00171040(a,c);c=func_001798F0(c,D_00506560[0]);
if(mode==0){s64 d=func_00171040(a,c);d=func_001798F0(d,D_00506568[0]);d=func_00171040(b,d);return func_001798F0(x,d);}
s64 q=func_00171040(y,((s64)0xff80)<<46);s64 t=func_00171040(b,c);s64 u=func_00171040(t,t);u=func_00179948(t,u);u=func_00171040(a,u);u=func_00179948(u,y);s64 z=func_00171040(b,D_00506570[0]);u=func_00179948(u,z);return func_00179948(x,u);}
