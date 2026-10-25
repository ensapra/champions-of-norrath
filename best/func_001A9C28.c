extern u8 D_004C3A88[]; extern u8 D_004C3A90[]; extern u8 D_004C3A98[]; extern u8 D_004C3E90[]; extern u8 D_004C3E98[];
void func_001A2720(void); void func_001A27A0(void *); void func_001A9F20(void *,u32,void *);
typedef struct Chunk { u32 prev_size; u32 size; struct Chunk *fd; struct Chunk *bk; } Chunk;
void func_001A9C28(void *heap, void *mem) {
 Chunk *p,*next,*head,*q,*fd,*bk; u32 old,sz,size2,index,smallindex,bit,bound; u64 mask; void *callback; Chunk **smallbins; Chunk **largebins; s32 mark;
 if(mem==0) return;
 func_001A2720(); p=(Chunk *)((u8 *)mem-8); old=p->size; callback=(void *)old; sz=old&~1u; next=(Chunk *)((u8 *)p+sz);
 smallbins=(Chunk **)D_004C3A88; size2=next->size&~3u;
 if(next==smallbins[2]) {
   bound=sz+size2;
   if((old&1)==0) { u32 prevsize=p->prev_size; p=(Chunk *)((u8 *)p-prevsize); bound+=prevsize; head=p->fd; callback=head; bk=p->bk; head->bk=bk; bk->fd=head; }
   smallbins[2]=p; p->size=bound|1;
   if((u64)bound>=*(u64 *)D_004C3E90) func_001A9F20(heap,*(u32 *)D_004C3E98,callback);
   func_001A27A0(heap); return;
 }
 next->size=size2; mark=0;
 if((old&1)==0) { u32 prevsize=p->prev_size; p=(Chunk *)((u8 *)p-prevsize); sz+=prevsize; head=p->fd; if(head!=(Chunk *)(D_004C3A88+8)) { bk=p->bk; head->bk=bk; bk->fd=head; } else mark=1; }
 if((((Chunk *)((u8 *)next+size2))->size&1)==0) {
   sz+=size2;
   if(mark==0) { head=next->fd; largebins=(Chunk **)D_004C3A98; if(head==(Chunk *)(D_004C3A98-8)) { head->bk=p; mark=1; head->fd=p; p->fd=head; p->bk=head; } else { bk=next->bk; head->bk=bk; bk->fd=head; } }
   else { fd=next->fd; bk=next->bk; fd->bk=bk; bk->fd=fd; }
 }
 p->size=sz|1; *(u32 *)((u8 *)p+sz)=sz;
 if(mark==0) {
   if(sz<0x200) { smallindex=sz>>3; q=(Chunk *)(D_004C3A88+smallindex*8); mask=1ULL<<(smallindex>>2); head=q->fd; p->bk=q; p->fd=head; *(u32 *)(D_004C3A88+4)|=(u32)mask; }
   else {
     index=sz>>9; smallindex=sz>>3;
     if(index!=0) { if(index<5) smallindex=(sz>>6)+56; else { smallindex=index+91; if(index>=0x15) { if(index<0x55) smallindex=(sz>>12)+110; else if(index<0x155) smallindex=(sz>>15)+119; else if(index<0x555) smallindex=(sz>>18)+124; else smallindex=126; } } }
     largebins=(Chunk **)D_004C3A90; q=(Chunk *)((u8 *)largebins+smallindex*8-8); head=q->fd;
     if(head!=q) { while(sz < (head->size&~3u)) { head=head->fd; if(head==q) break; } q=head->bk; }
     else { if((s32)smallindex<0) smallindex+=3; mask=1ULL<<(smallindex>>2); *(u32 *)((u8 *)q+4)|=(u32)mask; q=q->fd; }
     p->bk=q; p->fd=head;
   }
   p->fd->bk=p; p->bk->fd=p;
 }
 func_001A27A0(heap);
}
