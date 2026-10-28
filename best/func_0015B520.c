typedef struct {u32 code;u32 flags;u8 p8[8];s32 x10;u8 p14[8];s32 x1C;u8 p20[4];} Ent;
typedef struct {u8 p0[0x5AC];s32 x5AC;u8 p5B0[0x8D4-0x5B0];s32 x8D4;u8 p8D8[0xB80-0x8D8];Ent*ent;u8 pB84[0xBF0-0xB84];s32 cnt,base,r0,r1;u8 pC00[0xCF0-0xC00];s32 xCF0;u8 pCF4[0xD0C-0xCF4];s32 xD0C;} W;
void func_0015B520(W*w){
 Ent*p;
 s32 idx=-1,last=0,i,base,lim,a;
 u32 c; s32 n;
 p=w->ent;
 if(w->xD0C==0){w->r1=0;w->r0=0;return;}
 base=w->base;
 i=0;
 w->r0=base;w->r1=base;
 while(i<w->cnt){
  if(p->flags&0x50){idx=i;break;}
  c=p->code;
  if(c>=0x80){n=c<0xE0?1:c<0xF0?2:c<0xF8?3:0;i+=n;p+=n;}
  i++;p++;
 }
 if(idx<0)return;
 w->r0=base+p->x1C;
 w->r1=p->x1C;
 if(i<w->cnt){
  for(;;){
   last=p->x10;
   w->r1=p->x1C;
   if(!(p->flags&0x50)){ if(i<w->cnt)goto out; break;}
   c=p->code;
   if(c>=0x80){n=c<0xE0?1:c<0xF0?2:c<0xF8?3:0;i+=n;p+=n;}
   i++;p++;
   if(i>=w->cnt)break;
  }
 }
 w->r1+=last;
 out:
 lim=w->x5AC-(w->x8D4+w->xCF0)*2;
 a=w->r0;
 w->r1+=base;
 if(a<0)w->r0=0;else if(a>lim)w->r0=lim;
 if(w->r1<0){w->r1=0;return;}
 if(w->r1>lim)w->r1=lim;
}
