typedef struct N{u16 tag,used;s32 size;void*arg;struct N*next,*prev;s32 data; s32 caller;} N;
s32 func_00144640(void);s32 func_00144B60(char*,s32);s32 func_002D70D0(char*,s32,s32);extern char D_00461EB8[],D_00483B18[];s32 D_00483B08[2];s32 D_00483B28; volatile s32 D_004868AC;N *D_004868B0;N *D_004868B4;
void*func_00144368(s32 size,s32 arg){
    s32 align,need,rounded,old,rem;N*n,*head,*sp;char*ret;
    s32 ra=(s32)__builtin_return_address(0);
    s32 min=64;
    size = (min < size) ? size : min;
    func_00144B60(D_00483B18,0x1f6);
    n=D_004868B4;head=n;
    do{
        if(n->used==0){
            ret=(char*)n+0x1c;
            align=(s32)ret&255;
            if(align){
                s32 base=D_004868AC+0x1c;
                s32 pos=(s32)n+base;
                align=(base-(pos-((pos/256)*256)))+256;
                need=size+align;
            } else need=size;
            rounded=(need+7)&~7;
            old=n->size;
            if(old>=rounded){
                if(align){
                    s32 cut=align-0x38;
                    sp=(N*)((char*)n+cut+0x1c);
                    sp->prev=n;sp->next=n->next;sp->size=old-cut-0x1c;
                    n->size=cut;n->next->prev=sp;n->next=sp;
                    n=sp;n->tag=-0x5433;n->used=0;n->arg=0;
                    old=n->size;
                }
                rem=old-rounded;
                if(D_004868AC<rem){
                    sp=(N*)((char*)n+rounded+0x1c);
                    sp->next=n->next;sp->prev=n;sp->size=rem-0x1c;
                    sp->tag=-0x5433;n->next->prev=sp;n->next=sp;
                    sp->used=0;sp->arg=0;n->size=rounded;
                    old=rounded;
                }
                D_00483B28=D_00483B28-old-0x1c;
                n->arg=(void*)arg;n->used=1;n->data=D_00483B08[0];
                D_004868B0=n->next;n->caller=ra;
                return ret;
            }
        }
        n=n->next;
    }while(n!=head);
    func_00144640();
    func_002D70D0(D_00461EB8,ra,size);
    *(volatile s32*)0=0;
    return 0;
}
