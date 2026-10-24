extern u8 jtbl_004C006C[];
s32 func_001B5C80(void);void func_001B5CD8(void);
u64 func_001B6DC0(void){u32*mm=(u32*)0x10001000;u64 low=mm[0];u32 c=*(s32*)(mm+4);u64 hi=*(u64*)(jtbl_004C006C+0x4EE4);u64 sh;if(c&0x800){low=mm[0];hi++;}c&=3;sh=c?2U:0U;return (low|(hi<<16))<<(sh<<c);}
u64 func_001B6E10(void){s32 lock=func_001B5C80();u32*mm=(u32*)0x10001000;u64 low=mm[0];u32 c=*(s32*)(mm+4);u64 hi=*(u64*)(jtbl_004C006C+0x4EE4);u64 sh;if(c&0x800){low=mm[0];hi++;}c&=3;sh=c?2U:0U;low=(low|(hi<<16))<<(sh<<c);if(lock)func_001B5CD8();return low;}
typedef struct Node {struct Node*next,*prev;s32 id,flags;u64 start,spent,delay;} Node;
Node*func_001B6AE8(Node*p){Node*prev=p->prev;Node*next=p->next;if(prev)prev->next=next;else *(Node**)(jtbl_004C006C+0x4EFC)=next;if(next)next->prev=p->prev;p->prev=0;return next;}
void func_001B6A60(Node*p){Node*prev=0;struct Pool {u8 pad[24];Node*head;}*g=(struct Pool*)(jtbl_004C006C+0x4EE4);Node*cur=g->head;u64 time;time=p->delay;time+=p->start;time-=p->spent;while(cur && time >= cur->delay+cur->start-cur->spent){prev=cur;cur=prev->next;}p->prev=prev;p->next=cur;if(cur)cur->prev=p;if(prev)prev->next=p;else g->head=p;}
