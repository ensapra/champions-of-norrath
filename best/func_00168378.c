f32 D_0047FFB0; volatile f32 D_0047FFB4;
void func_00168378(s32 x,s32 y,f32 *ox,f32 *oy){f32 a=(f32)(x-128)*0.0078125f;f32 b=(f32)(y-128)*0.0078125f;f32 d=b*b+a*a;if(d<D_0047FFB0){*ox=0;*oy=0;return;}d=(1.0f-D_0047FFB0/d)*D_0047FFB4;*ox=a*d;*oy=b*d;}
