extern f32 D_00481028,D_0048102C; void func_0013EF30(f32*,f32*,void**,s32); void func_00194300(void*); void func_00194390(void*,void*,void*);
void func_001FC5B8(void *p) {
 void *best=0,*cur,*a,*b; f32 lo[3],hi[3],delta[3],dist,limit,bestd; s32 arr[128],n=0,i,score,bscore=0;
 if(*(s8*)((char*)p+0x23a)) return;
 cur=*(void**)((char*)p+0x240); if(cur){a=*(void**)((char*)cur+12); if(*(s32*)((char*)p+0x48)) best=a;}
 if(!best && (cur=*(void**)((char*)p+0x2f0))){a=*(void**)((char*)cur+12); dist=0; limit=*(f32*)((char*)p+0x314); if(limit*limit*D_00481028 < dist)best=a;}
 if(best && ((*(s32*)((char*)p+0x328)^*(s8*)((char*)p+0x239))&31)) goto done;
 limit=*(f32*)((char*)p+0x314)*D_0048102C; lo[0]=*(f32*)((char*)p+0x308)-limit;lo[1]=*(f32*)((char*)p+0x30c)-limit;lo[2]=*(f32*)((char*)p+0x310)-limit;hi[0]=*(f32*)((char*)p+0x308)+limit;hi[1]=*(f32*)((char*)p+0x30c)+limit;hi[2]=*(f32*)((char*)p+0x310)+limit;
 func_0013EF30(lo,hi,(void**)arr,0x80); limit=*(f32*)((char*)p+0x314); bestd=limit*limit;
 for(i=0;arr[i];i++){cur=(void*)arr[i]; a=*(void**)((char*)cur+12); dist=0; score=*(s32*)((char*)p+0x48)!=0; if(score>bscore || (score==bscore && dist<bestd)){best=cur;bestd=dist;bscore=score;}}
 done: cur=*(void**)((char*)p+0x240); if(!best || (cur && *(void**)((char*)cur+12)!=best)){func_00194300((char*)p+0x240);*(void**)((char*)p+0x240)=0;} if(best && !*(void**)((char*)p+0x240))func_00194390((char*)p+0x240,best,best);
}
