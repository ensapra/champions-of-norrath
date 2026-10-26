f32 func_0015A070(s16); f32 func_0015A100(s16); f32 func_0017BF90(s32,void*,f32*,void*,s32,s32,s32,void*,f32); s32 D_004844A0; typedef struct{f32 x,y,z;}V3;
s16 func_0010BD98(void*a,V3 b,s16 angle,s32 dir,f32 scale){s16 cur=angle,best=angle,lo,hi;s32 n=0,step=(dir<<24)==0?-2048:2048;f32 max=0,top=0,one=1,r,t,x,y,xx,yy,q,m,u;V3 v,d,o,v2,d2,v3,d3;
for(;;){lo=cur-0x4000;hi=cur+0x4000;r=*(f32*)((char*)a+0x1c);t=scale*r;x=b.x+func_0015A070(lo)*r;y=b.y+func_0015A100(lo)*r;xx=b.x+func_0015A070(hi)*r;yy=b.y+func_0015A100(hi)*r;v.x=func_0015A070(cur)*t;v.y=func_0015A100(cur)*t;v.z=0;d.x=x;d.y=y;d.z=b.z+13;q=func_0017BF90(D_004844A0,&o,&v,a,0,3,0,&d,t);m=1;top=1;
if(q<0)goto A;if(q>1)goto A;top=q;A: if(q>=0)m=top;
if(max<m){d2.x=x;d2.y=y;d2.z=b.z+13;v2.x=func_0015A070(cur)*t;v2.y=func_0015A100(cur)*t;v2.z=0;q=func_0017BF90(D_004844A0,&o,&v2,a,0,3,0,&d2,t);u=1;if(q>=0&&q<=1)u=q;if(u<top)m=u;
if(max<m){d3.x=xx;d3.y=yy;d3.z=b.z+13;v3.x=func_0015A070(cur)*t;v3.y=func_0015A100(cur)*t;v3.z=0;q=func_0017BF90(D_004844A0,&o,&v3,a,0,3,0,&d3,t);u=1;if(q>=0&&q<=1)u=q;if(u<m)m=u;if(max<m){max=m;best=cur;}}}
if(max==1||++n>=32)return best;cur+=step;}}
