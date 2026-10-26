s32 func_00153FA8(void*); void func_001D5630(s32,void*,s32,...); s32 func_001CE218(void*,void*,s32,s32,s32,s32,void*,s32,f32,f32); void func_0029F368(void*,s32); s32 D_004086D0[]; f32 D_00482968;
#define VCALL(obj, vt_off, a, b, c, d) (((s32 (*)(void*,s32,s32,void*,void*))(*(void**)((char*)(*(void**)((char*)(obj)+0x60))+(vt_off)+4)))((char*)(obj)+*(s16*)((char*)(*(void**)((char*)(obj)+0x60))+(vt_off)),(a),(b),(c),(d)))
void func_0029EF98(void *p, void *q) {
 s32 i,n,mode,type,idx,r,rand; void *node,*ctx,*sub,*v,*o,*tile,*data; s16 ids[4],vals[4],*id,*val,a,b; u32 flags; f32 t; s32 tmp[3];
 node=*(void**)((char*)p+0x4c); if(!node)return;
 id=ids;val=vals;for(i=0;i<4;i++)ids[i]=-1;for(i=0;i<4;i++){ids[i]=0;vals[i]=0;}
 ctx=*(void**)((char*)node+0xc);
 if(ctx && ((*(u32*)((char*)*(void**)((char*)ctx+0xc)+0xc))&0x40)) {
  flags=*(u32*)((char*)q+0xc);
  if(!(flags&0x01000040) && (!(flags&0x20)||!(*(u64*)((char*)q+0xa0)&0x04000000))) {
   tmp[0]=*(s32*)((char*)p+0x10);tmp[1]=*(s32*)((char*)p+0x14);tmp[2]=*(s32*)((char*)p+0x18);
   func_001D5630(0xA,tmp,*(s32*)((char*)p+0x18),p,(char*)p+0x4c);
   mode=*(s32*)((char*)p+0x68);type=mode>=0x10?0x80040:(mode<0xB?0x40040:0x40);
   o=*(void**)((char*)p+0xac);a=VCALL(o,0x70,2,mode,(char*)p+0x4c,o);b=VCALL(o,0x70,2,mode,(char*)p+0x4c,o);
   for(i=0;i<4;i++)if(ids[i]==-1||ids[i]==0x20){ids[i]=0x20;vals[i]=b;break;}
   tile=*(void**)((char*)ctx+0xc);idx=*(s32*)((char*)tile+0x3c0);data=(char*)D_004086D0+idx*0x5db0;
   func_001CE218(q,tile,0x186a0,0,0,type,p,0,(f32)*(s32*)((char*)data+4),(f32)*(s32*)((char*)data+8));
  }
 } else {
  sub=*(void**)((char*)node+0xc);v=*(void**)((char*)sub+0x48);
  if(VCALL(sub,0xa0,(s32)q,0,0,0)) {
   tmp[0]=*(s32*)((char*)p+0x10);tmp[1]=*(s32*)((char*)p+0x14);tmp[2]=*(s32*)((char*)p+0x18);
   func_001D5630(0xA,tmp,*(s32*)((char*)p+0x18));
   o=*(void**)((char*)p+0xac);r=VCALL(o,0x70,0,*(s32*)((char*)p+0x68),(char*)p+0x4c,o);
   t=D_00482968;rand=func_00153FA8(p);
   func_001CE218(q,sub,0x186a0,0,0,0x40,0,0,(f32)r,(f32)(r+(s32)((f32)rand*0.000015258789f)));
   (void)t;(void)v;
  }
 }
 if((*(u32*)((char*)q+0xc))&0x20) {o=*(void**)((char*)p+0xac);r=VCALL(o,0x58,3,*(s32*)((char*)p+0x68),0,0);*(f32*)((char*)q+0x35c)+=(f32)((s32)((r+(r>>31))>>1));}
 func_0029F368(p,2);
}
